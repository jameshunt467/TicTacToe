#include <iostream>
#include <vector>
#include <cmath>
#include "my_functions.hpp"

int main() {
  bool winnerFound = false;
  bool shownBoard = false;
  int totalMoves = 0;  // must be below 9
  std::string nextMove;
  std::string errorMsg = "Invalid position.  Please enter in the format:   \n Column then Row";
 
 while(totalMoves <= 4 && !winnerFound) {
   if(!shownBoard) {
     displayEmptyBoard();
     shownBoard = true;
   }
  std::cout << "Input move (column then row)" << "\n";
  // column first (a,b,c) then row (1,2,3)
  std::cin >> nextMove;
/*
  //filter input 
  if(nextMove.length() == 2) {
    if((nextMove[0] == 'a' || nextMove[0] == 'b' || nextMove[0] == 'c') 
    && (nextMove[1] == '1' || nextMove[1] == '2' || nextMove[1] == '3')) {
          // a proper input has been entered
          updateBoard(nextMove);         
          totalMoves++;
    } else {
       std::cout << errorMsg;
    }
  } else if(nextMove == "exit") {
      std::cout << "RETURNING" << "\n";
      return 0;
  } else {
    std::cout << errorMsg;
  } */
 }
 // game finished 
 std::cout << "GAME FINISHED";
}
