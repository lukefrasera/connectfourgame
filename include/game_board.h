#ifndef GAME_BOARD_H_
#define GAME_BOARD_H_

namespace board_game {
class Board {
 public: 
  Board();
  ~Board();

  std::string GetState();

  void SetState(std::string type);
 
 private:
  std::string state_;
  int** board_state; 
  int default;  
  int player 1; 
  int player 2;
  clear board(); 
  print board (); 

  Get Board State(); 
  
};
}

#endif