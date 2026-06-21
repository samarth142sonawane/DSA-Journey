#include <iostream>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to remove elements
ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* current = dummy;

    while (current->next != NULL) {
        if (current->next->val == val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    ListNode* newHead = dummy->next;
    delete dummy;

    return newHead;
}

// Print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Create: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    cout << "Original List: ";
    printList(head);

    int val = 6;

    head = removeElements(head, val);

    cout << "After Removing " << val << ": ";
    printList(head);

    return 0;
}