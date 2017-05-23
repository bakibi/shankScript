


//  la sd des Liste Pile File Pile
typedef struct ListeT{
    char *value;
    struct ListeT *svt;
}ListeT;

typedef struct ValeurVar// Sd d une valeur d une Variable
{
    int type;  //(0-->var) (1-->string)(2-->List)(3-->Queue)(4-->Stack)(5-->Fenetre)
    char *value;
    ListeT *value1;
    struct ValeurVar *svt;
}ValeurVar;

typedef struct Variable {
    char *name;// le nom de la variable
    ValeurVar *valeur;//la valeur de la varialbe
}Variable;

typedef struct AllVariable{
    Variable *v;
    struct AllVariable *svt;
}AllVariable;




Variable *new_Variable(char *name,int type,char *valeur,ListeT *valeur1)
{
    Variable *v = (Variable *)malloc(sizeof(Variable));
    v->name = (char *)malloc(strlen(name));
    strcpy(v->name,name);
    v->valeur = (ValeurVar *)malloc(sizeof(ValeurVar));
    v->valeur->type = type;
    if(valeur == NULL)  {
        v->valeur->value = (char *)malloc(sizeof(char)*2);
        strcpy(v->valeur->value,"");
    }
    else {
        v->valeur->value =(char *)malloc(strlen(valeur));
        strcpy(v->valeur->value,valeur);
    }
    v->valeur->value1 = valeur1;
    return v;
}// fin focntion de creation d une  nouvelle varialbe


int Variable_Compare(Variable *v1,Variable *v2)//comparaison de deux variable 
{   return strcmp(v1->name,v2->name) == 0;}



char *Variable_valeur(Variable *v,int i)// Avoir la valeur d une varialbe
{
    if(v->valeur->type == 1 || v->valeur->type == 2)
        return v->valeur->value;
    int j = 0;
    ListeT *tmp = v->valeur->value1;
    while(tmp)
    {
        if( i == j)
            return tmp->value;
        tmp = tmp->svt;
    }
    return "";
}//eof



                                                                                /*ALL Varialbe*/


AllVariable *AllVariable_add(AllVariable *al ,Variable *v)//ajouter une varialbe a une liste de varialbe 
{
    AllVariable *tmp = (AllVariable *)malloc(sizeof(AllVariable));
    tmp->v = v;
    tmp->svt = NULL;
    tmp->svt = al;
    return tmp;
}//eof



Variable *AllVariable_chercher(AllVariable *al,char *nom)
{
    AllVariable *tmp = al;
    Variable *v = new_Variable(nom,-1,NULL,NULL);
    while(tmp)
    {
        if(Variable_Compare(tmp->v,v))
            return tmp->v;
        tmp = tmp->svt;
    }
    return NULL;
}//eof





