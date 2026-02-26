#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLUMNS 7

/*Function prototypes (lets us use them anywhere)*/
void printBoard(char* board);
int checkLinks(char* board, int linkLength);
int makeMove(char* board, int column);
int aiMove(char* board, int difficulty);

int main(){
  
  
  return 0;
}

void printBoard(char* board_pointer){
  
}

int checkLinks(char* board_pointer, int linkLength){
  /* Could you modify this code to check for an arbitrary length instead of just 4? 
     Instead of returning just who won, you could return an int array with the syntax
     {{{row1, column1}, {row2, column2}...} ... } where it's a 3D array containing 2D
     arrays with the found links containing 1D arrays with the row and column of the circles.
     
     It looks harder, but it shouldn't be that much of a change to the internal logic you'd have
     to use to find the links anyways. It'll help a lot with the AI.*/


  
  return 0;
}

int makeMove(char* board_pointer, int column){


  return 0;
}

int aiMove(char* board_pointer, int difficulty){


  return 0;
}
