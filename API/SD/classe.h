

 
/*
	La structure qui traite UNE CLASSE
*/
typedef struct Classe
{
	char *nom;      //le nom de la Classe
	LesFonctions *contenuF; //l ensembble de tous les fonction
	LesFonctions *constructeurs; // les constructeur de cette classe
	LesVariables *contenuV;//l ensemble de tous les variables
   struct  LesinstanceClasses *contenuC;//l ensemble de classes 
}Classe;
