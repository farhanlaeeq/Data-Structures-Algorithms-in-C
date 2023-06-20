#include <stdio.h>

void main() {
    int a[2][3] = {9,8,7,4,5,7};
    int *p = a[0][0];
    int *q = &p;
        printf("\nValue of P %d",p);
        printf("\nValue of a[0] %d",a[0]);
        printf("\nValue of a[0] + 1 %d",a[0] +1);
        printf("\nValue of a+1 %d",a +1);
        printf("\nValue of &a+1 %d",&a +1);
        printf("\nValue of a[1] + 1 %d",a[1] +1);
        printf("\nValue %d",&a[1] +1);
        printf("\nValue %d",q);
        printf("\nValue %d",*q);
        printf("\nValue %d",*a);
        printf("\nValue %d",**a);
}