#include "game_board.h"

board::board() {
  std::cout << "The board constructor is running!" << std::endl; 
}

board::~board() {
  std::cout << std::endl << "The board destructor is running!" << std::endl; 
} 

board::ClearBoard() {
  std::cout << std::endl << std::endl << "GAME BOARD" << std::endl;  
    for(int i = 0; i < 4; i++){
	  std::cout << std::endl; 
		for(int j = 0; j < 6; j++) {
			array[i][j] = EMPTY;
			std::cout << array[i][j];
		}
	}

  std::cout << std::endl;
  return 0; 
}

// board::ColumnFull()
// {
// 	std::cout << std::cout <<std::endl << "Testing to see if colunm is full" <<std::endl; 
// 	if {game_pieces array[0][col] != game_pieces.EMPTY
// 		std::cout <<"This column is full"; 
// 		return TRUE;} 

//     else
//         	std::cout << "This column is not full";
// }

// /*board::ColumnEmpty()

board::AddPiece() {
  std::cout << std::endl << "Which column would you like to add a piece to?" <<std::endl <<"Enter 1, 2, 3, 4, 5 or 6." <<std::endl; 
  std::cin >> AddPieceToColumn; 
	//if input is not 1, 2, 3, 4, 5, 6 std::cout <<"not a valid column"; 

/*for(int i = 0;){
std::cout << std::endl; 
for(int j = 0;) {*/
  //if Player1's turn 
	array[0][0] = EMPTY;
//if Player 2's turn
	array[0][1] = PLAYER2;
	std::cout << array[0][0];

/*if ColEmpty(col)
    self.state[-1][col] = piece_type
    return True
    else:
      for row in xrange(len(self.state)):
               if self.state[row][col] != PIECE.EMPTY:
                    self.state[row-1][col] = piece_type
                    return True
        return False*/
}

