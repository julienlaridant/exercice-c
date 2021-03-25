#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mot_de_passe(char *passe);

char *mot_de_passe(char *passe)
{
    int i=0;
    printf("Entrez votre chaine :\n");

    do{
        passe[i]=getch();
        if(passe[i]!='\r')
        {
            printf("*");
        }
            i++;

    }while(passe[i-1]!='\r');



    passe[i-1]='\0';
    getch();

    return passe;
}

int main()
{
    char passe[100];

    mot_de_passe(passe);

    printf("\n%s",passe);
    return 0;
}