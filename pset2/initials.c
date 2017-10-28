#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) //program to be launched with You name in command-line, like "./initials Vasya Poopkin"

{
for (int i=1; i<argc; i++)  // here i am indicating that program start analyzing from second argument in a command-line, which is the name.
        {
    for (int j=0; j==0; j++)
    {string s = argv[i];
    printf("%c", toupper (s[0])); // here is program transferring lowercase letter to uppercase, taking only first letter from each argument. just in case))
        }
}
	printf("\n");
}
