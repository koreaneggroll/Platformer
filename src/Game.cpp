#include "../include/Game.h"



//Private Functions


//Inits the game window
void Game::initWin()
{

    /*
        @return void

        part of the Game class

        inits the game window object
    
    */

    window.create(sf::VideoMode(this->vidMode_width, this->vidMode_height), "Platformer", sf::Style::Close | sf::Style::Titlebar);
}


//Inits the player
void Game::initPlayer()
{
    /*
        @return void

        part of Game class

        inits the player object
        
    */
    player = new Player();
}



//Public functions
Game::Game()
{
    /*
        @return none

        Constructor for Game class
    */

    //initializes the window
    initWin();
    //initializes the player
    initPlayer();
}


Game::~Game()
{
    /*
        @return none

        Destructor for Game class
    */


   //deletes the objects

    delete player;
}




//Functions



void Game::updatePlayer()
{

    /*
        @return void

        Part of Game class

        updates the player object every frame
        
    */

    player->update();
}


//Updates the game
void Game::update()
{

    /*
        @return void

        part of Game class
        
        updates the game every frame
    */

    //Polling window ev

    while(window.pollEvent(event))
    {
        //If the X button is pressed the window closes
        if(event.type == sf::Event::Closed)
        {
            //closes window
            window.close();
        }

        //If the user pressed ESCAPE we close the program
        else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        {
            //closes window
            window.close();
        }
    }

    updatePlayer();
}



void Game::renderPlayer()
{
    /*
        @return void

        part of Game class

        updates the player object
    */

   player->render(window);
}


//Renders the game
void Game::render()
{

    /*
        @return void

        part of Game class

        renders the whole game
    
    */

   //clears the screen
    window.clear();

    //Render game here
    renderPlayer();


    //displays what we have to the screen
    window.display();
}


const sf::RenderWindow &Game::getWindow() const
{

    /*
        @return sf::RenderWindow&

        const

        part of Game class

        returns the window variable from the class;
    
    */

    return window;
}