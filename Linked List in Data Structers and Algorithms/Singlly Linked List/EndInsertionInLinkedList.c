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
    //print last node
    index = 0;
    temp = head;
    while (temp != NULL) {
        index++;
        if(temp->next == NULL) {
            printf("The last node is number %d having data = %d", index, temp->data);
            temp = temp->next;
        } else {
            temp = temp->next;
        }
    }

    //insert a new node at last place
    newnode = (struct node*)malloc(sizeof(struct node));    
    printf("\nEnter the data in the new node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp = head;
    while (temp != NULL) {
        if(temp->next == NULL) {
            temp->next =newnode;
            temp = NULL;
        } else {
            temp = temp->next;
        }
    }
    //print whole linked list
    temp = head;
    index=0;
    while (temp != NULL) {
        index++;
        printf("Node %d = %d\n", index, temp->data);
        temp = temp->next;
    }
}