#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  


void modifyArray(int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = b[i] * 2; 
    }
}

void modifyElement(int e) {
    e = e * 2; 
    printf("Inside modifyElement, e = %d\n", e);
}

int main(void) {
    int a[SIZE] = { 0, 1, 2, 3, 4 };
    int i;

    
    printf("Effect of passing entire array by reference:\n\nThe Values of the original array are:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");

    
    modifyArray(a, SIZE);
    printf("The Values of the modified array are:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }
    printf("\n\n");

    
    printf("\n\nEffect of passing array element by value:\n\nThe Values of a[3] is %d\n", a[3]);
    modifyElement(a[3]);  
    printf("The Values of a[3] is %d\n", a[3]); 

    system("pause");
    return 0;
}
