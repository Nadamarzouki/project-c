#include <stdio.h>
#include <string.h>
#include"function.h"

int main()
{
    Date date1 = {10,10,2024}; 
    Fiche Fi1={1,"135897654",date1,"CNTS","1","O+","1"}; 
    Date date2 = {11,12,2023}; 
    Fiche Fi2={2,"124986543",date2,"CNTS","1","A+","1"};
    Date date3 = {30,12,2023}; 
    Fiche Fi3={3,"985432678",date3,"CNTS","1","B+","1"}; 
int x;
    x = ajouter("Fiche.txt", Fi3);
   
    if(x == 1)
        printf("\nAjout de Fiche avec succés");
    else printf("\nEchec d'ajout");
x = ajouter("Fiche.txt", Fi2);
   
    if(x == 1)
        printf("\nAjout de Fiche avec succés");
    else printf("\nEchec d'ajout");
x = ajouter("Fiche.txt", Fi1);
   
    if(x == 1)
        printf("\nAjout de Fiche avec succés");
    else printf("\nEchec d'ajout");
        
    x = modifier("Fiche.txt",1,Fi2);

    if(x == 1)
        printf("\nModification de Fiche avec succés");
    else printf("\nEchec Modification");
     x = supprimer("Fiche.txt",2);
    if(x == 1)
        printf("\nSuppression de Fiche avec succés");
    else printf("\nEchec Suppression");
    Fiche resultat = chercher("Fiche.txt",3);
    if(resultat.id_fiche == -1)
        printf("\nFiche introuvable"); 
    else 
        printf("\nFiche trouvée : %d %s %d %d %d %s %s %s %s\n", resultat.id_fiche, resultat.CIN, resultat.Date_de_RDV.jour, resultat.Date_de_RDV.mois, resultat.Date_de_RDV.annee, resultat.ETS, resultat.Creneau, resultat.Groupe_sanguin, resultat.Habitude);
        

    int countRDV = listeRDV("Fiche.txt", "CNTS", 30, 12, 2023);
    printf("Nombre de RDV pris à l'établissement spécifié : %d\n", countRDV);

    int countETS = nbETS("Fiche.txt");
    printf("Nombre total d'établissements : %d\n", countETS);

    float moyenneRDV = moyRDV_ETS("Fiche.txt", 30, 12, 2023);
    printf("Moyenne des RDV par établissement : %.2f\n", moyenneRDV);

   
    
        
    return 0;
}

