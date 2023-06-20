#include <stdio.h>

void main() {
    int a[5] = {9,8,7,4,5};
    for(int i=0; i < 5; i++){
        printf("\nEnter Value %d: ", i);
        scanf("%d", &a[i]);
    }
    for(int i=0; i < 5; i++){
        printf("\nValue %d is: %d", i + 1,a[i]);
    }
    // int marks;
    // char name[30];
    // printf("Enter student's name: ");
    // scanf("%s", name[0]);
    // printf("Enter marks in Maths: ");
    // scanf("%d", &marks);
 
    // printf("Hello %s! You have scored %d in Maths!", name, marks);
}