#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Create initial list
struct Node* createList(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    int data;
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        if(head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Display list
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at middle
void insertMiddle(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    struct Node* slow = head;
    struct Node* fast = head;
    
    // Find middle (tortoise-hare algorithm)
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Insert after middle
    newNode->next = slow->next;
    slow->next = newNode;
}

// Free memory
void freeList(struct Node* head) {
    struct Node* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int n, insertData;
    
    printf("Insert Item in Middle of Linked List\n");
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    struct Node* head = createList(n);
    printf("\nOriginal ");
    displayList(head);
    
    printf("Enter data to insert in middle: ");
    scanf("%d", &insertData);
    insertMiddle(head, insertData);
    
    printf("\nAfter insertion ");
    displayList(head);
    
    freeList(head);
    return 0;
}
