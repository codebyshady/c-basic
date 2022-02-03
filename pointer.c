#include <stdio.h>
int main(){
                int a=0;
                int b[4];
                int* pt=&a;
                printf("%x\n",pt);
                printf("%x\n",pt+1);
                printf("%x\n",pt+2);
                printf("%x\n",&b);
                printf("%x\n",&b[0]);
                printf("%x\n",&b[1]);



                return 0;



}