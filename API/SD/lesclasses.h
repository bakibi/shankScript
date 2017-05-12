


/*
    Cette strucutre est une liste chainee des classes
*/
typedef struct LesClasses
{
    Classe *contenu;        // le classe de ce noeud
    struct LesClasses *svt;//l element suivant ou NULL
}LesClasses;
