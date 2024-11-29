#include <string.h>
#define TAILLE_PLATEAU 9
typedef struct {
    char nom[50];
    char pion;
    int nbBarrieres;
    int positionX;
    int positionY;
} Joueur;

// Fonctions pour les joueurs
void initialiserJoueur(Joueur *joueur, char *nom, char pion, int nbBarrieres, int startX, int startY) {
    strcpy(joueur->nom, nom);
    joueur->pion = pion;
    joueur->nbBarrieres = nbBarrieres;
    joueur->positionX = startX;
    joueur->positionY = startY;
}

int deplacerPion(Joueur *joueur, char direction, char plateau[TAILLE_PLATEAU][TAILLE_PLATEAU]) {
    int newX = joueur->positionX;
    int newY = joueur->positionY;

    switch (direction) {
        case 'U': newX--; break;
        case 'D': newX++; break;
        case 'L': newY--; break;
        case 'R': newY++; break;
        default: return 0;
    }

    if (newX < 0 || newX >= TAILLE_PLATEAU || newY < 0 || newY >= TAILLE_PLATEAU || plateau[newX][newY] != '.') {
        return 0;
    }

    plateau[joueur->positionX][joueur->positionY] = '.';
    plateau[newX][newY] = joueur->pion;
    joueur->positionX = newX;
    joueur->positionY = newY;
    return 1;
}
