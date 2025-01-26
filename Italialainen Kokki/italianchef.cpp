#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << " ItalianChef defaultkonstruktori "
         << endl;
}

ItalianChef::ItalianChef(string name)
    :Chef(name)
{
    cout << "ItalianChef konstruktori"
         << ", kokin nimi "
         << name
         << endl;
}


ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori "
         << endl;
}


bool ItalianChef::askSecret(string pw, int f, int w)
{
    //1. jäsenfunktio ask secret tarkistaa onko parametrinä
   // annettu salasan ok, ja jos on, kutsuu makePizza()- jäsenfuktiota
    // 2- jos on, kutsuu makePizza()
    //2.1 f ja w pitää sijoittaa
    //muut parametrit ovat ainesten määrä
    // 3 funktio palauttaa true/false sen mukaan oliko salasana ok
    if (pw == password)
        {
            cout << "salasana True"
            << endl
                 << endl;

                makePizza(f,w);

        }
    else
    {
        cout << "salasana False"
             << endl;

    }
}

int ItalianChef::makePizza(int f, int w)
{
    int pizzoja = 0;
    cout << "jauhoja on "
         << f
         << ", vetta on "
         << w;

    int fpizza = f/5;
    int wpizza = w/5;
    if (fpizza < wpizza)  //jos jauhojen määrä pienempi
    {
        pizzoja = fpizza;
        cout << ", joilla pizzoja tehtiin = "
             << pizzoja
             << endl;
    }
    else
    {
        pizzoja = wpizza;
        cout << ", joilla pizzoja tehtiin = "
             << pizzoja
             << endl;
    }

    // tekee niin monta pizzaa kuin aineksia riittää
    // yhteen tarvitsee 5 f ja 5 w
}


