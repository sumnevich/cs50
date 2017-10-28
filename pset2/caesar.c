#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);                                // here is key entered is converting to integer
    for (int i=1; i<argc; i++)                              // here i am indicating that program start analyzing from second argument in a command-line, which is the key.
    {
        if (key>25||key<1||argc>2)                          // here i am breaking the program if key entered is not one integer from 1 to 25.
        {printf("Sorry, You have to enter the only one key - an integer from 1 to 25. Try again!\n");
            return 1;}
        else                                                // here is a program body in case key entered is OK
         {
        printf("Please write the text to be encrypted:\n");
        string text = get_string();                         //grabbing the text for encrypting
        printf("Your text encrypted:\n");

         for (int j=0, n=strlen(text); j<n; j++)            //dividing my text string into separate symbols
         {if (isalpha (text[j]) && isupper (text[j]))       //finding uppercase letters
            printf("%c", ((((char)text[j]+key)-65)%26)+65); //encrypting uppercase letters
         else if (isalpha (text[j]) && islower (text[j]))   //finding lowercase letters
            printf("%c", ((((char)text[j]+key)-97)%26)+97); //encrypting lowercase lettes
         else
            printf("%c", text[j]);}                         //leaving all non-alphabetical symbols as it is
         printf("\n");}
    }
return 0;}