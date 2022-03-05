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
    std::cout << "Works till now" << std::endl;
}


void Game::render()
{

}


const sf::RenderWindow &Game::getWindow() const
{
    return window;
}