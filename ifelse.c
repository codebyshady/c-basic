#include <stdio.h>
 int main(){

    int a ;
        printf("Enter your age to check you can get dl or not :");
            scanf("%d", &a);

            if(a>=18){

                    printf("You can get DL\n");

                 if (a>=60)
                        {
                            printf("you are a senior citizen");
                        }
                }

                else{ 
                

                        printf("Sorry your age must be greater than 18\n");
                    if(a>=16)

                    {printf("but you can drive scooty because your age is more than 16\n ");
                }

                }

return 0;
}