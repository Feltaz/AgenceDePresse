#include <iostream>
#include "../classes/Office.h"
#include <string>
using namespace std;
void afficherMateriel(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Debut affichage Materiel****************************";
    for(vector<Materiel>::iterator i=o.tabMateriel.begin();i!=o.tabMateriel.end();++i)
        cout<<*i;
    cout<<"\n************Fin Affichage************************\n";
}
void rechercherMateriel(Office& o)
{
    long recherche;
    cout<<"\nVeuillez saisir le ID du Materiel souhaité  \n";
    cin>>recherche;
    for(vector<Materiel>::iterator i=o.tabMateriel.begin();i!=o.tabMateriel.end();++i)
        {
            
            if(recherche!=i->getIdMateriel()) 
            {
                continue;
            }
            else {
                cout<<"\nMateriel souhaitée trouvée!!! \n";
                cout<<*i;
                break;
            }
        cout<<"\nMateriel non trouvée\n";
        }
}
void ajouterMateriel(Office& o) 
{
    std::cout<<"\n+++++++++++++++++++Debut Ajout Matériel+++++++++++++++++++\n";
    char rep='n';
    do{
        Materiel* mat=new Materiel;
        cin>>*mat;
        o.tabMateriel.push_back(*mat);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    cout<<"\n++++++++++++++++++++++++Fin Ajout Matériel+++++++++++++++++++++++++++++++++++++\n";
}