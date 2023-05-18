#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  // Inclure la bibliothèque pour usleep

// Codes d'échappement ANSI pour la couleur bleue
#define ANSI_COLOR_BLUE "\033[0;34m"
#define ANSI_COLOR_RESET "\033[0m"

int main() {
    FILE* f = NULL;                  // programme pour l'intro i 
    f = fopen("intro+1er choix.txt", "r+");
    if (f == NULL) {
        printf("Erreur lors de l'ouverture du fichier suite choix 1.txt\n");
        exit(1);
    }

    char c;
    while ((c = fgetc(f)) != EOF) {
        printf(ANSI_COLOR_BLUE "%c" ANSI_COLOR_RESET, c);
        fflush(stdout);  // Vider le tampon de sortie pour afficher le caractère immédiatement
        usleep(50000);  // Pause de 50 000 microsecondes (0,05 seconde)
    }

    int a;                   // programme pour i_c1||c2 
    scanf("%d", &a);

do{
    printf("tapez 1 ou 2\n");
    scanf("%d", &a);
}while(a!=1 && a!=2);

    

    FILE* f1 = NULL;
    if (a == 1) {
        f1 = fopen("i_c1.txt", "r+");
    } else if (a == 2) {
        f1 = fopen("i_c2.txt", "r+");
    }


    char c1;
    while ((c1 = fgetc(f1)) != EOF) {
        printf(ANSI_COLOR_BLUE "%c" ANSI_COLOR_RESET, c1);
        fflush(stdout);  // Vider le tampon de sortie pour afficher le caractère immédiatement
        usleep(50000);  // Pause de 50 000 microsecondes (0,05 seconde)
    }



int a1;                                    //programme pour i_c1_c1||c2 

scanf("%d", &a1);
do{
    printf("tapez 1 ou 2\n");
    scanf("%d", &a1);
}while(a1!=1 && a1!=2);

FILE* f2 = NULL;
    if (a1 == 1) {
        f2 = fopen("i_c1_c1.txt", "r+");
    } else if (a1 == 2) {
        f2 = fopen("i_c2_c2.txt", "r+");
    }


    char c2;
    while ((c2 = fgetc(f2)) != EOF) {
        printf(ANSI_COLOR_BLUE "%c" ANSI_COLOR_RESET, c2);
        fflush(stdout);  // Vider le tampon de sortie pour afficher le caractère immédiatement
        usleep(50000);  // Pause de 50 000 microsecondes (0,05 seconde)
    }




    return 0;
}
