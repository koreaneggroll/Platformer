#include "../include/Player.h"



//Private Functions

void Player::initTexture()
{

}


void Player::initSprite()
{

}



//Public functions
Player::Player()
{
    initTexture();
    initSprite();
}


Player::~Player()
{

}



//Other functions

void Player::update()
{
    
}


void Player::render(sf::RenderTarget& target)
{
    target.draw(sprite);
}