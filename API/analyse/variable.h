
typedef struct Val{
    char *value;
    struct Val *svt;
}Val;

typedef struct Variable {
    int type ;
    char *nom;
    Val *val;
}Variable;

typedef struct AllVariable{
    Variable *v;
    struct AllVariable *svt;
}AllVariable;

/*  Creation d une nouvelle variable */
Variable *new_Variable(int type,char *nom,char *valeur)
{
    Variable *v = (Variable *)malloc(sizeof(Variable));
    v->type = type;
    v->nom = (char *)malloc(strlen(nom));
    strcpy(v->nom,nom);
   if(valeur == NULL)
        v->val = NULL;
    else {
         v->val = (Val *)malloc(sizeof(Val));
     v->val->value = (char *)malloc(strlen(valeur));
    strcpy(v->val->value,valeur);
    v->val->svt = NULL;
    }
    return v;
}//fin de la fonction


/*  Modifier une variable */
Variable *Variable_modifier(Variable *v,char *valeur)
{
    int taille  = strlen(valeur);
    if(v->val == NULL)
    {
            v->val = (Val *)malloc(sizeof(Val));
            v->val->value = (char *)malloc(strlen(valeur));
            strcpy(v->val->value,valeur);
    }

    v->val->value = (char *)realloc(v->val->value,taille);
     strcpy(v->val->value,valeur);
    return v;
}//fin de la fonction 