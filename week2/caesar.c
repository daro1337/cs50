#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // max 2 args
    if (argc != 2)
    {
     printf("Usage: ./caesar k\n");
     return 1;
    }
 // AD.2
  int num = atoi(argv[1]) %26;

  printf("plaintext: ");
 //ask for PLAINTEXT
 string plaintext=get_string();

// A = 65
// a = 97
//ci = ( pi + k) % 26 
 //konwertowanie na alpha duzych liter
  // for (int alph = 65; alph < 65 +26; alph++)
     // {
     // printf("%c jest %i\n", (char) alph, alph-65);
     // }
 //konwert małe literki
 // for (int alph2 = 97; alph2 < 97 +26; alph2++)
     // {
     //     printf("%c jest %i\n", (char) alph2, alph2-71);
     // }
  printf("ciphertext: ");   
 for (int i = 0, n = strlen(plaintext); i < n; i++)
 {
    //lowercase
    if islower(plaintext[i])
      printf("%c", ((((plaintext[i]+num) - 97) % 26) +97));
    
     //kapitaliki
     else if isupper(plaintext[i])
      printf("%c", ((((plaintext[i]+num) - 65) % 26) +65));
     
     //printuje znaki inne niż A-z i a-z 
     else
      printf("%c", plaintext[i]);
 }

  printf("\n");
    return 0;
}
