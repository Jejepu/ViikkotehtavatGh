#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "game konstruktori "
         << "maxNumber: "
         << maxNumber
         << endl;
}

Game::~Game()
{
    cout << "game destruktori "
         << "peli loppui "
         << endl;
}

void Game::play()
{
    cout << "Game start"
         << endl;
    srand(time(0));
    short randomValue = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    short userValue;
    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>userValue;
        numOfGuesses++;
        if(userValue == randomValue)
        {
            cout<<"Arvasit oikein luku = "<<userValue<<endl;
            stayInLoop = false;
        }
        else if(userValue<randomValue)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "arvausten lukumaara "
         << numOfGuesses
         << endl;
}
