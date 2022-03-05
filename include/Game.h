#ifndef GAME_H
#define GAME_H


#include "./precomp/stdafx.h"
#include "./Player.h"


class Game
{
    //Variables
    private:
        sf::RenderWindow window;
        sf::Event event;

        Player* player;

    //Private functions
    private:
        void initWin();
        void initPlayer();

    public:
        Game();
        virtual ~Game();

        //functions
        void updatePlayer();
        void update();
        void render();
        const sf::RenderWindow & getWindow() const;
};


#endif //GAME_H