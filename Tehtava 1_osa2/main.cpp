/* arvaus peli viikkotehtava1_2
1) arvotaan satunnainen luku
2) pelaajan arvaus
3) tarkistaa onko arvaus pienempi isompi vai oikein
4) mikä arvaus oli suhteessa lukuun "luku on pienempi/ suurempi
5) Jos vastaus ei oikein takaisin 2 kohtaan
*/
#include <iostream>
#include <ctime>
using namespace std;
// prototyyppi
int game(int maxnum);

int main()
{
    int arvauslkm = 0;
    int maxnum = 0;
    // pyydetään korkein arvo
    cout << "anna korkein arvottava arvo: "
         << endl;
    cin >> maxnum;

    while(maxnum < 2){
        cout << "anna suurempi arvo "
             << endl;
        cin >> maxnum;
    }

    arvauslkm = game(maxnum);
    cout << "arvausten maara: "
         << arvauslkm
         << endl;

    return 0;
}

int game(int maxnum){
    //1. palauta arvausten määrä


    int arvaus = 0;
    int arvauslkm;
    int satunnaisluku = 0;

    cout << "maxnum: "
         << maxnum
         << endl;
    //1 arvotaan luku
    srand(time(NULL)); //time palauttaa kellon ajan tällä hetkellä(arvo muuttuu kun ohjelma alkaa uudestaan)
    satunnaisluku = rand()%maxnum;

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
           // cout << "arvausten maara: " << arvauslkm << endl;
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

    return arvauslkm;
}
