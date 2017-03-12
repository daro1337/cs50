#include <stdio.h>
#include <cs50.h>
#include  <math.h>

int main(void)
{
   float change;
   int count=0;
    // pytamy usera o resztę do wydania.
    do
    {
    printf("O hai! How much change is owed?\n");
    change = round((get_float()*100));
    }
    while (change < 0);
   
   
   while(change >= 25 )
   {
    count++;
    change=(change-25);
   }
   
    while(change >= 10)
   {
    count++;
    change=(change-10);
   }
   
    while(change >= 5 )
   {
    count++;
    change=(change-5);
   }
    while(change >= 1)
   {
    count++;
    change=(change-1);
   }
   
   printf("%i\n", count);
   
    return 0;    
}