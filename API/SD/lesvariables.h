

/*
    la strucutre de donnees des variables
    C'est une liste chainne qui contient des variable
*/
typedef struct LesVariables
{
    Variable *contenu;          //le contenu de la variable 
    struct LesVariables *svt;//     element suivant 
}LesVariables;