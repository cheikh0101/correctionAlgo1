//probleme on travaille avec 2 comptes bancaires

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"exo3.h"

#define lire printf

/* LA STRUCTURE DOIT ETRE DEFINIE DANS LE FICHIER .h
typedef struct comptebancaire
{
	int numero; // 	EN PRINCIPE LE NUMERO DE COMPTE DOIT ETRE UNE CHAINE DE CARACTERE
	float solde;
	char prenom[20];
	char nom[20];
}comptebancaire;*/



int main()
{
	comptebancaire n,s;
	float virer,deposer,retirer;

	printf("votre prenom svp : ");
	scanf("%s", n.prenom);

	printf("votre nom svp : ");
	scanf("%s", n.nom);

	/* on peut utiliser la fonction rand pour attribuer a la machine d'attribuer a l'utilisateur un numero de compte
	printf("votre numero de compte svp : ");
	scanf("%d", &c.numero);*/
	s.numero = rand();

	printf("montant de votre solde svp : ");
	scanf("%f", &s.solde);

	printf("indiquez la somme que vous souhaitez retirer : ");
	scanf("%f",&retirer);

	printf("indiquez la somme que vous souhaitez deposer : ");
	scanf("%f",&deposer);

	printf("indiquer la somme que vous souhaitez virer dans un autre compte : ");
	scanf("%f", &virer);

	printf("\n");

	printf("passons a l'affichage\n");

	printf("\n");

	printf("Mr ou Mmme %s né(e) %s %s \n Possedant le compte bancaire ayant le numéro %d \n Voila l'etat de votre compte : \n",n.nom,n.prenom,n.nom,s.numero);

	if(s.solde > retirer)
	{
		printf("apres retrait de %f le solde de votre compte est : %f \n",retirer,retrait(&s.solde,retirer));
	}
	else
	{
		retrait(&s.solde,retirer);
	}
	printf("apres depot  de %f le solde de votre compte est : %f \n",deposer,depot(deposer,&s.solde));

	if(s.solde > virer)
	{
		printf("apres virement de %f le solde de votre compte est : %f \n",virer,virement(virer,&s.solde));
	}
	else
	{
		virement(virer,&s.solde);
	}
	


}
