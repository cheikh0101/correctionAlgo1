        #include<stdio.h>
        #include<conio.h>
        #include<stdlib.h>
        #include <time.h>
        #include <string.h>
        #include <windows.h>
        #define SYD 10
        #define NYC -5
        

        void couleur(int x,int y);
        void couleur(int x,int y)
        {
          HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
          SetConsoleTextAttribute(H,y*16+x);
        }

        int main ()
        {

          int i,a;
          float menu,choix;
          char chaine1[20],chaine2[20];
          char chaine[50];

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
          printf("\t\t\t\t\t\t    | *  |    *  --------->les 7 exercices de la fiche1               |   |*\n");
          printf("\t\t\t\t\t\t    |  |                                                            |   |*\n");
          printf("\t\t\t\t\t\t    | *  |    * ---------> Portant sur << les chaines de caracteres >>|   |*\n");
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
          while(menu<0 || menu>7 || menu!= (int)menu);
          switch ((int)menu)
          {
            exo0:
            case 0:
            {
              system("cls");
             printf("\n\n\n\n\n\n\n\n");
             printf("\t\t\t LE BUT DE CE PROGRAMME EST DE REMPLIR UNE CHAINE DE CARACTERES LA COMPTER ET D'AFFICHER LE NOMBRE DE CASES RENSEIGNEES\n");
              printf("\n\n\n\n\n\n\n\n");
             printf("\t\t\t\t\t\t\t\t------------BONNE DEGUSTATION-----------\n");

               printf("\n\n\n\n\n\n\n\n");
              system("pause");
              system("cls");
             
              int i=0;

              printf("Veuillez taper une chaine de caractere svp\n");
              scanf("%s", chaine);
              while(chaine[i]!='\0')
              {
                i++;
              }
              printf("%s contient %d lettres\n",chaine,i);
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
                 printf("\t\t\t\t\t\tCE PROGRAMME A POUR BUT DE:\n");
                 printf("\n");
                printf("\t\t\t\t\t\t\t1-) DE RENSEIGNER UNE CHAINE DE CARACTERES\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t2-)DE CONVERTIR EN MAJUSCULES LES CARACTERES EN MINUSCULES ET VICE VERSA\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t3-)ET D'AFFICHER LE RESULTAT FINAL\n");
                 system("pause");
                 system("cls");

                printf("Entrer une chaine de caractere\n");
                //gets(chaine);
                scanf("%s",chaine);
                for(i=0;chaine[i]!='\0';i++)
                {
                  if((chaine[i]>='a')&&(chaine[i]<='z'))
                  {
                    chaine[i]=chaine[i]-32;
                  }
                  else
                  {
                    if((chaine[i]>='A')&&(chaine[i]<='Z'))
                    {
                    chaine[i]=chaine[i]+32;
                    }
                  }
                }
                printf("La conversion donne %s\n", chaine);
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
              
              int i=0;
              system("cls");
              printf("\n\n\n\n\n\n\n\n");
              printf("\t\t\tCE PROGRAMME A POUR BUT DE VERIFIER SI UNE CHAINE DE CARACTERES SAISIE PAR UN UTILISATEUR EST UN PALINDROME OU PAS\n");
               printf("\n\n\n\n\n\n\n\n");
              system("pause");
              system("cls");

              printf("veuillez taper une chaine de caractere\n");
              scanf("%s", chaine);


              for (i = 0; i < (strlen(chaine)/2); i++)
              {
                if (chaine[i]!=chaine[strlen(chaine)-1-i])
                {
                  printf(" %s est tout sauf un palindrome\n",chaine);
                  goto suite;
                }
              }

              printf("cette chaine de caractere est un palindrome\n");
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
              char x;
          
              int i=0,cpt=0;
               system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\tCE PROGRAMME A POUR BUT DE DETERMINER LE NOMBRE DE FOIS QU'UN CARACTERE SAISI PAR L'UTILISATEUR EST PRESENT DANS UNE CHAINE DE CARACTERE SAISIE EGALEMENT PAR L'UTILISATEUR\n");
                 printf("\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");


                printf("Entrer le caractere a chercher dans la chaine\n");
                scanf("%s",&x);
                printf("Entrer une chaine de caractere\n");
                //gets(chaine);
                scanf("%s", chaine);

                while(chaine[i]!='\0')
                {
                if(chaine[i]==x)
                {
                cpt++;
                }
                i++;
                }
                printf("la chaine %s contient %d fois le caractere %c \n",chaine,cpt,x);
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
      
              int i=0,a=0,tmp;
              system("cls");
              printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
              printf("\t\t\t\t\t\t CE PROGRAMME PERMET DE DETERMINER SI 2 CHAINES DE CARACTERES SONT MIROIRS\n");
              system("pause");
              system("cls");
              printf("Entrer deux chaines de caracteres\n");
              scanf("%s",chaine1);
              //gets(chaine1);
              //gets(chaine2);
              scanf("%s",chaine2);
              if (strlen(chaine1)!= strlen(chaine2))
              { printf("%s et %s ne sont pas des miroirs\n",chaine1,chaine2); return 0;a=1;}
              else
              { tmp=strlen(chaine1);
              while(i<=tmp-1)
              {if(chaine1[i]!=chaine2[tmp-1-i])
              {a=1;break;}
              i++;
              }
              }
              if(a==0)
              {printf("%s et %s sont des miroirs\n",chaine1,chaine2);}
              else
              {printf("%s et %s ne sont pas des miroirs\n",chaine1,chaine2);}
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
              
              int i=0,cpt=0,tmp;
              system("cls");
              printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
              printf("\t\t\tCE PETIT PROGRAMME PERMET DE DETERMINER ET D'AFFICHER LE NOMBRE DE VOYELLES CONTENUES DANS UNE CHAINE DE CARACTERES\n");
              system("pause");
              system("cls");
              printf("Entrer une chaine de caracteres\n");
              scanf("%s", chaine);
              //gets(chaine);
              tmp=strlen(chaine);
              while(i<=tmp-1)
              {
              if(chaine[i]=='a'||chaine[i]=='e'||chaine[i]=='o'||chaine[i]=='u'||chaine[i]=='i'||chaine[i]=='y'||
              chaine[i]=='A'||chaine[i]=='E'||chaine[i]=='O'||chaine[i]=='U'||chaine[i]=='I'||chaine[i]=='Y')
              {cpt++;}
              i++;
              }
              printf("%s contient %d voyelles\n",chaine,cpt);
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
            
            int i,j,a,len,cpt,num=1,den=1;
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\tCE PROGRAMME PERMET DE DETERMINER LE NOMBRE D'ANAGRAMMES QU'ON PEUT OBTENIR D'UNE CHAINE DE CARACTERES\n");
            system("pause");
            system("cls");
            printf("Entrez une chaine de caractere\n");
            scanf("%s", chaine);

            strlwr(chaine);
            len=strlen(chaine);
            for(i=0;i<=len-1;i++)
            {
            num=num*(i+1);
            cpt=0;a=0;
            for(j=0;j<=len-1;j++)
            {
            if(chaine[i]==chaine[j]){cpt++;}
            if((chaine[i]==chaine[j])&&(j<i)){a=1;}
            }
            if((a==0)&&(cpt>=2))
            {
            for(j=1;j<=cpt;j++)
            {den=den*j;}
            }
            }
            printf("Le nombre d anagramme de %s est %d\n",chaine,num/den);
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
