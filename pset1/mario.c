#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int H=0; //height
    int s=0; //spaces
    int h=0; //hashes
    int r=0; //raws

printf("Hello! Lets build stairs for Mario so he can finish his stage.\n");
   while(H<1||H>23)
   {
    printf("Please put the number of stairs You want to build from 0 to 23: ");
    H = get_int();
   }
for(r=0;r<H;r++)
   {
       for(s=0;s<(H-1-r);s++)
          {
          printf(" ");
          }

       for(h=0;h<(H-s);h++)
          {
          printf("#");
          }
      printf("#\n");
   }

}