#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, somme;
    somme=0;

    printf("entrez un nombre : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        somme+=i;
    }
    printf("La somme de 1 a %d est de : %d",n,somme);
    return 0;
   
}