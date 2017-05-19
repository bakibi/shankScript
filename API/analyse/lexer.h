

enum tokens{TYPE,NAME,NUMBER,STRING,OPERATOR};

typedef struct Token
{
    char *value;//la valeur du 
    enum tokens tok;//le token approprier
}Token;

typedef struct Tokens
{
    Token *this;// le token de ce noeud
    struct Tokens *svt;// le suivant 
}Tokens;


