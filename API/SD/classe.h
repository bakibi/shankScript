

 
/*
    La structure qui traite UNE CLASSE
*/
typedef struct Classe
{
    char *nom;      //le nom de la Classe
    LesFonctions *contenuF; //l ensembble de tous les fonction
    LesVariables *contenuV;//l ensemble de tous les variables
   struct  LesClasses *contenuC;//l ensemble de classes 
}Classe;