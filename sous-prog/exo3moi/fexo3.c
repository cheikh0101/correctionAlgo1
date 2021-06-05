#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"exo3.h"


float retrait(float *sommenouveau ,float montantretrait)
{
    if(*sommenouveau >= montantretrait)
    {
        *sommenouveau = *sommenouveau - montantretrait;
         return *sommenouveau;
    }
    else
    {
        printf("retrait impossible mon gas \n");
        return 1;
    }
   
}

float depot(float montantdepot, float *sommenouveau)
{
    *sommenouveau = *sommenouveau + montantdepot;
    return *sommenouveau;
}

 float virement(float montantvirement, float *sommenouveau)
{
    if(*sommenouveau > montantvirement)
    {
        *sommenouveau = *sommenouveau - montantvirement;
        return *sommenouveau;
    }
    else
    {
        printf("transfert impossible mon gas \n");
        return 1;
    }
    
}

/* void virement(float sommeretrait, float sommevirer, float montant)
{
    float solde;

    if(solde >= montant)
    {
        retrait(&sommeretrait,montant);

        depot(montant,&sommevirer);

        printf("virement effectue\n");
    }
  
}

void affichage(comptebancaire n,s)
{
    
	printf("%s", n.prenom);

	printf("%s", n.nom);

	printf("%d", &s.numero);

	printf("%f", &s.solde);

}


void ouvrircompte()
{
    printf("votre prenom svp : ");
	scanf("%s", n.prenom);

	printf("votre nom svp : ");
	scanf("%s", n.nom);

    printf("montant de votre solde svp : ");
	scanf("%f", &s.solde);

    s.numero = rand();
}
    AUTRE MANIERE D'OUVRIR UN COMPTE BANCAIRE

comptebancaire ouvrircompte(char *n,char *p,double s)
{
    comptebancaire a;
    s.numero = rand();
    strcpy(a.nom,n);
    strcpy(a.prenom,p);
    a.solde = s;
    return a;
}

comptebancaire ouvrircompte()
{
    comptebancaire n;

    printf("votre prenom svp : ");
	scanf("%s", n.prenom);

	printf("votre nom svp : ");
	scanf("%s", n.nom);

    printf("montant de votre solde svp : ");
	scanf("%f", &n.solde);

    n.numero = rand();

    return n;
}
*/



