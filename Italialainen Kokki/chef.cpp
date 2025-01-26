#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori"
         << endl;

}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "chef destruktori"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int salaattiannoksia = 0;
    cout << "Aineksia on "
         << aines;

    salaattiannoksia = aines/5;



    //Salaatti: yhteen annokseen tarvitaan 5 ainesta

}

int Chef::makeSoup(int aines)
{
    int soppaannoksia = 0;
    cout << "Aineksia on "
         << aines;

    soppaannoksia = aines / 3;

    //Keitto: yhteen annokseen tarvitaan 3 ainesta

}
