#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void couleur1(){
    Color(0,0);
    printf("%c",0xDC);
}
void couleur2(){
    Color(1,0);
    printf("%c",0xDC);
}
void couleur3(){
    Color(2,0);
    printf("%c",0xDC);
}
void couleur4(){
    Color(3,0);
    printf("%c",0xDC);
}
void couleur5(){
    Color(4,0);
    printf("%c",0xDC);
}
void couleur6(){
    Color(5,0);
    printf("%c",0xDC);
}
void couleur7(){
    Color(6,0);
    printf("%c",0xDC);
}
void couleur8(){
    Color(7,0);
    printf("%c",0xDC);
}
void couleur9() {
    Color(8,0);
    printf("%c",0xDC);
}
void couleur10(){
    Color(9,0);
    printf("%c",0xDC);
}
void couleur11(){
    Color(10,0);
    printf("%c",0xDC);
}
void couleur12(){
    Color(11,0);
    printf("%c",0xDC);
}
void couleur13(){
    Color(12,0);
    printf("%c",0xDC);
}
void couleur14(){
    Color(13,0);
    printf("%c",0xDC);
}
void couleur15(){
    Color(14,0);
    printf("%c",0xDC);
}
int Couleur() {
    int choix;
    printf("1 : Noir\n");
    printf("2 : Bleu foncé\n");
    printf("3 : Vert foncé\n");
    printf("4 : Turquoise\n");
    printf("5 : Rouge foncé\n");
    printf("6 : Violet\n");
    printf("7 : Vert caca d'oie\n");
    printf("8 : Gris clair\n");
    printf("9 : Gris foncé\n");
    printf("10 : Bleu fluo\n");
    printf("11 : Vert fluo\n");
    printf("12 : Turquoise\n");
    printf("13 : Rouge fluo\n");
    printf("14 : Violet 2\n");
    printf("15 : Jaune\n");
    printf("16 : Blanc\n");
scanf("%d",&choix);
    switch (choix) {
        case 1:
            couleur1();
        break;
        case 2:
            couleur2();
        break;
        case 3:
            couleur3();
        break;
        case 4:
            couleur4();
        break;
        case 5:
            couleur5();
        break;
        case 6:
            couleur6();
        break;
        case 7:
            couleur7();
        break;
        case 8:
            couleur8();
        break;
        case 9:
            couleur9();
        break;
        case 10:
            couleur10();
        break;
        case 11:
            couleur11();
        break;
        case 12:
            couleur12();
        break;
        case 13:
            couleur13();
        break;
        case 14:
            couleur14();
        break;
        case 15:
            couleur15();
        break;
        case 0:
            printf("On quitte le programme\n");
        return 16;
        default: ;
    }
    return choix;

}
