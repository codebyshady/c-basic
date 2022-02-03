#include <stdio.h>
int main(){

    int num , m = 1 , r=1;
        printf("Enter a number to get multiplication of :\n");
            scanf("%d",&num);
            do{ r=num*m;
                printf("%d x %d = %d\n",num,m,r);
                m=m+1;



            }while(m<=10);
            
    return 0;
    
    
    



}