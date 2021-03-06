#include <iostream>
#include "../classes/Office.h"
using namespace std;
void afficherClient(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Affichage des Clients****************************";
    for(int i=0;i<o.tabClient.size();i++)
        {
            if (typeid(*o.tabClient[i])==typeid(ClientAbo)) cout<<static_cast<ClientAbo&>(*o.tabClient[i]);
            else if(typeid(*o.tabClient[i])==typeid(Client))cout<<*(o.tabClient[i]);
            
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
    fstream f;
    f.open("Client.txt",ios::in |ios::out | ios::app);
    if (!f.is_open()) exit -4; 
    f.seekp(ios::end);
    std::cout<<"\n+++++++++++++++++++Debut Ajout du client+++++++++++++++++++\n";
    char rep='n';
    do{
        int choix;
        cout<<"\ntapez 1 pour client,tapez 2 pour client Abo\n";
        cin>>choix;
        if(choix==1){Client* clt=new Client;
        cin>>*clt;
        f<<*clt;
        o.tabClient.push_back(clt);}
        else if (choix ==2) {ClientAbo* clt= new ClientAbo;
        cin>>*clt;
        f<<*clt;
        o.tabClient.push_back(clt);
        }
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
    f.close();
    cout<<"\n++++++++++++++++++++++++Fin Ajout du Client+++++++++++++++++++++++++++++++++++++\n";
}
void supprimerClient(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabClient[i]->getIdClient()==id)
            {
                delete o.tabClient[i];
                o.tabClient.erase(o.tabClient.begin()+i);
                found=true;}
        if (i>(o.tabClient.size()))
            break;
        i++;
        continue;
    }
}