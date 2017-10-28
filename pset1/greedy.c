#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    int Co25=0; //coins of 25 cents
    int Co10=0; //coins of 10 cents
    int Co5=0; //coins of 5 cents
    int Co1=0; //coins of 1 cent

    float AM; //amount in usd
     do
     {
        printf("Lets count coins to be used for change. Please put the amount of change, $: ");
        AM=get_float();
     }
     while (AM<0);

int n=AM*100; // amount in cents
float AMc = (int) round(n);

     while (AMc>= 25)
     {
         Co25++;
         AMc = (AMc-25);
     }
     printf("quantity of coins 25c - %d\n", Co25);

    while (AMc>= 10)
     {
         Co10++;
         AMc = (AMc-10);
     }
     printf("quantity of coins 10c - %d\n", Co10);

         while (AMc>= 5)
     {
         Co5++;
         AMc = (AMc-5);
     }
     printf("quantity of coins 5c - %d\n", Co5);

         while (AMc>= 1)
     {
         Co1++;
         AMc = (AMc-1);
     }
     printf("quantity of coins 1c - %d\n", Co1);

     return 0;
}