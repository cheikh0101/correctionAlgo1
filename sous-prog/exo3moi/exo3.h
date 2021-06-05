#ifndef hello
#define hello

typedef struct comptebancaire
{
	int numero; // 	EN PRINCIPE LE NUMERO DE COMPTE DOIT ETRE UNE CHAINE DE CARACTERE
	float solde;
	char prenom[20];
	char nom[20];
}comptebancaire;

float virement(float montantvirement, float *sommenouveau);

float retrait(float *sommenouveau ,float montantretrait);

float depot(float montantdepot, float *sommenouveau);

//comptebancaire ouvrircompte(void);

#endif