cmake_minimum_required(VERSION 2.8.4)


project(connectfourgame)

include_directories(include)
add_executable(play_connect_four
  src/play_connect_four.cc
  src/game_board.cc
)

