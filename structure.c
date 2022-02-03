#include <stdio.h>
#include <string.h>
struct x
{
    char name[50];
    int citNo;
    double salary;
};
struct x s1, s2, s3;

int main()
{
    // value for first form of structure.
    strcpy(s1.name, "Saurabh");
    s1.citNo = 1;
    s1.salary = 99999999999.112;
    printf("First person name : %s\n", s1.name);
    printf("CitNo for first person i: %d\n", s1.citNo);
    printf("salary of first user :c %lf\n", s1.salary);
    // Data for second user input by user
    puts("Now put the name of second user");
    gets(s2.name);
    puts("Second user CitNo.:");
    scanf("%d", &s2.citNo);
    printf("Enter %s's salary:\n", s2.name);
    scanf("%lf", &s2.salary);
    // print info. of second user 
    printf("Second user details:\n Name:%s\n CitNo:%d\n Salary:%lf\n", s2.name, s2.citNo,s2.salary);
    printf("space left in name memory %d",50 - strlen(s2.name));
    return 0;
}