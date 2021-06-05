#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include<math.h>

float somme1(float x, float y)
{
  return x+y;
}

float puissance(float x, float y)
{
  return pow(x,y);
}

void permutation(float *x, float *y)
{
  float tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;

}

void affichage1(float x, float y)
{
  printf("on a X=%.2f\n",x );

  printf("on a Y=%.2f\n",y );
}


float somme (float *T, int n)
{
  float som=0;
  int i=0;
  for(; i<n; i++){
    som += T[i];  
  }
    return som;
}

float  petit(float *T,int n)
{
    float min=T[0];
    int i;
    for(i=1; i<n; i++){
    if (T[i] < min) min=T[i];
  }
  return min;
}

float  grand(float *T,int n)
{
    float max=T[0];
    int i;
    for(i=1; i<n; i++){
    if (T[i] > max) max=T[i];
  }
  return max;
}

void croissant(float *t ,int taille)
{
  int i, j;
  float tmp;
  for(i=0;i<taille; i++){
    for(j=i+1; j<taille ;j++){
      if (t[i] > t[j]){
        tmp=t[i];
        t[i]=t[j];
        t[j]=tmp;
      }
    }   
  }
  for(j=0; j<taille;j++){
    printf("%.2f\t",t[j]);
  }
}

void affichage( float *t ,int taille,int posi)
{
  while(posi <taille)
  {
    printf("%.2f\t",t[posi]);
    posi++;
  }
}

void recursive(float *t , int taille)
{
  static int i=0; 
  printf("%.2f\t", t[i]);
  i++;
  if (i<taille)  recursive(t, taille);
}


typedef struct comptebancaire
{
  int numero;
  char nom[20];
  char prenom[50];
  float solde;
}
comptebancaire;
//retrait d'un montant
void retrait(comptebancaire *A, int montant)
{
  if(montant<=(*A).solde){
    (*A).solde-=montant;
    //printf("retrait effectue\n");

  }
  else
    printf("solde insuffisant ==> RETRAIT IMPOSSIBLE\n");

}

//depot d'un montant
void depot (comptebancaire *A, int montant)
{
  (*A).solde+=montant;
  //printf("depot effectuee\n");
}

void virement (comptebancaire *A, comptebancaire *B, int montant)
{
  if((*A).solde>=montant)
  {

    depot(B, montant);
    //printf("virement effectuee\n");

  }
  retrait(A, montant);
}

void afficher(comptebancaire A)
{
  printf(" Mr ou Mme %s\n\t",A.nom);
  printf("Ne(e) %s %s\n\t",A.prenom,A.nom);
  printf("===>Ayant comme solde en banque%f\n\t\t",A.solde);
  printf("====>Ayant le numero de compte%d\n",A.numero);
}


  comptebancaire ouvrir(void)
  {
    comptebancaire A;
    A.numero=rand();
    printf("entrer votre nom : ");
    scanf("%s",A.nom);
    printf("entrer votre prenom : ");
    scanf("%s",A.prenom);
    printf("entrer votre solde : ");
    scanf("%f",&A.solde);
    return A;

  }


typedef struct etudiant
{
  int matricule;
  char nom[20], prenom[50], mention[25];
  float note;
}etudiant;

etudiant enregistrer (char *nom, char *prenom, float note)
{
  static int i=1;
  etudiant A;
  A.matricule=++i;
  strcpy(A.nom, nom);
  strcpy(A.prenom, prenom);
  A.note=note;
  if (note>=16){
    strcpy(A.mention, "tres bien");
    printf("l etudiant a la mention tres bien\n");
  } 
  else if(note>=14){
    strcpy(A.mention, "bien");
    printf("l etudiant a la mention bien\n");
  }
  else if(note>=12){
    strcpy(A.mention, "assez bien");
    printf("l etudiant a la mention assez bien\n");
  }
  else if(note>=10){
    strcpy(A.mention, "passable");
    printf("l etudiant a la mention passable\n");
  }
  else{
    strcpy(A.mention, "Neant");
    printf("l etudiant n'a pas de mention\n");
  }
  return A;
}

