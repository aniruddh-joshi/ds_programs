#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}* head = NULL;

// Create Function
void create(int A[], int n) {
    int i;
    struct Node* t, * last;
    head = malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++) {
        struct Node* t = malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Display Function
void display(struct Node* head) {
    if (head == NULL) {
        printf("LL is Empty");
    }
    struct Node* ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// Reverse Linked List Function
void reverseList() {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main() {
    int a[] = { 3,5,7,9,11,13 };
    create(a, 6);

    printf("Original Linked List: ");
    display(head);

    printf("\nReversed Linked List: ");
    reverseList();
    display(head);

    return 0;
}
