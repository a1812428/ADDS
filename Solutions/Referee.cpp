#include "Referee.h"
#include <iostream>
using namespace std;

Referee::Referee()
{
}

char Referee::refGame(Human player1, Computer player2)
{
    if ((player1.move == 'R' && player2.move == 'R') || (player1.move == 'S' && player2.move == 'S') || (player1.move == 'P' && player2.move == 'P'))
    {
        return 'T';
    }
    else if ((player1.move == 'R' && player2.move == 'S') || (player1.move == 'S' && player2.move == 'P') || (player1.move == 'P' && player2.move == 'R'))
    {
        return 'W';
    }
    else
    {
        return 'L';
    }
}