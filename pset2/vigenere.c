#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    for (int i=1; i<argc; i++)                              // indicating that program start analyzing from second argument in a command-line, which is the key.
        {string k = argv[i];
        int n = strlen(k);
        int j = 0;

       {if (isalpha(k[j]) && argc<3)                      //checking the key rules: alphabetical symbols, only one word

        {   printf("Please write the text to be encrypted:\n");
            string text = get_string();                         //grabbing the text for encrypting
            printf("Your text encrypted:\n");

            for (int m=0, l=strlen(text); m<l; m++)
            { char key = k[j%n];

                if (isupper (key)) key = key-65;
                else key = key-97;

                      if (isalpha (text[m]) && isupper (text[m]))                          //finding uppercase letters
                      {printf("%c", (((((char)text[m]-65)+key)%26)+65)); j++;}  //encrypting uppercase letters
                      else if (isalpha (text[m]) && islower (text[m]))                     //finding lowercase letters
                      {printf("%c", (((((char)text[m]-97)+key)%26)+97)); j++;}     //encrypting lowercase lettes
                      else
                      {printf("%c", text[m]); }} printf("\n"); return 0; }

            else
                    {printf("Your key should be the one word\n");
                    return 1;}// here i am breaking the program if key entered is not alphabetical.
            }}                      //leaving all non-alphabetical symbols as it is

}