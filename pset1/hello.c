#include <cs50.h>
#include <stdio.h>

int main(void)
{
     printf("name\n");
    string s = get_string();
    printf("hello, %s\n", s);

    //an integer request
    printf("put year of birth:");
    int a = get_int();

    //analyzing
    if(a>1997)
    {
        printf("so young and beautiful\n");
    }
    else
    {
        printf("not so bad, dont be so sad\n");
        printf("not so old, my grandma told\n");
    }
}