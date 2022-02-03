#include <stdio.h>
#include <string.h>
struct x
{

    int srno;
    char name[50];
    double marks;
};
struct x s1, s2;

int main()
{
    typedef int in;
    in a = 5;
    in* p = &a;

    s1.srno = 1;
    strcpy(s1.name, "Saurabh");
    s1.marks = 100.00;

    printf("first user serial no. %d\n First user name :%s\n First user marks: %lf\n   address of a intiger marked a :%x", s1.srno, s1.name, s1.marks , p);

    return 0;
}