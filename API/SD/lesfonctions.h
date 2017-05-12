


/*
    Cette Strucutre est une liste chainee de tout les fonctions
    Defini dans le programme
*/
typedef struct LesFonctions
{
    Fonction *contenu;      // le contenu veut dire la fonction du noued
    struct LesFonctions *svt;// lement suivant soit NULL
}LesFonctions;