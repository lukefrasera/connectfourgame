#include <iostream>
#include <stdio.h>
#include "play_game.h"
#include "game_board.h"
#include "connect_four.h"
 
int main(int argc, char* argv[]) {

std::cout << "Welcome to the game of Connect Four!";
  // ConnectFourGame game(); 
  // PlayGame (game); 

//game_board instance of class board 
board game_board; 

game_board.ClearBoard (); 
game_board.AddPiece (); 
	
/*std::cout << std::endl << std::endl << "GAME BOARD" << std::endl;  
  for(int i = 0; i < 4; i++){
    std::cout << std::endl; 
      for(int j = 0; j < 6; j++) {
        game_board.array[i][j] = EMPTY;
		  std::cout << game_board.array[i][j];
		}
	}

	std::cout << std::endl;
	return 0; 
*/

/* Description of my game:

1) Output an empty board 
	Array of 4 rows and 6 columns (All zeros)

  000000
  000000
  000000
  000000
	
2) Ask Player 1 to select a row to add a peg to 
3) Add a "1" to the lowest avaliable space in that row 
4) Check to see if player 1 has won
	If a player 1 has won:
		Congratulations! Player 1 has won! 
	If player 1 has not won:
		Go to player 2's turn 
5) Re output board 
6) Ask Player 2 to select a row to add a peg to 
7) Add a "2" to the lowest avaliable space in that row 
8) Check to see if player 2 has won
	If a player 2 has won:
		Congratulations! Player 2 has won! 
	If player 2 has not won:
		Go to player 1's turn */ 
}; 
