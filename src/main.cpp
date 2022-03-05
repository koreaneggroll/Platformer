#include "../include/Game.h"


int main()
{
    //srand time takes as seed the curretn time
    srand(static_cast<unsigned>(time(0)));

    //creates a game instance
    Game game;

    //while the window is open
    while(game.getWindow().isOpen())
    {
        //updates the game
        game.update();
        //renders whatever we have to render
        game.render();
    }

    return 0;
}
