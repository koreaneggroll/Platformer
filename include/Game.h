#ifndef GAME_H
#define GAME_H


#include "./precomp/stdafx.h"
#include "./Player.h"


class Game
{

    //Static Variables
    private:
        static const unsigned short vidMode_width = 1280;
        static const unsigned short vidMode_height = 720;

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
        void renderPlayer();
        void render();
        const sf::RenderWindow & getWindow() const;
};


#endif //GAME_H