#include "../include/Game.h"



//Private Functions



void Game::initWin()
{
    window.create(sf::VideoMode::getDesktopMode(), "Platformer", sf::Style::Close | sf::Style::Titlebar);
}



//Public functions
Game::Game()
{
    this->initWin();
}


Game::~Game()
{

}




//Functions


void Game::update()
{
    //Polling window ev

    while(window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            window.close();
        }

        else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        {
            window.close();
        }
    }
}


void Game::render()
{

}


const sf::RenderWindow &Game::getWindow() const
{
    return window;
}