

/*

La strucutre de donnees "mots" :
    Cette stucture est une liste de "mot"
*/

typedef struct mots
{
    mot *contenu;//le mot en personne
    struct mots *svt;//le mot suivant sinon NULL
}mots ;

