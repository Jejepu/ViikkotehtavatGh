#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Gordon");

   int salaattiannoksia = c_olio.makeSalad(24);
    cout << ", joilla salaatti annoksia tehtiin "
         << salaattiannoksia
         << endl;

    int soppaannoksia = c_olio.makeSoup(15);
    cout << ", joilla keitto annoksia tehtiin "
         << soppaannoksia
         << endl
         << endl;

    ItalianChef i_olio("Mario");



    bool salasana = i_olio.askSecret("pizza",15 ,20);
    // salasana ja aineksien määrät tähän


    return 0;


}



