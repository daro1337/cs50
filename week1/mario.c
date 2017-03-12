#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, rows, space, hash, hash2;
   do
   {
      //ask user for height
     printf("Height:");
     rows = get_int();
   }
   // height can be from 0-23
   while (rows < 0 || rows > 23);
  // i -  iteracja wierszy (rows)
  // i= 0 to pierwsyz row, w nim loop na robienie
  //ilosci spacji a nastepny for na robienie haszy.
  //
  for (i = 0; i < rows; i++)
  {
      //printf("x");
      // ten for robi spacje
      for ( space = 0; space<=rows-2-i; space++)
      {
          printf(" ");
      }
     
      // ten for robi hasha
      for ( hash = 0; hash<=i;hash++)
      {
          printf("#");
          
      }
      printf("  ");
      
      for(hash2=0; hash2<=i;hash2++)
      {
          printf("#");
      }
      
      printf("\n");
  }
  
  
  
   return 0;
}