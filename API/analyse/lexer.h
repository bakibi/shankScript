

enum tokens{TYPE,NAME,NUMBER,STRING,OPERATOR,CONDITION,IF,ELSE,ELSEIF,WHILE,FUNCTION,PREFIX,PARAM,
                        PAR_G,PAR_D,BRACKET_G,BRAKET_D};

typedef struct Token
{
    char *value;//la valeur du 
    enum tokens tok;//le token approprier
}Token;


//
typedef struct Tokens
{
    Token *this;// le token de ce noeud
    struct Tokens *svt;// le suivant 
}Tokens;


Tokens *Tokens_Add(Tokens *t,enum tokens tok,char *value)
{
    Tokens *tmp =(Tokens *)malloc(sizeof(Tokens));
    tmp->this = (Token *) malloc(sizeof(Token));
    tmp->this->value = (char *)malloc(strlen(value));
    strcpy(tmp->this->value,value);
    tmp->this->tok = tok;
    tmp->svt = NULL;
    if(t == NULL)   return tmp;
    Tokens *tmp1 = t;
    while(tmp1->svt)
        tmp1 = tmp1->svt;
    tmp1->svt = tmp;
    return t;
}//fin de la fonction




Tokens *Lexer(char *chaine)
{
    Tokens *toks = NULL;
    int taille = strlen(chaine);
    char c[2] = {' ','\0'};
    char lexeme[300] = "";
    int e;
    e = 0;
    for(int i=0;i<taille;i++)
    {

    }//fin for 

    return toks;
}//fin de la fonction
