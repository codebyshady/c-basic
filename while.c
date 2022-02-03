#include <stdio.h>
int main()

        {
            int a=0,n;
            printf("Enter the number upto which you want counting:\n");
            scanf("%d",&n);

            while (a<=n)
            {                               
                printf("%d\n",a);
                a=a+1;
            }
            return 0;
        }