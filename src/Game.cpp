#include "../include/Game.h"



//Private Functions


//Inits the game window
void Game::initWin()
{
    window.create(sf::VideoMode::getDesktopMode(), "Platformer", sf::Style::Close | sf::Style::Titlebar);
}


//Inits the player
void Game::initPlayer()
{
    player = new Player();
}



//Public functions
Game::Game()
{
    initWin();
    initPlayer();
}


Game::~Game()
{
    delete player;
}




//Functions



void Game::updatePlayer()
{

}


//Updates the game
void Game::update()
{

    /*
        @return void
        
        updates the game every frame
    */

    //Polling window ev

    while(window.pollEvent(event))
    {
        //If the X button is pressed the window closes
        if(event.type == sf::Event::Closed)
        {
            window.close();
        }

        //If the user pressed ESCAPE we close the program
        else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        {
            window.close();
        }
    }
}


//Renders the game
void Game::render()
{

    /*
        @return void

        renders the whole game
    
    */

    window.clear();

    //Render game here

    window.display();
}


const sf::RenderWindow &Game::getWindow() const
{
    return window;
}