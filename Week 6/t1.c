#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* last = NULL;


void create_list();
void insertion();
void deletion();
void traversal();
struct Node* create_node(int data);
void insert_at_end(int data);
void delete_from_beginning();
void delete_from_end();

int main() {
    int choice;
    while (1) {
        printf("1. Create\n 2. Insert\n 3. Delete\n 4. Traverse\n 5. Exit:\n ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create_list(); break;
            case 2: insertion(); break;
            case 3: deletion(); break;
            case 4: traversal(); break;
            case 5: exit(0);
        }
    }
    return 0;
}


struct Node* create_node(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void create_list() {
    int n, data, i;
    printf("Enter no of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        insert_at_end(data);
    }
}


void insert_at_end(int data) {
    struct Node* newNode = create_node(data);
    if (last == NULL) {
        last = newNode;
        newNode->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void insertion() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    insert_at_end(data);
}


void delete_from_beginning() {
    if (last == NULL) return;
    struct Node* temp = last->next;
    if (last == last->next) last = NULL;
    else last->next = temp->next;
    free(temp);
}
void deletion() {
    if (last != NULL) delete_from_beginning();
}


void traversal() {
    if (last == NULL) { printf("Empty\n"); return; }
    struct Node* p = last->next;
    do { printf("%d ", p->data); p = p->next; } while (p != last->next);
    printf("\n");
}


