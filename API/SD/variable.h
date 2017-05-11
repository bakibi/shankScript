
/*
    La structure de donnees variable permet de definir et 
    d'avoir le contenu d une variable dont l utilisateur à saisie
*/
typedef struct Variable
{
    int type;//le type de la structure
    char *nom;//le nom de la variable
    char *contenu;//le contenue de la variable
}Variable;

/*
    Pour le type des variabes :
        0   type var :(int ou float)
        1   type str (chaine de caractere)
        

*/