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
    struct node* temp2;
    struct node* prevNode;
    
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


    //Reverse the linked List
    temp = head;
    prevNode=NULL;
    temp2 = head;
    while(temp != NULL){
        temp2 = temp;
        temp = temp->next;
        temp2->next=prevNode;
        prevNode=temp2;
    }
    head=prevNode;
    //print whole linked list
    temp = head;
    index=0;
    while (temp != NULL) {
        index++;
        printf("Node %d = %d\n", index, temp->data);
        temp = temp->next;
    }
}