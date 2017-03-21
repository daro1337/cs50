#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void)
{
        string name=get_string();
        int n = 0;
    //zawsze printuje 1 znak
    printf("%c", toupper(name[0]));
    //zliczam dlugosc stringa
        while (name[n] !='\0')
        {
            n++;
    // dodac if n = ' ' and n +1 = ' ' 
    //then skip +1 dla more comfortable 
            //szukam wszytskich spacji
            if(name[n] == ' ' && name[n] != '\0' )
            {
             int x = n;
             int var1 = x +1;
             //printuje znaki po spacjach:
             printf("%c", toupper(name[var1]));
            }
        }
        printf("\n");
        return 0;
}
