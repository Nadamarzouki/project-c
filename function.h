#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <stdio.h>  
#include <string.h>
typedef struct{ 
    int jour ;
    int mois ;
    int annee;
} Date;
typedef struct
{
    int id_fiche; 
    char CIN[20]; 
    Date Date_de_RDV; 
    char ETS[50]; 
    char Creneau[3]; 
    char Groupe_sanguin[20]; 
    char Habitude[3]; 
} Fiche;

int ajouter(char *filename, Fiche Fi);
int modifier( char *filename, int id, Fiche nouv);
int supprimer(char *filename, int id);
Fiche chercher(char *filename, int id);
int listeRDV(char nomfichier[], char etablissement[], int jour, int mois, int annee);
int nbETS(char nomFichier[]);
float moyRDV_ETS(char nomFichier[], int jour, int mois, int annee);


#endif // FUNCTION_H_INCLUDED
