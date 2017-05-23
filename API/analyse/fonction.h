
typedef struct Fonction {//Sd d une fonction
    int type ;
    char *name;
    AllVariable *v;
    char *content;
} Fonction;

typedef struct AllFonction{//tout les fonction
    Fonction *fct;
    struct AllFonction *svt;
}AllFonction;
