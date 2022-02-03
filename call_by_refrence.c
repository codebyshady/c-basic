#include <stdio.h>

int func(int * a,int * b){

                *a = 2 ;
                *b = 3 ;


};


int main(){

       int a = 3;
        int b = 3;
        func(&a,&b);

printf ("%d\n%d",a,b);
        return 0;



}