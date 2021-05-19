#include <iostream>
#include "../classes/Office.h"
#include <string>
using namespace std;
void afficherArticle(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Affichage des Actualité****************************";
    for(vector<Article>::iterator i=o.tabArti.begin();i!=o.tabArti.end();++i)
        cout<<*i;
}
void rechercherArticle(Office& o)
{
    long recherche;
    cout<<"\nVeuillez saisir le ID de l'article souhaité  \n";
    cin>>recherche;
    for(vector<Article>::iterator i=o.tabArti.begin();i!=o.tabArti.end();++i)
        {
            
            if(recherche!=i->getIdArticle()) 
            {
                continue;
            }
            else {
                cout<<"\nArticle  souhaitée trouvée!!! \n";
                cout<<*i;
                break;
            }
        cout<<"\nArticle non trouvée\n";
        }
}
void ajouterArticle(Office& o) 
{
    std::cout<<"\n+++++++++++++++++++Debut Ajout d'Article+++++++++++++++++++\n";
    char rep='n';
    do{
        Article* a=new Article;
        cin>>*a;
        o.tabArti.push_back(*a);
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    cout<<"\n++++++++++++++++++++++++Fin Ajout d'Article+++++++++++++++++++++++++++++++++++++\n";
}

void supprimerArticle(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabArti[i].getIdArticle()==id)
            {o.tabArti.erase(o.tabArti.begin()+i);
            found=true;}
        if (i>(o.tabArti.size()))
            break;
        i++;
        continue;
    }
}