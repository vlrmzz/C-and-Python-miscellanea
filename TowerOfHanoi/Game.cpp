#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;

// Soves the Tower of Hanoi puzzle.

void Game::solve() {
    // print out the state of the game
    cout << *this << endl;

    //@TODO -- Finish solving the game
}

// Default constructor to create the inital state:
Game::Game() {
    // Create the three empty stacks:
    for (int i=0; i<3; i++) {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }

// Create the 4 cubes, placing each on the [0]th stack:
Cube blue(4, uiuc::HSLAPixel::BLUE);
stacks_[0].push_back(blue);

Cube orange(3, uiuc::HSLAPixel::ORANGE);
stacks_[0].push_back(orange);

Cube purple(2, uiuc::HSLAPixel::PURPLE);
stacks_[0].push_back(purple);

Cube yellow(1, uiuc::HSLAPixel::YELLOW);
stacks_[0].push_back(yellow);

}

std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}