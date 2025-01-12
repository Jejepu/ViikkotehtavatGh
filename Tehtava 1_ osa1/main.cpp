/* arvaus peli viikkotehtava1
1) arvotaan satunnainen luku
2) pelaajan arvaus
3) tarkistaa onko arvaus pienempi isompi vai oikein
4) mikä arvaus oli suhteessa lukuun "luku on pienempi/ suurempi
5) Jos vastaus ei oikein takaisin 2 kohtaan
*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    int satunnaisluku;
    int arvaus = 0;
    int arvauslkm;

    srand(time(0));

    // arvotaan luku
    satunnaisluku = rand()%21;

    // 5.
    while(arvaus != satunnaisluku){
    //2. kysytään pelaajalta arvaus
    cout << "anna luku?"
         << endl;
    cin >> arvaus;
    arvauslkm ++;
    //3. Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
    //3.1 jos arvaus yhtäsuuri kuin satunnaisluku
    if(arvaus == satunnaisluku){
        cout << "Oikein"
             << endl;
        cout << "arvausten maara: " << arvauslkm << endl;
    }
    //3.2 jos arvaus pienempi kuin satunnaisluku
    if(arvaus < satunnaisluku){
        cout << "Pienempi kuin satunnaisluku"
             << endl;
    }
    //3.3 jos arvaus suurempi kuin satunnaisluku
    if(arvaus > satunnaisluku){
        cout << "Suurempi kuin satunnaisluku"
             << endl;
    }
    }

    return 0;
}

//loopit for <- tietty määrä kierroksia
//while <- kunnes ehto täyttyy
// do while <- tekee niin pitkään kuin ehto täyttyy
// i= silmukka muuttuja
