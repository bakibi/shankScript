

/*
    LA Structure de donnee espaced de travail
*/
typedef struct Esapce
{
    char *nom;//le nom de l'esapce de travail
    char *user;//le nom de l utilisateur
    LesFonctions *contenuF; //l ensembble de tous les fonction
    LesVariables *contenuV;//l ensemble de tous les variables
    LesClasses *contenuC;//l ensemble de classes 
    LesCommande *contenuCmd;//tout les commande saisie et reassi
} Esapce;