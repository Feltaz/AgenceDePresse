#include <iostream>
#include "../classes/Office.h"
#include <string>
using namespace std;
void afficherActualite(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Affichage des Actualité****************************";
    for(vector<Actualite>::iterator i=o.tabActu.begin();i!=o.tabActu.end();++i)
        cout<<*i;
}
void rechercherActualite(Office& o)
{
    string recherche;
    string compared;
    cout<<"\nVeuillez saisir le titre de l'actualité:  \n";
    cin.ignore();
    getline(cin,recherche);
    for(string::iterator i=recherche.begin();i!=recherche.end();i++)
        tolower(*i);
    for(vector<Actualite>::iterator i=o.tabActu.begin();i!=o.tabActu.end();++i)
        {
            compared=i->getTitre();
            for(string::iterator j=compared.begin();j!=compared.end();j++)
            tolower(*j);
            if(recherche!=compared) 
            {
                continue;
            }
            else {
                cout<<"\nActualité  souhaitée trouvée!!! \n";
                cout<<*i;
                break;
            }
        cout<<"\nActualité non trouvée\n";
        }
}
void ajouterActualite(Office& o) 
{
    std::cout<<"\n+++++++++++++++++++Debut Ajout d'Actualité+++++++++++++++++++\n";
    char rep='n';
    do{
        Actualite a;
        cin>>a;
        o.tabActu.push_back(a);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    cout<<"\n++++++++++++++++++++++++Fin Ajout d'Actualité+++++++++++++++++++++++++++++++++++++\n";
}
