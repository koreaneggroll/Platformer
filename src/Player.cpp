#include "../include/Player.h"



//Private Functions

void Player::initTexture()
{
    /*
        @return void

        part of the Player class

        initializes the players textures
    */
}


void Player::initSprite()
{
    /*
        @return void

        part of the Player class

        initializes the players sprite
    */
}



//Public functions
Player::Player()
{

    /*
        @return none

        Constructor for the Player class
    */

    initTexture();
    initSprite();
}


Player::~Player()
{
    /*
        @return none

        Destructor for the Player class
    */
}



//Other functions

void Player::update()
{
    /*
        @return void

        part of the Player class

        updates the player
    */
}


void Player::render(sf::RenderTarget& target)
{
    /*
        @return void
        @parameters sf::RenderTarget&

        renders the players sprite
    */
    target.draw(sprite);
}