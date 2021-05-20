#include <iostream>
#include "../classes/Office.h"
#include <string>
using namespace std;
void afficherActualite(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Debut affichage Affichage****************************";
    for(vector<Actualite>::iterator i=o.tabActu.begin();i!=o.tabActu.end();++i)
        cout<<*i;
    cout<<"\n************Fin Affichage************************\n";
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
    fstream f;
    f.open("Actualité.txt",ios::in |ios::out | ios::app);
    f.seekp(ios::end);
    if (!f.is_open()) exit -2; 
    std::cout<<"\n+++++++++++++++++++Debut Ajout d'Actualité+++++++++++++++++++\n";
    char rep='n';
    do{
        Actualite*a=new Actualite;
        cin>>*a;
        f<<*a;
        o.tabActu.push_back(*a);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
        f.close();
    cout<<"\n++++++++++++++++++++++++Fin Ajout d'Actualité+++++++++++++++++++++++++++++++++++++\n";
}

void supprimerActualite(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabActu[i].getIdActualite()==id)
            {o.tabActu.erase(o.tabActu.begin()+i);
            found=true;}
        if (i>(o.tabActu.size()))
            break;
        i++;
        continue;
    }
}
