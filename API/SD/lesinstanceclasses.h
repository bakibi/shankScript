


/*
    Cette strucutre est une liste  chainnee des instance
    qui seront declare en sein du programme
*/
typedef struct LesInstanceClasses
{
    instanceClasse *contenu;//le contenu de la cellule
    struct LesInstanceClasses *svt;// l element suivant de la cellule 
}LesInstanceClasses;