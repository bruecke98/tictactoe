#include "human_player.hpp"

#include <iostream>
#include <string>
#include <regex>

HumanPlayer::HumanPlayer(Color color) : Player(color) {}

void HumanPlayer::performNextMove(Board& board) {
    // TODO
    std::string x = "";
    int a = -1;
    int b = -1;
    bool first = true;
    bool sec = false;
    
    std::cout << "Wo wollen sie ihr Kreuz setzen? (Zaehlend von 0)" << std::endl;
    std::cout << "Eingabeformat: <Zeile> <Spalte>, zum Beispiel 2 0:" << std::endl;
    std::getline(std::cin , x);
    //std::cout << x.find_first_not_of("0123456789") << std::endl;
    for (char c : x)
    {
        std::cout << c << std::endl;
        if (c == '0'){
           if (a==-1){
               a = 0;
           }else if (b == -1){
               b = 0;
           }else if (a!=-1 and b!=-1) {
                std::cout << "Fehler " << std::endl;
                performNextMove(board);
           }
        }else if (c=='1'){
            if (a==-1){
               a = 1;
           }else if (b == -1){
               b = 1;
           }else if (a!=-1 and b!=-1) {
                std::cout << "Fehler " << std::endl;
                performNextMove(board);
           }
        }else if (c=='2'){
            if (a==-1){
               a = 2;
           }else if (b == -1){
               b = 2;
           }else if (a!=-1 and b!=-1) {
                std::cout << "Fehler " << std::endl;
                performNextMove(board);
           }
        }else if (isspace(c)){
            std::cout << "empty" << std::endl;
        }else{
            std::cout << "Fehler " << std::endl;
            performNextMove(board);
        }

    }
    if (color == Color::CIRCLE){
        board[a][b] = Field::CIRCLE;
    }else if (color == Color::CROSS){
        board[a][b] = Field::CROSS;

    }

}

