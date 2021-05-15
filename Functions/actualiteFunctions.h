#include <iostream>
#include "../classes/Office.h"
using namespace std;
void afficherActualite(Office& o) {
    cout<<"\n**********Affichage des Actualité****************************";
    for(vector<Actualite>::iterator i=o.tabActu.begin();i!=o.tabActu.end();++i)
    {
        cout<<*i;
    }
    


}