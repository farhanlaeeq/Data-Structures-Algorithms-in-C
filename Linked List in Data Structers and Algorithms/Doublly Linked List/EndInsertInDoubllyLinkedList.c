#include <stdio.h>
#include <stdlib.h>  // Include the necessary header for malloc

void main() {
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
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
        newnode->prev = NULL;
        
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev=temp;
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

    //Insert a new node at the begining
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert node at the end: ");
    scanf("%d", &newnode->data);

    temp = head;
    while (temp->next != NULL) {
       temp = temp->next;
    }
    newnode->prev=temp;
    newnode->next=NULL;
    temp->next=newnode;

    
    temp = head;
    //print whole linked list
    while (temp != NULL) {
        index++;
        printf("Node %d = %d\n", index, temp->data);
        temp = temp->next;
    }
    //Traverse in reverse direction
    index = 0;
    temp = head;
    while (temp->next != NULL) {
       temp = temp->next;
    }
    while (temp != NULL) {
        index++;
        printf("\nNode %d = %d", index, temp->data);
        temp = temp->prev;
    }
}