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
    fstream f;
    f.open("Materiel.txt",ios::in |ios::out | ios::app);
    if (!f.is_open()) exit -6;
    f.seekp(ios::end);
    std::cout<<"\n+++++++++++++++++++Debut Ajout Matériel+++++++++++++++++++\n";
    char rep='n';
    do{
        Materiel* mat=new Materiel;
        cin>>*mat;
        f<<*mat;
        o.tabMateriel.push_back(*mat);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    f.close();
    cout<<"\n++++++++++++++++++++++++Fin Ajout Matériel+++++++++++++++++++++++++++++++++++++\n";
}

void supprimerMateriel(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabMateriel[i].getIdMateriel()==id)
            {o.tabMateriel.erase(o.tabMateriel.begin()+i);
            found=true;}
        if (i>(o.tabMateriel.size()))
            break;
        i++;
        continue;
    }
}