#include "normal_player.hpp"
#include "human_player.hpp"
#include "game_controller.hpp"

#include <iostream>
#include <string>

int main() {
    // TODO
    bool auswahl = false;
    bool stop_playing = false;
    std::string s;
    GameController gc;
    Board board;
    

    while(!auswahl){
        std::cout << "Welche Schwierigkeitsgrad willst du?" << std::endl;
        std::cout << " 1 - einfach " << std::endl;
        std::cout << " 2 - mittel " << std::endl;
        std::cout << " 3 - schwierig " << std::endl;
        std::cout << " 4 - Mensch vs. Mensch " << std::endl;
        std::cout << " 5 - PC vs PC " << std::endl;
        getline(std::cin , s);

        if (s == "1"){
            HumanPlayer player(Color::CROSS);
            RandomPlayer player2(Color::CIRCLE);
            std::cout << "EINFACH \n" << std::endl;
             while(!stop_playing){
                gc.play(player, player2);


                std::cout << "Nochmal Spielen y/n? \n" << std::endl;
                std::string weiter;
                getline(std::cin, weiter);
                if (weiter == "y"){
                    stop_playing = false;
                }else{
                    auswahl = true;
                    stop_playing = true; 
                    
                }
            }
        }else if (s == "2"){
            HumanPlayer player(Color::CROSS);
            NormalPlayer player2(Color::CIRCLE);
            std::cout << "MITTEL \n" << std::endl;

            while(!stop_playing){
                gc.play(player, player2);


                std::cout << "Nochmal Spielen y/n? \n" << std::endl;
                std::string weiter;
                getline(std::cin, weiter);
                if (weiter == "y"){
                    stop_playing = false;
                }else{
                    auswahl = true;
                    stop_playing = true; 
                    
                }
            }

        }else if (s == "3"){
            HumanPlayer player(Color::CROSS);
            PerfectPlayer player2(Color::CIRCLE);
            std::cout << "SCHWIERIG \n" << std::endl;

             while(!stop_playing){
                gc.play(player, player2);


                std::cout << "Nochmal Spielen y/n? \n" << std::endl;
                std::string weiter;
                getline(std::cin, weiter);
                if (weiter == "y"){
                    stop_playing = false;
                }else{
                    auswahl = true;
                    stop_playing = true; 
                    
                }
            }

        }else if (s == "4"){
            HumanPlayer player(Color::CROSS);
            HumanPlayer player2(Color::CIRCLE);
            std::cout << "MENSCH vs MENSCH \n" << std::endl;

             while(!stop_playing){
                gc.play(player, player2);


                std::cout << "Nochmal Spielen y/n? \n" << std::endl;
                std::string weiter;
                getline(std::cin, weiter);
                if (weiter == "y"){
                    stop_playing = false;
                }else{
                    auswahl = true;
                    stop_playing = true; 
                    
                }
            }

        }else if (s == "5"){
            PerfectPlayer player(Color::CROSS);
            PerfectPlayer player2(Color::CIRCLE);
            std::cout << "PC vs PC \n" << std::endl;

             while(!stop_playing){
                gc.play(player, player2);


                std::cout << "Nochmal Spielen y/n? \n" << std::endl;
                std::string weiter;
                getline(std::cin, weiter);
                if (weiter == "y"){
                    stop_playing = false;
                }else{
                    auswahl = true;
                    stop_playing = true; 
                    
                }
            }

        }else{
            std::cout << "Falsche Eingabe (bitte kein Leerzeichen verwenden)" << std::endl;
        }
    }

}
