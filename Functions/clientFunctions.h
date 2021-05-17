#include <iostream>
#include "../classes/Office.h"
using namespace std;
void afficherClient(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Affichage des Clients****************************";
    for(int i=0;i<o.tabClient.size();i++)
        {
            if(typeid(*o.tabClient[i])==typeid(Client))cout<<*(o.tabClient[i]);
            else if (typeid(*o.tabClient[i])==typeid(ClientAbo)) cout<<static_cast<ClientAbo&>(*o.tabClient[i]);
        }
    cout<<"\n------------------------Fin Affichage des Clients-----------";
}
void rechercherClient(Office& o)
{
    long recherche;
    cout<<"\nVeuillez saisir le ID du Client souhaité  \n";
    cin>>recherche;
    for(vector<Client*>::iterator i=o.tabClient.begin();i!=o.tabClient.end();++i)
        {
            
            if(recherche!=(*i)->getIdClient()) 
            {
                continue;
            }
            else {
                cout<<"\nClient souhaitée trouvée!!! \n";
                cout<<*(*i);
                break;
            }
        cout<<"\nClient non trouvée\n";
        }
}
void ajouterClient(Office& o) 
{
    std::cout<<"\n+++++++++++++++++++Debut Ajout du client+++++++++++++++++++\n";
    char rep='n';
    do{
        int choix;
        cout<<"\ntapez 1 pour client,tapez 2 pour client Abo\n";
        cin>>choix;
        if(choix==1){Client* clt=new Client;
        cin>>*clt;
        o.tabClient.push_back(clt);}
        else if (choix ==2) {ClientAbo* clt= new ClientAbo;
        cin>>*clt;
        o.tabClient.push_back(clt);
        }
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    cout<<"\n++++++++++++++++++++++++Fin Ajout du Client+++++++++++++++++++++++++++++++++++++\n";
}
