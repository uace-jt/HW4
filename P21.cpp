#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
    int array1[2][3] = { {1,2,3},{4,5,6} };
    int array2[2][3] = { 1,2,3,4,5, };
    int array3[2][3] = { {1,2},{4} };

    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each fuction:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n");
    system("pause");
    return 0;
}

void staticArrayInit(void)
{
    static int array1[3];
    int i;

    printf("\nValues on entering staticArrayInit:\n");

    for (i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d  ",i,array1[i]);
    }
    printf("\nValues on eniting staticArrayInit:\n");
    
    for (i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d  ",i, array1[i]+=5);
    }
}

void automaticArrayInit(void)
{
    int array2[3] = { 1,2,3 };
    int i;

    printf("\n\nValues on entering automicArrayInit:\n");

    for (i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d  ", i, array2[i]);
    }
    printf("\nValues on eniting automicArrayInit:\n");

    for (i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d  ", i, array2[i] += 5);
    }
}