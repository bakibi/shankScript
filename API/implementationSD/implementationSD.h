
//Les prototype
//          mot.h
mot *new_mot(char *chaine,int type);
//          mots.h
mots *new_mots();
mots *mots_ajouterMot(mots *lesmots,mot *unmot);
//          pile.h
Pile *new_Pile();
Pile *Pile_empiler(Pile *pile,elementPile element);
Pile *Pile_depiler(Pile *pile);
//          variable.h
Variable *new_Variable(int type ,char *nom,char *contenu);
int Variable_compareNom(Variable *v,char *nom);
int Variable_estVar(Variable *v);
int Variable_estStr(Variable *v);
char *Variable_valeur(Variable *v);
Variable *Variable_modifier(Variable *v,char *contenu);
//          lesvariables.h
LesVariables *new_LesVariables();
int LesVariables_estVide(LesVariables *lv);
LesVariables *LesVariables_ajouter(LesVariables *lv,int type,char *nom,char *contenu);
int LesVariables_chercher(LesVariables *lv,char *nom);
char *LesVariables_contenu(LesVariables *lv,char *nom);
LesVariables *LesVariables_modifierVariable(LesVariables *lv,char *nom,char *contenu);
int LesVariables_variableEstVar(LesVariables *lv,char *nom);
int LesVariables_variableEstStr(LesVariables *lv,char *nom);
//          fonction.h
Fonction *new_Fonction(char *nom,int nbrParametre,LesVariables *lv, LesInstanceClasses *lic,char *contenu);
int Fonction_CompareNom(Fonction *fct,char *nom);
int Fonction_compare(Fonction *fct,char *nom,int nbr);
//          lesfonctions.h
LesFonctions *new_LesFonctions();
LesFonctions *LesFonctions_ajouter(LesFonctions *lf,char *nom,int nbrParametre,LesVariables *lv, LesInstanceClasses *lic,char *contenu);
int LesFonctions_chercherNom(LesFonctions *lf,char *nom);
int LesFonctions_chercher(LesFonctions *lf,char *nom,int nbr);



#include "mot.h"
#include "mots.h"
#include "pile.h" // une pile de type ElementPile
#include "variable.h"   //une varialbe
#include "lesvariables.h" // les variable
#include "fonction.h" //  une fonction
#include "lesfonction.h" // liste des fonction 
#include "commande.h"