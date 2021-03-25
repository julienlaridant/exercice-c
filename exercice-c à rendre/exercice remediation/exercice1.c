#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char caractere[6];
    printf("entrez un nombre");
   scanf("%d", caractere); 
    if(strlen(caractere)>6)
        {
            printf("nombre trop grand");
        }
    

    printf("%s\n", caractere);
    return 0;

}