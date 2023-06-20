#include <stdio.h>
#include <stdlib.h>  // Include the necessary header for malloc

void main() {
    struct node
    {
        int data;
        struct node* next;
    };
    
    struct node* head = NULL;
    struct node* newnode;
    struct node* temp;
    
    int choice = 1;
    int index = 0;
    
    while (choice == 1) {
        newnode = (struct node*)malloc(sizeof(struct node));
        
        printf("Enter the data in the node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        
        printf("Do you want to add another node? [0/1]: ");
        scanf("%d", &choice);
    }
    
    temp = head;
    //print whole linked list
    while (temp != NULL) {
        index++;
        printf("Node %d = %d\n", index, temp->data);
        temp = temp->next;
    }
    //delete the first node
    printf("\nDeleting Last Node: \n");
    temp = head;
    head = temp->next;
    free(temp);
    //print whole linked list
    temp = head;
    index=0;
    while (temp != NULL) {
        index++;
        printf("Node %d = %d\n", index, temp->data);
        temp = temp->next;
    }
}