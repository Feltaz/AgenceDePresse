#include "Journaliste.h"
#include "Date.h"
class Journaliste_salarie: public Journaliste
{
    Date dateEmbauche;
    double salaire;
public:
    Journaliste_salarie(long id=0,string p="n/a",string n="n/a",string exp="n/a",string pays="n/a",string nat="n/a" ,Date d=(1,1,1111),double sal=0.0 ):Journaliste(id,p,n,exp,pays,nat),dateEmbauche(d),salaire(sal){}//you need to call the parent class' constructor (define it first)
    ~Journaliste_salarie(){}
    friend ostream& operator<<(ostream&,Journaliste_salarie&);
    friend istream& operator>>(istream&,Journaliste_salarie&);
};
ostream& operator<<(ostream& out,Journaliste_salarie& js)
{
    Journaliste* j=&js;
    out<<*j;
    out<<js.dateEmbauche;
    out<<js.salaire;
    return out;
}
istream& operator>>(istream& in,Journaliste_salarie&js)
{
    Journaliste* j=&js;
    in>>*j;
    in>>js.dateEmbauche;
    in>>js.salaire;
    return in;
}