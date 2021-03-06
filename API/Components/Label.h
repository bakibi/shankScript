/**                                   Cette page est consacré pour la creation du label **/



//          Fonction decreation d 'une nouvelle Labele
//      Entree:  str la chaine de cara de la labelle
//                    position values are -1(left) and 0(center) and 1(right) 
//                     isSelectable 1 si oui 0 sinon
//      Sortie: un Compoennt bien modifie
Component *new_Label(const char *str,int position,int isSelectable)
{
    Component *cp = new_Component();
    cp->type = LABEL;
    gchar *utf8;
    utf8 = g_locale_to_utf8(str, -1, NULL, NULL, NULL);
    cp->this = gtk_label_new(utf8);
    if(position == 1)
        gtk_label_set_justify(GTK_LABEL(cp->this),GTK_JUSTIFY_RIGHT);
    else if (position == 0)
        gtk_label_set_justify(GTK_LABEL(cp->this),GTK_JUSTIFY_CENTER);
    else 
        gtk_label_set_justify(GTK_LABEL(cp->this),GTK_JUSTIFY_LEFT);

     if(isSelectable == 0)
         gtk_label_set_selectable(GTK_LABEL(cp->this),FALSE);
     else
        gtk_label_set_selectable(GTK_LABEL(cp->this),TRUE);
return (Component *)cp;
}//fin de la fonction



//          Fonction qui determine le style de la labelle
//      Entree: 
//      Sortie:
Component *Label_setMarkup(const char *debut,Component *l,const char *fin)
{
    char *str = (char *)malloc(sizeof(char)*40);
    strcpy(str,"");
    strcat(str,debut);
    strcat(str,"%s");
    strcat(str,fin);

    char *markup =  g_markup_printf_escaped (str, Label_getText(l));
    gtk_label_set_markup(GTK_LABEL(l->this),markup);
    return (Component *)l;
}//fin de la fonction


//          Fonction pour avoir le text dans la label
//      Entree: 
//      Sortie: 
char *Label_getText(Component *l)
{
    int t =sizeof(gtk_label_get_text(GTK_LABEL(l->this)));
    char *str = (char *)malloc(t);
    strcpy(str,gtk_label_get_text(GTK_LABEL(l->this)));
    return str;
}//fin de la fonction





//          Fonction pour ecrire  text dans la label
//      Entree: 
//      Sortie: 
Component *Label_setText(Component *l,const char *str)
{
    gtk_label_set_text(GTK_LABEL(l->this),str);
    return (Component *)l;
}//fin de la fonction

