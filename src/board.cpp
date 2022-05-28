#include "board.hpp"
#include "player.hpp"

#include <iostream>

GameStatus asGameStatus(Color color) {
    switch (color) {
    case Color::CROSS:
        return GameStatus::CROSS;
    default:
        return GameStatus::CIRCLE;
    }
}

GameStatus asGameStatus(Field field) {
    switch (field) {
    case Field::CROSS:
        return GameStatus::CROSS;
    case Field::CIRCLE:
        return GameStatus::CIRCLE;
    default:
        std::abort();
    }
}

Field asField(Color color) {
    switch (color) {
    case Color::CROSS:
        return Field::CROSS;
    default:
        return Field::CIRCLE;
    }
}

Color enemyOf(Color color) {
    switch (color) {
    case Color::CROSS:
        return Color::CIRCLE;
    default:
        return Color::CROSS;
    }
}

Board::Board() : 
fields(std::vector<std::vector<Field>>(3, std::vector<Field>(3, Field::EMPTY))) {}

std::optional<GameStatus> Board::whoWon() const {
    std::optional<GameStatus> GS;
    bool a = false;
    bool b = false;
    bool c = false;

    //std::cout << "whowon()" << std::endl;
    //std::cout << "fieldsize" << fields.size() <<std::endl;
    //std::cout << "fieldsize2" << fields[0].size() <<std::endl;
    for (size_t i = 0; i < fields.size(); i++)
    {
        
        if (fields[i][0] == fields[i][1] and fields[i][0] == fields[i][2] and fields[i][0] != Field::EMPTY){
            return asGameStatus(fields[i][0]);
        }
        if (fields[0][i] == fields[1][i] and fields[0][i] == fields[2][i] and fields[0][i] != Field::EMPTY){
            return asGameStatus(fields[0][i]);
        }
        if (fields[0][0] == fields[1][1] and fields[0][0] == fields[2][2] and fields[0][0] != Field::EMPTY){
            return asGameStatus(fields[0][0]);
        }
        if (fields[0][2] == fields[1][1] and fields[0][2] == fields[2][0] and fields[0][2] != Field::EMPTY){
            return asGameStatus(fields[0][2]);
        }
        if (fields[i][0] != Field::EMPTY and fields[i][1] != Field::EMPTY and fields[i][2] != Field::EMPTY){
            if(i == 0){
                a = true;
            }else if(i == 1){
                b = true;
            }else if (i == 2){
                c = true;
            }
        }
    
        
    }

    if (a == true and b == true and c == true){
        return GameStatus::TIE;
    }else{
        return {};
    }
}

std::ostream& operator<<(std::ostream& os, const Board& board) {
    // TODO
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t t = 0; t < 3; t++)
        {
            if (t == 0) { os << "| ";}
            if (board[i][t] == Field::EMPTY){
                
                os <<  " " << " | " ;
            }else if (board[i][t] == Field::CROSS){
                os <<  "X" << " | " ;
            }else if (board[i][t] == Field::CIRCLE){
                os <<  "O" << " | " ;
            }
        }
        os << "\n";
         
      
    }
    
    
    return os;
}
