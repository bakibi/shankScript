


/*
    Cette strucutre est une liste chainee des espaces
*/
typedef struct LesEspaces
{
    Esapce *contenu; //le conteneu de ce neoud
    struct LesEspaces *svt;//   L element suivant ou NULL
}LesEspaces;