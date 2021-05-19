#include <iostream>
#include "menu/menuPrincipal.h"
using namespace std;
int Article::count=0;
int Actualite::count=0;
int Client::count=0;
int Journaliste::count=0;
int Materiel::count=0;
int Office::count=0;
int Support::count=0;
int main(){
   
    Office o;
    menuPrincipal(o);
    return 0;
}