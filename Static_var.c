#include <stdio.h>
int func1()
{
    static int a = 5;   
    a++;
    printf("Value of a is %d\n", a);
    return a;
}
int main()
{
// the value of a will change evrytime the function 1 is been called...
// One should minimize use of static varible because it freez the memory until the program not get over.
    func1();
    func1();

 func1();
return 0;}