void chercher1 (char *mention, etudiant *classe, int effectif)
{
  int i;
  int p=0;

  for(i=0; i<effectif; i++)
  {
    printf("\n");
    if(strcasecmp(classe[i].mention, mention)==0)
    {
      
      p++;
      printf("Matricule : %d  \nNom : %s  \nPrenom : %s  \nNote : %f \nMention : %s\n  ", classe[i].matricule, classe[i].nom, classe[i].prenom, classe[i].note, classe[i].mention);
    }
   /* else
      printf("Aucun etudiant n'a cette mention !!\n");*/
  }
  if (p==0)
  {
    printf("Aucun etudiant n'a cette mention !!\n");  }
}

void chercher2 (float note, etudiant *classe, int effectif)
{
  int i,p=0;
  
  for(i=0; i<effectif; i++)
  {
    if(classe[i].note==note)
    {
      p++;
      printf("Matricule : %d  \nNom : %s  \nPrenom : %s   \nNote : %f \nMention : %s\n\n", classe[i].matricule, classe[i].nom, classe[i].prenom, classe[i].note, classe[i].mention);
    }
  }
  if (p==0)
  {
    printf("AUCUN N'ETUDIANT N'A EU CETTE NOTE\n");
  }
}

void merite(etudiant *classe, int effectif)
{
  int i, j;
  etudiant tmp;
  for(i=0; i<effectif; i++)
  {
    for(j=i+1; j<effectif; j++)
    {
      if(classe[i].note<classe[j].note)
      {
        tmp=classe[i];
        classe[i]=classe[j];
        classe[j]=tmp;
      }
    }
  }
  for(i=0; i<effectif; i++)
  {
    printf("\n");
    printf("nom : %s\nprenom : %s\nmatricule : %d\nnote : %f\nmention : %s\n",classe[i].nom, classe[i].prenom, classe[i].matricule, classe[i].note, classe[i].mention );
  }
}





void fin()
{
  for( int i=0;i<3;i++)
  {
    system("cls");
    system("color b");
    system("color d");
    system("color a");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t  888888b.                          888888b.");
    printf("\n\t\t\t\t\t\t  888   88b                         888  88b");
    printf("\n\t\t\t\t\t\t  888  .88P                         888  .88P");
    printf("\n\t\t\t\t\t\t  8888888K.  888  888  .d88b.       8888888K.  888  888  .d88b.");
    printf("\n\t\t\t\t\t\t  888   Y88b 888  888 d8P  Y8b      888   Y88b 888  888 d8P  Y8b");
    printf("\n\t\t\t\t\t\t  888    888 888  888 88888888      888    888 888  888 88888888");
    printf("\n\t\t\t\t\t\t  888   d88P Y88b 888 Y8b.          888   d88P Y88b 888 Y8b.");
    printf("\n\t\t\t\t\t\t  8888888P    Y88888   Y8888        8888888P     Y88888  Y8888");
    printf("\n\t\t\t\t\t\t                  888                               888        ");
    printf("\n\t\t\t\t\t\t              Y8b d88P                          Y8b d88P         ");
    printf("\n\t\t\t\t\t\t                Y88P                              Y88P          \n\n\n\n");
    Sleep(315);
  }
}


