


/*
    La structure de donnees commande 
    dans cette strucutre on stock les element saisie par le programmeur
    et on les traites pour que par la suite on affiche ou traite la commande
*/
typedef struct Commande
{
    char *commande;  // La Commande
    char *warnings;     //  Les Warnings rencotrer apres compilation
    char *errors;           //  Les erreurs rencontrer apres compilation
    char *output;           //  Le output est le resultat de la commande si elle est sans faute
}Commande;
