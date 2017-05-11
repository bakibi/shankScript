


/*
    Structure de donnees lescommandes est une liste chainee de commande
*/
//  la structure de donnes 
typedef struct LesCommande
{
    Commande *contenu;//La commande
    struct LesCommande *svt;// L'element suivant si il existe
}LesCommande;

