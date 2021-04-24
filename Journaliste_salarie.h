#include "Journaliste.h"
#include "Date.h"
class Journaliste_salarie: public Journaliste
{
    Date dateEmbauche;
    double salaire;
public:
    Journaliste_salarie();//you need to call the parent class' constructor (define it first)
    ~Journaliste_salarie(){}
    friend ostream& operator<<(ostream&,Journaliste_salarie&);
    friend istream& operator>>(istream&,Journaliste_salarie&);
};