void fin1()
{
  int a;
  for( a=0 ; a<5 ; a++ ){
    system("cls");
    system("color b");
    system("color d");
    system("color a");
    printf("\n\n\n\n\n\n\n\t\t         .o.     ooooo     ooo    ooooooooo.  oooooooooooo oooooo     oooo  .oooooo.    ooooo ooooooooo.      .o.    .o.");
    printf("\n\t\t        .888.    `888'     `8'    888   `Y88. `888'     `8  `888.     .8'   d8P'  `Y8b  `888' `888   `Y88.    888    888");
    printf("\n\t\t       .8 888.    888       8     888   .d88'  888           `888.   .8'   888      888  888   888   .d88'    888    888");
    printf("\n\t\t      .8' `888.   888       8     888ooo88P'   888oooo8       `888. .8'    888      888  888   888ooo88P'     Y8P    Y8P");
    printf("\n\t\t     .88ooo8888.  888       8     888`88b.     888             `888.8'     888      888  888   888`88b.       `8'    `8'");
    printf("\n\t\t    .8'     `888. `88.    .8'     888  `88b.   888              `888'      `88b    d88'  888   888  `88b.     .o.    .o.");
    printf("\n\t\t   o88o     o8888o   YbodP'      o888o  o888o o888ooooood8       `8'        `Y8bood8P'  o888o o888o  o888o    Y8P    Y8P\n\n\n\n\n\n");

  }
}



