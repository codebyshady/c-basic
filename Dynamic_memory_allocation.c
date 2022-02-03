#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int s;
    printf("Enter the size of arrey you want to genrate \n");
    scanf("%d", &s);
    ptr = (int *)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++)
    {
        printf("Enter the value in %d array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < s; i++)
    {

        printf("The value in %d array is %d\n", i, ptr[i]);
    }
    free (ptr);
    
    return 0;
}