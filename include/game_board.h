#ifndef GAME_BOARD_H_
#define GAME_BOARD_H_
#include <iostream>  
 
enum game_pieces{
	EMPTY, PLAYER1, PLAYER2
	//0       1         2
};

class board {
public: 
	board(); 
	~board(); 
	ClearBoard(); 
	ColumnFull(); 
	ColumnEmpty(); 
	AddPiece(); 

private:
	std::string state_;
  int AddPieceToColumn;
	int** board_state; 
	int default;  
	int player 1; 
	int player 2;
	clear board(); 
	print board (); 
  game_pieces array [4][6]; // i by j //  r by c 
}; 

#endif