int main ()
{

  int i,a;
  float menu,choix;

  for( a=0;a<5;a++)
  {

    system("color e");
    system("color c");
    system("color a");
    system("color b");
    system("color d");
    system("color a");
    printf("\n\n");
    printf("\t\t\t\t\t\t                \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\n");
    printf("\t\t\t\t\t\t                \1                                \1\n");
    printf("\t\t\t\t\t\t                \1  VEUILLEZ AGRANDIR LA PAGE SVP \1 \n");
    printf("\t\t\t\t\t\t                \1                                \1\n");
    printf("\t\t\t\t\t\t                \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\n\n\n");
  }
  system("pause");
  system("cls");

  printf("\n\n\n\n\n\n");
  system("COLOR E2");
  char b[]="\t\t\t\t\t\t\t          REPUBLIQUE ";
  for(i=0;i<strlen(b);i++)
  {
    putchar(b[i]);
    Sleep(100);
  }
  system("COLOR E6");
  char TI[]="DU ";
  for(i=0;i<strlen(TI);i++)
  {
    putchar(TI[i]);
    Sleep(200);
  }
  system("COLOR E4");
  char KI[]="SENEGAL\n ";
  for(i=0;i<strlen(KI);i++)
  {
    putchar(KI[i]);
    Sleep(100);
  }
  system("COLOR E2");
  char c[]="\t\t\t\t\t\t\t\t      ----**-**----\n";
  for(i=0;i<strlen(c);i++)
  {
    putchar(c[i]);
    Sleep(20);
  }
  printf("\t\t\t\t\tMINISTERE DE L'ENSEIGNEMENT SUPERIEUR DE LA RECHERCE ET DE L'INNOVATION\n");
  char z[]="\t\t\t\t\t\t                   ----**-**----\n";
  for(i=0;i<strlen(z);i++)
  {
    putchar(z[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\t\t\t         UNIVERSITE DE THIES\n");
  char e[]="\t\t\t\t\t\t                   ----**-**----\n";
  for(i=0;i<strlen(e);i++)
  {
    putchar(e[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\tUNITE DE FORMATION DE RECHERCHE EN SCIENCES ET TECHNOLOGIES\n");
  char y[]="\t\t\t\t\t\t                   ----**-**----\n";
  for(i=0;i<strlen(y);i++)
  {
    putchar(y[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\t\t\t         DEPARTEMENT INFORMATIQUE\n");
  char w[]="\t\t\t\t\t\t                   ----**-**----\n";
  for(i=0;i<strlen(w);i++)
  {
    putchar(w[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\t\t\tPROMO 18--19: ANNEE ACADEMIQUE : 2018--2019\n");
  char j[]="\t\t\t\t\t\t                   ----**-**----\n";
  for(i=0;i<strlen(j);i++)
  {
    putchar(j[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\t\t\t     Licence 1 en INFORMATIQUE\n");
  char s[]="\t\t\t\t\t\t                    ---**-**-----\n";
  for(i=0;i<strlen(s);i++)
  {
    putchar(s[i]);
    Sleep(10);
  }
  printf("\t\t\t\t\t\t\tINF 1141 : ALGORITHMIQUE ET PROGRAMMATION 2\n");
  printf("\t\t\t\t\t\t                    ---**-**-----\n");
  char d[]="\t\t\t\t\t\t\tCM: Pr.THIAM--TD/TP: M.DIOP && M.NDIAYE\n";
  for(i=0;i<strlen(d);i++)
  {
    putchar(d[i]);
    Sleep(50);
  }
  system("pause");
  system("cls");

  for( a=0;a<5;a++)
  {
    system("color b");
    system("color d");
    system("color a");
    system("cls");
    printf("\t\t\t\t\t\t 888888b.   d8b                                                                  \n");
    printf("\t\t\t\t\t\t 888  '88b  Y8P                                                                   \n");
    printf("\t\t\t\t\t\t 888  .88P                                                                        \n");
    printf("\t\t\t\t\t\t 8888888K.  888  .d88b.  88888b.  888  888  .d88b.  88888b.  888  888  .d88b.     \n");
    printf("\t\t\t\t\t\t 888   Y88b 888 d8P  Y8b 888  88b 888  888 d8P  Y8b 888  88b 888  888 d8P  Y8b    \n");
    printf("\t\t\t\t\t\t 888    888 888 88888888 888  888 Y88  88P 88888888 888  888 888  888 88888888    \n");
    printf("\t\t\t\t\t\t 888   d88P 888 Y8b.     888  888  Y8bd8P  Y8b.     888  888 Y88b 888 Y8b.        \n");
    printf("\t\t\t\t\t\t 8888888P   888   Y8888  888  888   Y88P     Y8888  888  888   Y88888   Y8888     \n\n");

    printf("\t\t\t\t     888                                                                            \n");
    printf("\t\t\t\t     888                                  \t\t\t                   888                         \n");
    printf("\t\t\t\t     888                                  \t\t\t                   888                         \n");
    printf("\t\t\t\t .d88888  8888b.  88888b.  .d8888b        \t\t\t88888b.   .d88b.   888888 888d888  .d88b.       \n");
    printf("\t\t\t\td88  888      88b 888  88b 88K            \t\t\t888  88b d88  88b  888    888P   d8P  Y8b      \n");
    printf("\t\t\t\t888  888 .d888888 888  888  Y8888b.       \t\t\t888  888 888  888  888    888    88888888      \n");
    printf("\t\t\t\tY88b 888 888  888 888  888      X88       \t\t\t888  888 Y88..88P  Y88b.  888    Y8b.          \n");
    printf("\t\t\t\t  Y88888  Y888888 888  888  88888P'       \t\t\t888  888   Y88P    Y888   888      Y8888      \n\n\n");



    printf("\t\t\t\t\t\t\t8888888b.  8888888b.   .d88888b. 888888 8888888888 88888888888      \n");
    printf("\t\t\t\t\t\t\t888   Y88b 888   Y88b d88P   Y88b   88b 888            888          \n");
    printf("\t\t\t\t\t\t\t888    888 888    888 888     888   888 888            888          \n");
    printf("\t\t\t\t\t\t\t888   d88P 888   d88P 888     888   888 8888888        888          \n");
    printf("\t\t\t\t\t\t\t8888888P   8888888P   888     888   888 888            888          \n");
    printf("\t\t\t\t\t\t\t888        888 T88b   888     888   888 888            888          \n");
    printf("\t\t\t\t\t\t\t888        888  T88b  Y88b. .d88P   88P 888            888          \n");
    printf("\t\t\t\t\t\t\t888        888   T88b   Y88888P     888 8888888888     888          \n");
    printf("\t\t\t\t\t\t\t                                   d88P                             \n");
    printf("\t\t\t\t\t\t\t                                d8888P                                \n");
  }

  system("cls");
  time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

  printf("\n\n\n\n\n\n\n\n");

  printf("\t\t\t\t\t\t   *|    ____________________________________________________________    |*\n");
  printf("\t\t\t\t\t\t    | *  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    |  |                   *************************                |   |*\n");
  printf("\t\t\t\t\t\t    | *  |                   *************************                |   |*\n");
  printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    |  * |      Ayant pour but de:                                    |   |*\n");
  printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    | *  |    *  ---------> Regrouper dans un meme programme          |   |*\n");
  printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    | *  |    *  --------->les 4 exercices de la fiche 4               |   |*\n");
  printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    | *  |    * ---------> Portant sur les << sous-programmes>>        |   |*\n");
  printf("\t\t\t\t\t\t    |  |____________________________________________________________|   |*\n");


  system("pause");
  system("cls");
  message:

  do
  {
    system("cls");
    for(a=0;a<5;a++)
    {
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

      printf("\n\n\t\t\t\t\t\t         ================================================= \n");
      printf("\t\t\t\t\t\t         |    *                                         *   | \n");
      printf("\t\t\t\t\t\t         |  *   *  BIENVENUE DANS LE MENU PRINCIPAL   *   * | \n");
      printf("\t\t\t\t\t\t         |    *                                         *   |");
      printf("\n\t\t\t\t\t\t         =================================================\n\n\n\n");
    }

  
    char yy[]="\t\t\t\t\t\t\t\t   1: *-* exercice 1 *-*     \n ";
    for(i=0;i<strlen(yy);i++)
    {
      putchar(yy[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
    char zz[]="\t\t\t\t\t\t\t\t   2: *-* exercice 2 *-* \n";
    for(i=0;i<strlen(zz);i++)
    {
      putchar(zz[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
    char ff[]="\t\t\t\t\t\t\t\t   3: *-* exercice 3 *-*  \n  ";
    for(i=0;i<strlen(ff);i++)
    {
      putchar(ff[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
    char f[]="\t\t\t\t\t\t\t\t    4: *-* exercice 4 *-*  \n    ";
    for(i=0;i<strlen(f);i++)
    {
      putchar(f[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
    char p[]="\t\t\t\t\t\t\t\t    5: *-* COPYRIGHT *-*   \n";
    for(i=0;i<strlen(p);i++)
    {
      putchar(p[i]);
      Sleep(10);
    }

    printf("Taper votre choix:");scanf("%f",&menu );

    if (menu<0 || menu>5 || menu!= (int)menu)
    {


  for( a=0;a<5;a++)
  {
    printf("\n\n\n\n\n\n");
    system("cls");
    system("color e");
    system("color c");
    system("color a");
    system("color b");
    system("color d");
    system("color a");

        printf("###  ###                                          ###  ### \n");
        printf("###  ###  ######  #####   #####    ####   #####   ###  ### \n");
        printf("###  ###  #       #    #  #    #  #    #  #    #  ###  ### \n");
        printf(" #    #   #####   #    #  #    #  #    #  #    #   #    #  \n");
        printf("          #       #####   #####   #    #  #####            \n");
        printf("###  ###  #       #   #   #   #   #    #  #   #   ###  ### \n");
        printf("###  ###  ######  #    #  #    #   ####   #    #  ###  ### \n");

      }
    }
  }
  while(menu<0 || menu>5 || menu!= (int)menu);
  switch ((int)menu)
  {
    
    exo1:
    case 1:
    {
        system("cls");
        time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
         printf("\n\n\n\n\n\n\n\n");
         printf("CE PROGRAMME A POUR BUT DE:\n\n\t==>CALCULER LA SOMME DE x ET y\n\t\t===>CALCUL x A LA PUISSANCE y\n\n\t\t\t====>PERMUTATION DES VALEURS DE x ET y\n\n\t\t\t\t\t=====>AFFICHAGE DE x ET y\n");
         printf("\n");
         system("pause");
         system("cls");
time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
         float x,y;

          printf("veuillez donner 2 nombres svp\n");
          scanf("%f",&x);
          scanf("%f",&y);

          printf("la somme des 2 nombres(%.2f + %.2f) est %.2f\n",x,y,somme1(x,y));

          printf("le calcul de la puissance donne %.2f\n", puissance(x,y));

          printf("avant la permutation :\n");
          affichage1(x,y);

          printf("\n");

          permutation(&x,&y);

          printf("apres la permutation nous avons :\n");
          affichage1(x,y);


    }
    printf("FIN DE L'EXERCICE\n");
    printf("taper 1 pour revenir au menu principal \n");
    printf("\n" );
    printf("Taper 2 pour reessayer\n");
    printf("\n" );
    printf("Taper une autre touche pour quitter\n");
    scanf("%f",&choix );
    if (choix==1)
    {
      goto message;
    }
    else
      if (choix==2)
      {
        goto exo1;
      }
    else

      {
        fin1();

    }
    return 0;
    break;
    exo2 :
    case 2:
    {

      system("cls");
      printf("\n\n\n\n\n\n\n\n");
      printf("\t\t\t*-*CE PROGRAMME A POUR BUT DE MANIPULER UN TABLEAU DE REELS A TRAVERS 3 SOUS-PROGRMMES*-*\n");
       printf("\n\n\n\n\n\n\n\n");
      system("pause");
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

      float *t;
        int taille ,i;

        do
        {
        printf("La taille du tableau svp... ");
        scanf("%d",&taille);
        }
        while(taille<=0);

        t= (float*)malloc(sizeof(float)*taille);

        for(i=0 ; i<taille; i++)
        {
          printf(" Saisir l'element numero %d : ",i+1);
          scanf("%f",&t[i]);
        }

        printf("La somme des elements du tableau : %.2f\n\n", somme(t,taille));

        printf("Le plus petit element du tableau est %.2f\n\n",petit(t,taille));

        printf("L plus grand element du tableau est %.2f\n\n",grand(t,taille));

        printf("Rangement par ordre croissant\n\n");
        croissant(t ,taille);

        printf("\n Affichage a partir de la position 2\n\n");
        affichage(t,taille, 2);
        
        printf("\n Affichage recursive \n\n");
        recursive(t,taille);

    }

    printf("FIN DE L'EXERCICE\n");
    printf("taper 1 pour revenir au menu principal \n");
    printf("\n" );
    printf("Taper 2 pour reessayer\n");
    printf("\n" );
    printf("Taper une autre touche pour quitter\n");
    scanf("%f",&choix );
    if (choix==1)
    {
      goto message;
    }
    else
      if (choix==2)
      {
        goto exo2;
      }
    else

      {
      fin();

    }
    return 0;
    break;
    exo3 :
    case 3:
    {
       system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t+-+ CE PROGRAMME A POUR BUT DE GERER LES MOUVEMENTS D'UN COMPTE BANCAIRE +-+\n");
         printf("\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

        comptebancaire A,B;
          int montant1;
          printf("\n");
          printf("CECI SONT LES COORDONNEES DU PREMIER CLIENT\n");
          A=ouvrir();

          printf("\n");
          printf("entrer le montant que vous souhaitez transferer au second client svp: ");
          scanf("%d",&montant1);


          printf("\n");
          printf("CECI SONT LES COORDONNEES DU SECOND CLIENT\n");
          B=ouvrir();
          

          depot(&A,montant1);
              
          retrait(&A,montant1);
            
          virement(&A,&B,montant1);

          printf("\n");
          printf("cher premier client voici l'etat de votre compte\n");
          afficher(A);


          printf("\n");
          printf("cher second client voici l'etat de votre compte\n");
          afficher(B);
          
    }

    do
    {
    printf("FIN DE L'EXERCICE\n");
    printf("taper 1 pour revenir au menu principal \n");
    printf("\n" );
    printf("Taper 2 pour reessayer\n");
    printf("\n" );
    printf("Taper une autre touche pour quitter\n");
    scanf("%f",&choix );


  }
  while(choix != (int)choix);
    if (choix==1)
    {
      goto message;
    }
    else
      if (choix==2)
      {
        goto exo3;
      }
    else

      {
      fin1();
    }
    return 0;
    break;

    exo4 :
    case 4:
    {

      system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t\t\t\t\t\t -*- CE PROGRAMME PERMET D'AUTOMATISER CERTAINES TACHES LORS D'UN CONSEIL DE CLASSE D'ETUDIANTS -*- \n");
      system("pause");
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

      char nom[20], prenom[50], mention[20];
        etudiant *classe;
        int effectif, i;
        float note;

        printf("L'effectif de la classe svp: ");
        scanf("%d", &effectif);

        classe=(etudiant*)malloc(sizeof(etudiant)*effectif);

        for(i=0; i<effectif; i++)
        {
          printf("\n");
          printf("\nCeci sont les coordonnees de l'etudiant %d ", i+1);
          printf("\nVotre prenom svp:  ");
          fflush(stdin);
          gets(prenom);
          printf("Votre nom svp:  ");
          scanf("%s",nom);
          
          do{
            printf("La note de l'apprenant svp : ");
            scanf("%f", &note);
            if (note<0 || note>20)
            {
              printf("DESOLE LE NOTE DOIT ETRE COMPRIS ENTRE 0 ET 20\n");
            }
          }while(note<0 || note>20);

          classe[i]= enregistrer(nom, prenom, note);
          printf("\n");
        }
        printf("\n\n");
        printf("entrer la mention que vous chercher svp:  ");
        fflush(stdin);
        gets(mention);

        chercher1(mention, classe, effectif);
        printf("\n\n");

        printf("entrer la note dont vous aimerez voir la liste des etudiants qui l'ont obtenu svp:  ");
        scanf("%f", &note);

        printf("\n");
        chercher2(note, classe, effectif);
        printf("\n\n\n");

        printf("la liste de merite de la classe est : \n");
        merite(classe, effectif);
    }
    printf("FIN de l'exercice\n");
    printf("taper 1 pour revenir au menu principal \n");
    printf("\n" );
    printf("Taper 2 pour reessayer\n");
    printf("\n" );
    printf("Taper une autre touche pour quitter\n");
    scanf("%f",&choix );
    if (choix==1)
    {
      goto message;
    }
    else
      if (choix==2)
      {
        goto exo4;
      }
    else

      {
      fin();
    }
    return 0;
    break;

    case 5:
    system("cls");
    {
      system("cls");
      printf("           #####  ######   ##   #      #  ####  ######    #####    ##   #####  \n");
      printf("           #    # #       #  #  #      # #      #         #    #  #  #  #    # \n");
      printf("           #    # #####  #    # #      #  ####  #####     #    # #    # #    # \n");
      printf("           #####  #      ###### #      #      # #         #####  ###### #####  \n");
      printf("           #   #  #      #    # #      # #    # #         #      #    # #   #  \n");
      printf("           #    # ###### #    # ###### #  ####  ######    #      #    # #    #      \n");
      system("pause");
      system("cls");


      printf("\n\n\n\n\n\n\n\n");
      printf("  ####  ###### #####   #  ####  #    # ######    ######   ##   #      #       ####  #    #     ####  #    # ###### #   # ###### \n");
      printf("#       #      #    #  # #    # ##   # #         #       #  #  #      #      #    # #    #    #    # #    # #       # #  #      \n");
      printf(" ####   #####  #    #  # #      # #  # #####     #####  #    # #      #      #    # #    #    #      #    # #####    #   #####  \n");
      printf("      # #      #####   # #  ### #  # # #         #      ###### #      #      #    # #    #    #  ### #    # #        #   #      \n");
      printf(" #    # #      #   #   # #    # #   ## #         #      #    # #      #      #    # #    #    #    # #    # #        #   #      \n");
      printf("  ####  ###### #    #  #  ####  #    # ######    #      #    # ###### ######  ####   ####      ####   ####  ######   #   ###### \n");

      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t       |**SERIGNE FALLOU GUEYE**|\n");
      printf("\n\n\n\n\n\n\n");
      printf("          #    #   ##    ####   ####    ##   #    # #####    ##      #    #   ##   #    # ###### \n");
      printf("          ##  ##  #  #  #      #       #  #  ##  ## #    #  #  #     #   #   #  #  ##   # #      \n");
      printf("          # ## # #    #  ####   ####  #    # # ## # #####  #    #    ####   #    # # #  # #####  \n");
      printf("          #    # ######      #      # ###### #    # #    # ######    #  #   ###### #  # # #      \n");
      printf("          #    # #    # #    # #    # #    # #    # #    # #    #    #   #  #    # #   ## #      \n");
      printf("          #    # #    #  ####   ####  #    # #    # #####  #    #    #    # #    # #    # ###### \n");

      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**MASSAMBA KANE**|\n");
      system("pause");
      system("cls");
      printf("\n\n\n\n\n\n\n\n\n");
      printf(" ###### #         #    #   ##   #####       #  #     ####  #    # ###### # #    # #    #    #    # #####    ##    ####  \n");
      printf(" #      #         #    #  #  #  #    #      #  #    #    # #    # #      # #   #  #    #    ##   # #    #  #  #  #    # \n");
      printf(" #####  #         ###### #    # #    #      #  #    #      ###### #####  # ####   ######    # #  # #    # #    # #    # \n");
      printf(" #      #         #    # ###### #    #      #  #    #      #    # #      # #  #   #    #    #  # # #    # ###### #    # \n");
      printf(" #      #         #    # #    # #    # #    #  #    #    # #    # #      # #   #  #    #    #   ## #    # #    # #    # \n");
      printf(" ###### ######    #    # #    # #####   ####   #     ####  #    # ###### # #    # #    #    #    # #####  #    #  ####  \n");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**EL HADJI CHEIKH NDAO**|\n");
      system("pause");
      system("cls");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("  ####  #    # ###### # #    # #    #    ##### # #####  #   ##   #    # ######     ####  #    # ###### #   # ###### \n");
      printf(" #    # #    # #      # #   #  #    #      #   # #    # #  #  #  ##   # #         #    # #    # #       # #  #      \n");
      printf(" #      ###### #####  # ####   ######      #   # #    # # #    # # #  # #####     #      #    # #####    #   #####  \n");
      printf(" #      #    # #      # #  #   #    #      #   # #    # # ###### #  # # #         #  ### #    # #        #   #      \n");
      printf(" #    # #    # #      # #   #  #    #      #   # #    # # #    # #   ## #         #    # #    # #        #   #      \n");
      printf("  ####  #    # ###### # #    # #    #      #   # #####  # #    # #    # ######     ####   ####  ######   #   ###### 	\n");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**CHEIKH TIDIANE GUEYE**|\n");
      printf("\n\n\n\n\n\n\n\n");
      printf("     #    #   ##   #    # ######    #####  #   ##   #####  #####    ##       ####  #   # #      #        ##   \n");
      printf("     ##  ##  #  #  ##  ## #         #    # #  #  #  #    # #    #  #  #     #       # #  #      #       #  #  \n");
      printf("     # ## # #    # # ## # #####     #    # # #    # #    # #    # #    #     ####    #   #      #      #    # \n");
      printf("     #    # ###### #    # #         #    # # ###### #####  #####  ######         #   #   #      #      ###### \n");
      printf("     #    # #    # #    # #         #    # # #    # #   #  #   #  #    #    #    #   #   #      #      #    # \n");
      printf("     #    # #    # #    # ######    #####  # #    # #    # #    # #    #     ####    #   ###### ###### #    # \n");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**MAME DIARRA SYLLA**|\n");
      system("pause");
      system("cls");
    }
    printf("\n");
    printf("\n");
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t--**Taper 1 pour revenir au Menu Principal ou une autre touche pour Quitter le Programme**--\n");
    scanf("%f",&choix );
    if (choix==1)
    {
      goto message;
    }
    else
    {
      fin1();
    }
    return 0;
    break;
  }
}

