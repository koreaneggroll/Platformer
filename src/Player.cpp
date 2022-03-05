#include "../include/Player.h"



//Private Functions

void Player::initTexture()
{
    /*
        @return void

        part of the Player class

        initializes the players textures
    */

   if(!textureSheet.loadFromFile("./src/textures/player_sheet.png"))
   {
       printf("ERROR: Player class could not load texture sheet!\n");
       exit(1);
   }
}


void Player::initSprite()
{
    /*
        @return void

        part of the Player class

        initializes the players sprite
    */

   sprite.setTexture(textureSheet);
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


void Player::updateMovement()
{
    /*
        @return void

        part of the Player class

        updates the players movement
    */

   if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) //left
   {
       sprite.move(-0.7f, 0.f);
   }
   else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) //right
   {
       sprite.move(0.7f, 0.f);
   }

   else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) //top
   {
       sprite.move(0.f, -0.7f);
   }
   else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) //down
   {
       sprite.move(0.f, 0.7f);
   }
}


void Player::update()
{
    /*
        @return void

        part of the Player class

        updates the player
    */

   updateMovement();
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