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
    struct node* prevNode;
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

    //Delete user specified node
    int Position = 0;
    printf("Which Node do you want to delete : ");
    scanf("%d", &Position);
    temp = head;
    if(Position == 1) {
         temp=head->next;
        temp->prev=NULL;
        head=temp;

        temp = head;
        index=0;
        //print whole linked list
        while (temp != NULL) {
            index++;
            printf("Node %d = %d\n", index, temp->data);
            temp = temp->next;
        }
    }  else if (Position == index) {
        temp = head;
        while (temp->next != NULL) {
        temp = temp->next;
        }
        temp=temp->prev;
        temp->next=NULL;


        temp = head;
        index=0;
        //print whole linked list
        while (temp != NULL) {
            index++;
            printf("Node %d = %d\n", index, temp->data);
            temp = temp->next;
        }
    } else if (Position >1 || Position < index) {
        index=1;
         while (index < Position) {
            prevNode=temp;
            temp = temp->next;
            index++;
        }
        prevNode->next=temp->next;
        temp=temp->next;
        temp->prev=prevNode;


        temp = head;
        index=0;
        //print whole linked list
        while (temp != NULL) {
            index++;
            printf("Node %d = %d\n", index, temp->data);
            temp = temp->next;
        }
    } else {
        printf("Position is out of range");
    }
}