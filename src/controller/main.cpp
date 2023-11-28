#include "main.h"    

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
 

Main::Main() { 
    startGame();
}

void Main::startGame() {
    this -> map = new GameMap(30, 30);
    gameLoop();
}

void Main::gameLoop() {
    std::cout << map -> getHeight();
    bool running = true; 
    while(running){
        Sleep(1000 / Main::framesPerSecond); 
    }
}


void Main::end() {
     
}

void Main::clear(){
    delete this -> map;
    std::cout << "cleared";
}

