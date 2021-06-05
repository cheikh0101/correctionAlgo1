#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


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
  for(int a=0 ; a<5 ; a++ ){
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

typedef struct heure
{
  int hh;
  int mm;
  int ss;
}heure;

typedef struct point
  {
    float x,y;
  }point;

  typedef struct segment
  {
    point a,b;
    float longueur;
  }segment;

//editons la structure DATE
typedef struct date
{
  int jj;
  int aa;
  int mm;
}date;

//enumerons les fruits
enum fruit {orange,mangue,banane,pomme,ananas,mandarine,papaye,pamplemousse};


//editons la structure produit
typedef struct produit
{
  date d;
  float poids;
  enum fruit id;
}produit;



int main ()
{
  printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

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
  time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
  printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

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
time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
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

    printf("\t\t\t     888                                                                            \n");
    printf("\t\t\t     888                                  \t\t\t                   888                         \n");
    printf("\t\t\t     888                                  \t\t\t                   888                         \n");
    printf("\t\t\t .d88888  8888b.  88888b.  .d8888b        \t\t\t88888b.   .d88b.   888888 888d888  .d88b.       \n");
    printf("\t\t\td88  888      88b 888  88b 88K            \t\t\t888  88b d88  88b  888    888P   d8P  Y8b      \n");
    printf("\t\t\t888  888 .d888888 888  888  Y8888b.       \t\t\t888  888 888  888  888    888    88888888      \n");
    printf("\t\t\tY88b 888 888  888 888  888      X88       \t\t\t888  888 Y88..88P  Y88b.  888    Y8b.          \n");
    printf("\t\t\t  Y88888  Y888888 888  888  88888P'       \t\t\t888  888   Y88P    Y888   888      Y8888      \n\n\n");



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
  printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

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
  printf("\t\t\t\t\t\t    | *  |    *  --------->les 6 exercices de la fiche 5               |   |*\n");
  printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
  printf("\t\t\t\t\t\t    | *  |    * ---------> Portant sur << les types composes>>|   |*\n");
  printf("\t\t\t\t\t\t    |  |____________________________________________________________|   |*\n");


  system("pause");
  system("cls");
  message:

  do
  {
    system("cls");
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

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

    char xx[]="\t\t\t\t\t\t\t\t    0: *-* exercice 0 *-*    \n  ";
    for(i=0;i<strlen(xx);i++)
    {
      putchar(xx[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
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
    char g[]="\t\t\t\t\t\t\t\t    5: *-* exercice 5 *-*   \n   ";
    for(i=0;i<strlen(g);i++)
    {
      putchar(g[i]);
      Sleep(10);
    }
    printf("\n");
    printf("\n" );
    
    char p[]="\t\t\t\t\t\t\t\t    6: *-* COPYRIGHT *-*   \n";
    for(i=0;i<strlen(p);i++)
    {
      putchar(p[i]);
      Sleep(10);
    }

    printf("Taper votre choix:");scanf("%f",&menu );

    if (menu<0 || menu>6 || menu!= (int)menu)
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
  while(menu<0 || menu>6 || menu!= (int)menu);
  switch ((int)menu)
  {
    exo0:
    case 0:
    {
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
      printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
      printf("\n\n\n\n\n\n\n\n");
      printf("\t\t\t LE BUT DE CE PROGRAMME EST DE DISPOSER A L'ENVERS UN TABLEAU DE 20 REELS DANS UN UN PREMIER TEMPS PUIS \n\t\t\t\tFAIRE UN AUTRE PROGRAMME QUI NECESSITERA LE REMPLISSAGE D'UN AUTRE TABLEAU DE 20 ENTIERS STRICTEMENT POSITIFS ET DE LES DISPOSER DANS UN AUTRE TABLEAU LES PAIRS APRES LES IMPAIRS\n");
      printf("\n\n\n\n\n\n\n\n");
      printf("\t\t\t\t\t\t\t\t------------BONNE DEGUSTATION-----------\n");

       printf("\n\n\n\n\n\n\n\n");
      system("pause");
      system("cls");
      printf("\n");
      printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
        float tableau[20];
        float tmp;
        int i;
        
        for (i = 0; i <= 20-1 ; i++)
        {
          printf("veuillez entrer le %d %clement s'il vous plait \t", i+1,130);
          scanf("%f", &tableau[i]);
        } 
        for ( i = 0; i <=20-1; i++)
        {
          tmp=tableau[i];
          tableau[i]=tableau[20-1-i];
          tableau[20-1-i]=tmp;
        }
        printf("le tableau a l'envers est:\n");
        for (i = 0; i <= 20-1; i++)
        {
          printf("%.1f\t\t", tableau[20-1-i] );
        }


        printf("l'autre exercice\n");

        int j;
        int t[20];
        int b[20];
          
        for (i = 0; i <= 20-1; i++)
        {
          do
          {
            printf("veuillez entrer le %deme entier positif please\t",i+1 );
            scanf("%d", &t[i]);
            if (t[i]<=0)
            {
              printf("!! ERROR!! entier positif\n");
            }
          }
          while(t[i]<=0);
        }
        j=0;
        for (i = 0; i <= 20-1; i++)
        {
          if (t[i]%2==0)
          {
            b[j]=t[i];
            j=j+1;
          }
        }
        for (i = 0; i <= 20-1; i++)
        {
          if (t[i]%2!=0)
          {
            b[j]=t[i];
            j=j+1;
          }
        }
        printf("!! VOILA LE TABLEAU DONT ON A DISPOSE LES NOMBRES PAIRS APRES LES NOMBRES IMPAIRS \n");
        for(j=0; j<= 20-1; j++)
          {
            
            printf("%d\t",b[j] );
          }

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
        goto exo0;
      }
    else

      {
        fin();
      }
    return 0;
    break;
    exo1:
    case 1:
    {
        system("cls");
        
         printf("\n");
      printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
         printf("\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t\tCE PROGRAMME A POUR BUT DE CALCULER LA SOMME DES ELEMENTS D'UN TABLEAU DE 50 ENTIERS DISTINCTS ET DE LES AFFICHER\n");
         printf("\n");
         system("pause");
         system("cls");
          printf("\n");
      printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
         int i,j,som;
          int a[50];
          for ( i = 0; i <= 50-1; i++)
          {
            printf("veuillez entrer le %d element\t",i+1 );
            scanf("%d",&a[i]);


            for ( j = 0; j<=i-1; j++)
            {
              if (a[i]==a[j])
              {
                printf("!!desole!! VALEUR EXISTANTE\n");
                i=i-1;
              }
            }

          }
          for ( i = 0; i <= 50-1; i++)
          {
            som=som+a[i];
          }
          printf("la somme est: %d \n",som );

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
      
       printf("\n");
      printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
      printf("\n\n\n\n\n\n\n\n");
      printf("\t\t\tCE PROGRAMME A POUR BUT DE DETERMINER LE NOMBRE D'OCCURENCES POUR CHAQUE ELEMENT D'UN TABLEAU DE 2019 ENTIERS\n");
       printf("\n\n\n\n\n\n\n\n");
      system("pause");
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

        int a,i,j,cmp;
        int t[50];

        for(i=0; i<=50-1; i++)
        {
            printf("donner le %d entier s'il vous plait :", i+1);
            scanf("%d", &t[i]);
        }
        for(i=0; i<=50-1; i++)
        {
            cmp=0;
            a=0;
            for(j=0; j<=50-1; j++)
            {
                if(t[i]==t[j])
                {
                    cmp=cmp+1;
                }
                if(t[i]==t[j] && j<i)
                {
                    a=1;
                }
            }
                if(a==0)
                {
                    printf("le nombre d'occurrences de %d est %d\n", t[i],cmp);
                }
        }

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
        printf("\t\t\tCE PROGRAMME A POUR BUT DE :\n\t==>DEFINIR UNE STRUCTURE HEURE\n\t\t==>DE DECLARER ET DE RENSEIGNER DEUX VARIABLES h1 ET h2 DE TYPES HEURES\n\t\t\t==>DE CALCULER ET D'AFFICHER LEUR SOMME\n");
         printf("\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

        heure h1,h2,som;
            do
            {
              printf("veuillez donner le premiere heure s'il vous plait (hh/mn/ss):");
              scanf("%dh",&h1.hh);
              scanf("%dmn",&h1.mm);
              scanf("%dss",&h1.ss);
              if ((h1.hh<0)||(h1.hh>23))
              {
                printf("desole l'heure ne peut etre comprise qu'entre 0h et 23h\n");
              }
              if ((h1.mm<0)||(h1.mm>59))
              {
                printf("!!desole!! les minutes ne peuvent etre comprises qu'entre 0 et 59\n");
              }
              if ((h1.ss<0)||(h1.ss>59))
              {
                printf("!! desole !! les secondes ne peuvent ere comprises qu'entre 0 et 59\n");
              }
            }
            while((h1.hh<0)||(h1.hh>23)||(h1.mm<0)||(h1.mm>59)||(h1.ss<0)||(h1.ss>59));

            do
            {
              printf("veuillez donner la deuxieme heure s'il vous plait (hh/mn/ss):");
              scanf("%dh",&h2.hh);
              scanf("%dmn",&h2.mm);
              scanf("%dss",&h2.ss);
              if ((h2.hh<0)||(h2.hh>23))
              {
                printf("desole l'heure ne peut etre comprise qu'entre 0h et 23h\n");
              }
              
              if ((h2.mm<0)||(h2.mm>59))
              {
                printf("!!desole!! les minutes ne peuvent etre comprises qu'entre 0 et 59\n");
              }
              
              if ((h2.ss<0)||(h2.ss>59))
              {
                printf("!! desole !! les secondes ne peuvent ere comprises qu'entre 0 et 59\n");
              }
            }
            while((h2.hh<0)||(h2.hh>23)||(h2.mm<0)||(h2.mm>59)||(h2.ss<0)||(h2.ss>59));

            som.hh=0;
            som.ss=0;
            som.mm=0;
            som.ss=h1.ss+h2.ss;
            if (som.ss>59)
            {
              som.ss=som.ss-60;
              som.mm=som.mm+1;
            }
            som.mm=h1.mm+h2.mm+som.mm;
            if (som.mm>59)
            {
              som.mm=som.mm-60;
              som.hh=som.hh+1;
            }
            som.hh=h1.hh+h2.hh+som.hh;
            if (som.hh>23)
            {
              som.hh=som.hh-24;
            }

            printf("la somme entre la premiere heure(%dh/%dmn/%dss) et la deuxieme heure(%dh/%dmn/%dss) est %dh/%dmm/%dss\n",h1.hh,h1.mm,h1.ss,h2.hh,h2.mm,h2.ss,som.hh,som.mm,som.ss );

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
      printf("\t\t\t\t\t\t CE PROGRAMME PERMET DE :\n\t==>DEFINIR UNE STRUCTURE point \n\t\t==>D'ENDUIRE UNE STRUCTURE SEGMENT\n\t\t\t==>DE DEDUIRE L'APPARTENANCE D'UN POINT A UNE DROITE SUPPORTEE PAR UN SEGMENT\n");
      system("pause");
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

      point m;
      segment s;
      float A,B;

        printf("le point A est la premiere extremité du segment\n");
        printf("veuillez entrer l'abscisse de ce point :");
        scanf("%f",&s.a.x);
        printf("veuillez entrer l'ordonnee de ce point :");
        scanf("%f",&s.a.y);
        printf("\n\n");
        printf("le point B est la deuxieme extremite du segment\n");
        printf("veuillez entrer l'abscisse de ce point :");
        scanf("%f",&s.b.x);
        printf("veuillez entrer l'ordonnee de ce point :");
        scanf("%f",&s.b.y);
        printf("\n");

        A = (s.a.y - s.b.y) / (s.a.x - s.b.x);
        B = s.a.y -A * s.a.x;

        printf("soit un point M du plan\n");
        printf("\n\n");
        printf("veuillez entrer l'abscisse du point \n");
        scanf("%f",&m.x);
        printf("veuillez entrer l'ordonnée de ce point\n");
        scanf("%f",&m.y);

        if (m.y == A*m.x + B)
        {
          printf("le point M appartient a la droite\n");
        }
        else
        {
          printf("le point M n'appartient pas a la droite\n");
        }


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

    exo5:
    case 5:
    {


      system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t\t\tCE PETIT PROGRAMME PERMET DE : \n\t==>DE DEFINIR UNE STRUCTURE DATE \n\t\t==> D'EN DEDUIRE UNE STRUCTURE produit \n\t\t\t==> D'ECRIRE UN PROGRAMME QUI PERMET DE :\n\t\t\t\t===>LE POIDS MOYEN DES RECOLTES \n\t\t\t\t LE NOMBRE DE CHIFFRE QUE COMPORTE CET INDICATEUR\n");
      system("pause");
      system("cls");
      time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");

      produit tab[8];
          int i,n,som=0,cpt=0;

          for(i=0; i<8; i++)
          {

            printf("entrer le type du produit %d \n",i+1);
            printf("\n");

            printf("c'est quel produit svp : ");
            scanf("%d",&tab[i].id);


            printf("entrer la date de recolte svp c'ad :\n");
            printf("\n");

            printf("entrer le jour : ");
            scanf("%d", &tab[i].d.jj);

            printf("entrer le mois : ");
            scanf("%d", &tab[i].d.mm);

            printf("entrer l'annee : ");
            scanf("%d", &tab[i].d.aa);

            printf("entrer le poids du produit \n");
            scanf("%f", &tab[i].poids);

            som = som +  tab[i].poids;
          }

          printf("le poids moyen des recoltes est %d\n",som/8);
          n = som/8;
          do
          {
            n = n/10;
            cpt++;
          }
          while(n != 0);
          printf("le nombre de chiffre que comporte cet indicateur est %d\n",cpt );


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
        goto exo5;
      }
    else

      {
      fin1();
    }
    return 0;
    break;

    system("cls");
    case 6:
    system("cls");
    {
    
      system("cls");
        printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
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

      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t       |**SERIGNE FALLOU GUEYE**|\n");
      printf("\n\n\n\n\n\n\n");
      printf("          #    #   ##    ####   ####    ##   #    # #####    ##      #    #   ##   #    # ###### \n");
      printf("          ##  ##  #  #  #      #       #  #  ##  ## #    #  #  #     #   #   #  #  ##   # #      \n");
      printf("          # ## # #    #  ####   ####  #    # # ## # #####  #    #    ####   #    # # #  # #####  \n");
      printf("          #    # ######      #      # ###### #    # #    # ######    #  #   ###### #  # # #      \n");
      printf("          #    # #    # #    # #    # #    # #    # #    # #    #    #   #  #    # #   ## #      \n");
      printf("          #    # #    #  ####   ####  #    # #    # #####  #    #    #    # #    # #    # ###### \n");

      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**MASSAMBA KANE**|\n");
      system("pause");
      system("cls");
      printf("\n\n\n\n\n\n\n\n\n");
      printf(" ###### #         #    #   ##   #####       #  #     ####  #    # ###### # #    # #    #    #    # #####    ##    ####  \n");
      printf(" #      #         #    #  #  #  #    #      #  #    #    # #    # #      # #   #  #    #    ##   # #    #  #  #  #    # \n");
      printf(" #####  #         ###### #    # #    #      #  #    #      ###### #####  # ####   ######    # #  # #    # #    # #    # \n");
      printf(" #      #         #    # ###### #    #      #  #    #      #    # #      # #  #   #    #    #  # # #    # ###### #    # \n");
      printf(" #      #         #    # #    # #    # #    #  #    #    # #    # #      # #   #  #    #    #   ## #    # #    # #    # \n");
      printf(" ###### ######    #    # #    # #####   ####   #     ####  #    # ###### # #    # #    #    #    # #####  #    #  ####  \n");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**EL HADJI CHEIKH NDAO**|\n");
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
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**CHEIKH TIDIANE GUEYE**|\n");
      printf("\n\n\n\n\n\n\n\n");
      printf("     #    #   ##   #    # ######    #####  #   ##   #####  #####    ##       ####  #   # #      #        ##   \n");
      printf("     ##  ##  #  #  ##  ## #         #    # #  #  #  #    # #    #  #  #     #       # #  #      #       #  #  \n");
      printf("     # ## # #    # # ## # #####     #    # # #    # #    # #    # #    #     ####    #   #      #      #    # \n");
      printf("     #    # ###### #    # #         #    # # ###### #####  #####  ######         #   #   #      #      ###### \n");
      printf("     #    # #    # #    # #         #    # # #    # #   #  #   #  #    #    #    #   #   #      #      #    # \n");
      printf("     #    # #    # #    # ######    #####  # #    # #    # #    # #    #     ####    #   ###### ###### #    # \n");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|**MAME DIARRA SYLLA**|\n");
      system("pause");
      system("cls");
    }
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

    printf("taper 1 pour revenir au menu principal ou une autre touche pour quitter\n");
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

