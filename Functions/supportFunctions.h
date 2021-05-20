#include <iostream>
#include "../classes/Office.h"
#include <string>
using namespace std;
void afficherSupport(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Debut affichage Support****************************";
    for(vector<Support>::iterator i=o.tabSupp.begin();i!=o.tabSupp.end();++i)
        cout<<*i;
    cout<<"\n************Fin Affichage************************\n";
}
void rechercherSupport(Office& o)
{
    long recherche;
    cout<<"\nVeuillez saisir le ID du Support souhaité  \n";
    cin>>recherche;
    for(vector<Support>::iterator i=o.tabSupp.begin();i!=o.tabSupp.end();++i)
        {
            
            if(recherche!=i->getIdSupport()) 
            {
                continue;
            }
            else {
                cout<<"\nSupport souhaitée trouvée!!! \n";
                cout<<*i;
                break;
            }
        cout<<"\nSupport non trouvée\n";
        }
}
void ajouterSupport(Office& o) 
{
    fstream f;
    f.open("Support.txt",ios::in |ios::out | ios::app);
    if (!f.is_open()) exit -6;
    f.seekp(ios::end);
    std::cout<<"\n+++++++++++++++++++Debut Ajout Support+++++++++++++++++++\n";
    char rep='n';
    do{
        Support* sup=new Support;
        cin>>*sup;
        f<<*sup;
        o.tabSupp.push_back(*sup);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    f.close();
    cout<<"\n++++++++++++++++++++++++Fin Ajout Support+++++++++++++++++++++++++++++++++++++\n";
}

void supprimerSupport(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabSupp[i].getIdSupport()==id)
            {o.tabSupp.erase(o.tabSupp.begin()+i);
            found=true;}
        if (i>(o.tabSupp.size()))
            break;
        i++;
        continue;
    }
}