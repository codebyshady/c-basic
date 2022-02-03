#include <stdio.h> 
int main(){
        int a ; 
        printf("if your age under 4 you can play enter your age\n");
        scanf ("%d",&a);
        switch (a)
        {
        case 4:
            printf("Your age is %d you can play coz you are under 4\n" , a);
            break;

        case 3:
            printf("Your age is %d you can play coz you are under 4\n", a);
            break;
        case 2:
            printf("Your age is %d you can play coz you are under 4\n", a);
            break;
        case 1:
            printf("Your age is %d you can play coz you are under 4\n", a);
            break;
        default: printf("Sorry");
        }
    
return 0;

}