#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Hello! Lets count how many bottles of water did You spend today in morning shower.\n");

    //define volume of bottle
    int l;
    do
   {printf("Please put the volume of bottles to be counted, litres:");
    l = get_int();}
   while(l<=0);

    //define minutes in a shower
   int m;
   do
     {printf("Please put the time spent in a shower this morning, min:");
     m = get_int();}
     while(m<0);

    //counting result - bottle quantity wasted in a shower, based on 2 litres/minute
        printf("bottles you wasted: %i\n", (m*2)/l);
}