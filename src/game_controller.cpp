#include "game_controller.hpp"

#include <iostream>
#include <time.h>


void GameController::play(Player& cross, Player& circle) {
  // TODO
  srand(time(NULL));
   int zufall = rand()%100;
   Board board;

    if (zufall>49){
      while (board.whoWon().has_value() == 0) {
        cross.performNextMove(board);
        std::cout << board << std::endl;
        if(board.whoWon().has_value() == 0){
          circle.performNextMove(board);
          std::cout <<  board <<  std::endl;
        }
      }       
    }else{
        while (board.whoWon().has_value() == 0) {
        cross.performNextMove(board);
        std::cout << board << std::endl;
        if(board.whoWon().has_value() == 0){
          circle.performNextMove(board);
          std::cout <<  board <<  std::endl;
        }
      } 
    }
    if (board.whoWon() == GameStatus::CIRCLE){
      std::cout << "CIRCLE WON" << std::endl;
    }else if(board.whoWon() == GameStatus::CROSS){
      std::cout << "CROSS WON" << std::endl;
    }else if(board.whoWon() == GameStatus::TIE){
      std::cout << " TIE " << std::endl;
    }
    
}