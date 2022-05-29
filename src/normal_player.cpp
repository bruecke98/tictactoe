#include "normal_player.hpp"
#include <cstdlib>
#include <time.h>

NormalPlayer::NormalPlayer(Color color) : PerfectPlayer(color), RandomPlayer(color), Player(color) {}

void NormalPlayer::performNextMove(Board& board) {
    // TODO
    srand(time(NULL));
    int zufall = rand()%100;

    if (zufall>49){
        PerfectPlayer::performNextMove(board);
    }else{
        RandomPlayer::performNextMove(board);
    }
}
