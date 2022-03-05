#ifndef GAME_H
#define GAME_H


#include "./precomp/stdafx.h"


class Game
{
    //Variables
    private:
        sf::RenderWindow window;
        sf::Event event;

    //Private functions
    private:
        void initWin();

    public:
        Game();
        virtual ~Game();

        //functions
        void update();
        void render();
        const sf::RenderWindow & getWindow() const;
};


#endif //GAME_H