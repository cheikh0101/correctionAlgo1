            #include<stdio.h>
            #include<conio.h>
            #include<stdlib.h>
            #include <time.h>
            #include <string.h>
            #include <windows.h>
            #include<math.h>
            #define SYD 10
            #define NYC -5


  #define inverse(x) printf("l'inverse de %.2f est %.2f \n",x,1/x );

  #define parite(x) if ((int)x%2==0) {printf("%.2f est un nombre pair\n", x);}\
                    else{printf("%.2f est impaire\n",x );}

  #define max(x,y) if(x>y){printf("%.2f est le maximum\n",x );}\
                    else{printf("%.2f est le maximum\n",y );}

  #define min(x,y) if(x>y){printf("%f est le minimum\n",y );}\
                  else{printf("%.2f est le minimum\n",x );}


  //Definissons une structure ETUDIANT
  typedef struct ETUDIANT
  {
      char nom[20],prenom[20],mention[20];
      int age;
      float moyenne;
  }ETUDIANT;



            void couleur(int x,int y);
            void couleur(int x,int y)
            {
              HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
              SetConsoleTextAttribute(H,y*16+x);
            }

            int main ()
            {

              int a,i;
              float menu,choix;


              time_t temps;
              struct tm date;
              SYSTEMTIME t;
              GetSystemTime(&t);

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
              printf("\t\t\t\t\t\t    | *  |    *  --------->les 7 exercices de la fiche 2              |   |*\n");
              printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
              printf("\t\t\t\t\t\t    | *  |    * --------->Portant sur << les pointeurs et preprocesseurs>>| *\n");
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
                  printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__); 
                  printf("\n\n\n");
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
                char h[]="\t\t\t\t\t\t\t\t    6: *-* exercice 6 *-*   \n    ";
                for(i=0;i<strlen(h);i++)
                {
                  putchar(h[i]);
                  Sleep(10);
                }

                printf("\n");
                printf("\n");
                char p[]="\t\t\t\t\t\t\t\t    7: *-* COPYRIGHT *-*   \n";
                for(i=0;i<strlen(p);i++)
                {
                  putchar(p[i]);
                  Sleep(10);
                }

                printf("Taper votre choix:");scanf("%f",&menu );

                if (menu<0 || menu>7 || menu!= (int)menu)
                {


              for( a=0;a<3;a++)
              {
                printf("\n\n\n\n\n\n");
                system("cls");
                printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
                printf("\n\n\n\n\n\n");
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
              while(menu<0 || menu>7 || menu!= (int)menu);
              switch ((int)menu)
              {
                exo0:
                case 0:
                {
                  system("cls");
                 printf("\n\n\n\n\n\n\n\n");
                 printf("\t\t\t LE BUT DE CE PROGRAMME EST DE CONVERTIR UNE VALEUR BINAIRE DANS LA BASE DECIMALE\n");
                  printf("\n\n\n\n\n\n\n\n");
                 printf("\t\t\t\t\t\t\t\t------------BONNE DEGUSTATION-----------\n");

                  int binaire,accumulateur=0,binaire1;
      double cpt=0;

      printf("donner une valeur binaire\n");
      scanf("%d",&binaire);

      binaire1 = binaire;

      do
      {
        cpt++;

        accumulateur = binaire%10*(pow(2,cpt-1)) + accumulateur ;

        binaire = binaire / 10;

      } while(binaire);

      printf("la CONVERSION de %d donne %d \n",binaire1,accumulateur );


                   printf("\n\n\n\n\n\n\n\n");
                  system("pause");
                  system("cls");
                 time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
              printf("\n\n\n\n\n\n");  
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
                return 0;
                break;
                exo1:
                case 1:
                {
                    system("cls");
                     printf("\n\n\n\n\n\n\n\n");
                     printf("\t\t\t\t\t\tCE PROGRAMME A POUR BUT DE CONVERTIR EN BINAIRE UNE VALEUR DE LA BASE NATURELLE\n");
                     printf("\n");
                     system("pause");
                     system("cls");
                time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");     
                       int nbre,i=0,tmp,cpt=0,*tableau;

    printf("un nombre appartenant a la base naturelle svp : ");
    scanf("%d", &nbre);

    tmp = nbre;

    do
    {
      nbre = nbre/2;
      cpt++;
    }
    while(nbre != 0);

    nbre = tmp;

    tableau = malloc(sizeof(int) * cpt);

    do
    {
      tableau[i] = nbre % 2;
      nbre = nbre/2;
      i++;
    }
    while(nbre != 0);

    for(i=0; i<cpt; i++)
    {
      printf("%d ",tableau[cpt-i-1] );
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
                    goto exo1;
                  }
                else

                  {
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
                return 0;
                break;
                exo2 :
                case 2:
                {


                  system("cls");
                  time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
                  printf("\n\n\n\n\n\n\n\n");
                  printf("\t\t\tCE PROGRAMME A POUR BUT DE DETERMINER ET D'AFFICHER LE TRIANGLE DE PASCAL POUR n LIGNES\n");
                   printf("\n\n\n\n\n\n\n\n");
                  system("pause");
                  system("cls");

                   int n,**triangle,i,j;


    printf("veuillez donner le nombre de lignes de votre triangle svp\n");
    scanf("%d",&n);

    triangle =  malloc (sizeof(int*) * (n+1));


    for(i=0; i<= n; i++)
    {
      triangle[i] = malloc ((i+1) * sizeof(int));
      for(j=0; j<=i; j++)
      {
        if (j==0 || i==j)
        {
          triangle[i][j]=1;
        }
        else
        {
          triangle[i][j]= triangle[i-1][j-1] + triangle[i-1][j];
        }
      }
    }

    for(i=0; i<=n; i++)
    {
      for(j=0; j<=i ; j++)
      {
        printf(" %d ",triangle[i][j]);
      }
      printf("\n");
    }


    free(triangle);
                }
                suite:
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
                  for( i=0;i<3;i++)
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
                return 0;
                break;
                exo3 :
                case 3:
                {

                   system("cls");
                   time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\tCE PROGRAMME A POUR BUT DE DETERMINER LE NOMBRE DE MATCHS OU LA MOYENNE DES BUTS A ETE DEPASSES DANS UN CHAMPIONNANT \n");
                     printf("\n\n\n\n\n\n\n\n");

                     int equipe,i,match=0,j=0,moyenne,tbut=0,*classement;

    printf("veuillez donner le nombre d'equipe du championnat : ");
    scanf("%d",&equipe);

    printf("\n");

    for(i=0; i<equipe;i++)
    {
      match = match +i;
    }
    classement = malloc (sizeof(int) * match);

    for(i=0; i<match; i++)
    {
      printf("quel est le nombre de buts du %d match\n",i+1 );
      scanf("%d",&classement[i] );
    }

    for(i=0; i< match; i++)
    {
      tbut = tbut + classement[i];
    }

    moyenne =  tbut / match ;   // nombre total de match/nombre total de but

    for(i=0; i< match; i++)
    {
      if (classement[i] > moyenne)
      {
        j++;
      }
    }

    printf("la moyenne des buts a ete depasse en %d match(s)\n",j );

                    system("pause");
                    system("cls");


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
                return 0;
                break;

                exo4 :
                case 4:
                {


                  system("cls");
                  time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
                  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                  printf("\t\t\t\t\t\t CE PROGRAMME PERMET DE TRADUIRE UN TABLEAU EN UNE MATRICE QUELQUE SOIT SA DIMENSION\n");
                  system("pause");
                  system("cls");

                int *tableau,i,taille,**matrice,j;

  printf("La taille du tableau svp :");
  scanf("%d",&taille);

  tableau =  malloc (taille*sizeof(int));

  for(i=0; i<taille; i++)
  {
    printf("l'element %d svp :",i+1 );
    scanf("%d", &tableau[i]);
  }
/////////////////////////////////////////
  matrice=malloc (sizeof(int*) * taille);


  for(i=0; i < taille; i++)
  {
    matrice[i] = malloc (sizeof(int) * (taille-i));
    for(j=0; j<(taille-i) ;j++)
    {
      matrice[i][j] = tableau[j+i];
    }
  }

  for(i=0; i< taille; i++)
  {
    for(j=0; j<(taille-i) ;j++)
    {
      printf(" %d ",matrice[i][j] );
    }
    printf("\n");
  }


  free(matrice);
  free(tableau);



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
                  for( i=0;i<3;i++)
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
                return 0;
                break;

                exo5:
                case 5:
                {

                  system("cls");
                  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                  printf("\t\t\tCE PETIT PROGRAMME PERMET DE SAVOIR L'UTILITE DES MACROS DANS LA PROGRAMMATION\n");
                  system("pause");
                  system("cls");

                  time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
                  float x,y;
    printf("veuillez donner un nombre\n");
    scanf("%f",&x);

    inverse(x);
    parite(x);

    printf("veuillez donner un deuxieme nombre\n");
    scanf("%f",&y);

    max(x,y);

    min(x,y);

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
                return 0;
                break;

                exo6:
                case 6:
                {


                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCE PROGRAMME PERMET DE COMBINER LES CONNAISSANCES AVEC LES STRUCTURES ET LES POINTEURS\n");
                system("pause");
                system("cls");
time(&temps);
              date=*gmtime(&temps);
              printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
              printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
              printf("\n\n\n\n\n\n");
                ETUDIANT *tab=NULL;
     int nbre,i,som=0;
     float moy,moymax = 0;

     printf("veuillez donner le nombre d'apprenants svp\n");
     scanf("%d", &nbre);

     tab =malloc(sizeof(ETUDIANT) * nbre);
  printf("\n");
  if(tab == NULL)
  {
      exit(1);
  }
  else
  {
         for(i=0; i<nbre; i++)
         {
      printf("\n");
              printf("les coordonnees de l'etudiant %d\n",i+1 );

              printf("le nom de l'apprenant svp\n");
              scanf("%s", &tab[i].nom);
              //fgets(tab[i].nom, 20, stdin);

              printf("le prenom de l'apprenant svp\n");
              scanf("%s", &tab[i].prenom);

              printf("la moyenne de l'etudiant svp\n");
              scanf("%f", &tab[i].moyenne);

              if(tab[i].moyenne <=16)
              {
                  strcpy(tab[i].mention , "tres bien");
              }
              else
                  if (tab[i].moyenne <=14)
                  {
                      strcpy(tab[i].mention , "bien");
                  }
              else
                  if (tab[i].moyenne <=12)
                  {
                      strcpy(tab[i].mention , "assez-bien");
                  }
              else
                  if (tab[i].moyenne <=10)
                  {
                      strcpy(tab[i].mention , "passable");
                  }
              else
              {
                      strcpy(tab[i].mention , "excellent");
              }

              printf("l'age de l'apprenant\n");
              scanf("%d", &tab[i].age);

              som = som + tab[i].age;
         }
         moy = som/nbre;
         printf("l'age moyenne de la classe est %f \n",moy);

      printf("\n");


         //DETERMINONS LA PLUS FORTE MOYENNE
          for(i=0; i<nbre; i++)
          {
              if (tab[i].moyenne > moymax)
              {
                  moymax = tab[i].moyenne;
              }
          }
          printf("la plus forte moyenne est %f \n",moymax);



      printf("\n");

          printf("la liste des etudiants dont le nom de famille est diop\n");
          //nom de famille
          for(i=0; i<nbre; i++)
          {
              if( (strcasecmp(tab[i].nom, "diop") ) == 0)
              {
                  printf("le %d est %s\n",i+1, tab[i].prenom);
              }
              else
              {
                  printf("\n");
                  printf("le %d apprenant n'a pas pour nom de famille diop\n",i+1 );
              }
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
                    goto exo6;
                  }
                else

                  {
                  for(i=0;i<3;i++)
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
                return 0;
                break;
                system("cls");
                case 7:
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
                  time(&temps);
                  date=*gmtime(&temps);
                  printf("La date du jour est : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
                  printf("\nL'HEURE ACTUELLE AU SENEGAL EST: %d:%d\n\n", date.tm_hour, date.tm_min);
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
                  time(&temps);
                  date=*gmtime(&temps);
                  printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
                  printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
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
                  time(&temps);
                  date=*gmtime(&temps);
                  printf("La date du jour : %d/%d/%d",t.wDay,t.wMonth,t.wYear);
                  printf("\nL'HEURE ACTUELLE AU SENEGAL: %d:%d\n\n", date.tm_hour, date.tm_min);
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
                  printf("  ####  #    # ###### # #    # #    #      #   # #####  # #    # #    # ######     ####   ####  ######   #   ######   \n");
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
                printf("taper 1 pour revenir au menu principal ou une autre touche pour quitter\n");
                scanf("%f",&choix );
                if (choix==1)
                {
                  goto message;
                }
                else
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
                return 0;
                break;
              }
            }
          }
