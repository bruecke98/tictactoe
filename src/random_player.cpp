#include "random_player.hpp"
#include <cstdlib>
#include <iostream>
#include <time.h>

RandomPlayer::RandomPlayer(Color color) : Player(color) {}

void RandomPlayer::performNextMove(Board& board) {
    // TODO
    srand(time(NULL));
    int zufall = rand() % 9;
    bool found = false;
    int change = 0;

    while (!found)
    {
        if (change > 8){
            return;
        }
        if (zufall < 3){
            if (board[0][zufall%3] == Field::EMPTY){
                if (color == Color::CIRCLE){
                    board[0][zufall%3] = Field::CIRCLE;
                }else if (color == Color::CROSS){
                    board[0][zufall%3] = Field::CROSS;
                }
                found = true;
                return;
            }else{
                change = change +1;
                if (zufall == 8){
                    zufall = 0;
                }else{
                    zufall = zufall + 1;
                }
            }
        }else if (zufall >= 3 and zufall < 6){
            if (board[1][zufall%3] == Field::EMPTY){
                if (color == Color::CIRCLE){
                    board[1][zufall%3] = Field::CIRCLE;
                }else if (color == Color::CROSS){
                    board[1][zufall%3] = Field::CROSS;
                }
                found = true;
                return;
            }else{
                change = change +1;

                if (zufall == 8){
                    zufall = 0;
                }else{
                    zufall = zufall + 1;
                }
            }
        }else{
            if (board[2][zufall%3] == Field::EMPTY){
                if (color == Color::CIRCLE){
                    board[2][zufall%3] = Field::CIRCLE;
                }else if (color == Color::CROSS){
                    board[2][zufall%3] = Field::CROSS;
                }
                found = true;
                return;
            }else{
                change = change +1;

                if (zufall == 8){
                    zufall = 0;
                }else{
                    zufall = zufall + 1;
                }
            }

        }
    }
    
    


}
