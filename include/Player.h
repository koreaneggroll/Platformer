#ifndef PLAYER_H
#define PLAYER_H


#include "./precomp/stdafx.h"


class Player
{
    private:
        sf::Sprite sprite;
        sf::Texture textureSheet;

        void initTexture();
        void initSprite();


        //Animation

        //Movement

        //Core

    public:
        Player();
        virtual ~Player();


        //Functions
        void updateMovement();
        void update();
        void render(sf::RenderTarget& target);
};

#endif //PLAYER_H