

/*
    La structure de donnees "mot"
    Cette structure represente un mot dans notre language 
    ShankScript
*/
typedef struct mot
{
    char *contenu;//ce qu il y a dans le mot
    int type ;//    le type du mot
}mot;

/*
            Les types possibles     :
            -1  Errors
            0   mot cle
            1   number
            3   chaine de caractere
            4   other
            5   (       6   )
            7   [       8   ]
            9   {      10  }
            12  ,
            13  ;
            14  +       15  -       16  *       17  /       18  %
            19  =
            20  boucle
            21  condition
            22  ==      23  &&      24  ||
            25  #
            26 <        27  >
            28  <=     29   >=
            29  !


*/