/*--------------------------------------------
   Program 2: Knight Escape
   The objective of this game is to get the white knight to the empty
    square in the upper right-hand corner of the board.
    
    The knight can only move in the way that it does during a traditional
    chess game. This means that a knight can only move in a valid L-shape
    (two squares in a horizontal direction, then one in a vertical direction OR
    two squares in a vertical direction, then one in a horizontal direction).
               
   Course: CS 141, Spring 2022
   System: c++
   Author: Juan Miguel Cruz
    
 ---------------------------------------------*/

#include <iostream>        // for input and output
#include <cctype>           // for toupper()
using namespace std;

// Global variables for the pieces are allowed for this program,
// but will generally not be allowed in the future.
// You will likely want to declare global variables at least for the 25 board positions.
// ...

// Characters of the pieces to be used on the board
// Note that these are global constants, so their values cannot be changed.
// Global Variables
const string WhiteKnight = "\u2658";        // White knight character
const string BlackKnight = "\u265E";        // Black knight character
const string BlankPosition = " ";            // Blank position character
//--------------------------------------------------------------------------------
//Global variables
string p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25;
//--------------------------------------------------------------------------------
// Display welcome message, introducing the user to the program and describing the instructions for the game
void displayWelcomeMessage()
{
    cout << "Program 2: Knight Escape \n"
         << "CS 141, Spring 2022, UIC \n"
         << " \n"
         << "The objective of this puzzle is to get the white knight "
         << "up to the empty square in the top right corner of the board. "
         << "Use standard knight moves from a traditional chess game, "
         << "where a knight moves in an L-shape. \n"
         << "This means that a knight can only move either "
         << "1) two squares in a horizontal direction, then one in a vertical direction, OR "
         << "2) two squares in a vertical direction, then one in a horizontal direction."
         << " \n"
         << "Your score decreases by 5 with each valid move, and by 10 with each invalid move. \n"
         << "Try to complete the puzzle with the smallest number of valid moves!"
         << endl;
}//end displayWelcomeMessage() 
// ----------------------------------------------------------------------
// Display the current board, along with the corresponding positions
// This function makes use of global variables p1..p25, which represent each of the positions on the board
void displayBoard()
{
    cout <<"\n"
         <<                          "    Board   " <<                               "      Position \n"
         << " " <<  p1 << " " <<  p2 << " " <<  p3 << " " <<  p4 << " " <<  p5 << "     1  2  3  4  5 \n"
         << " " <<  p6 << " " <<  p7 << " " <<  p8 << " " <<  p9 << " " << p10 << "     6  7  8  9 10 \n"
         << " " << p11 << " " << p12 << " " << p13 << " " << p14 << " " << p15 << "    11 12 13 14 15 \n"
         << " " << p16 << " " << p17 << " " << p18 << " " << p19 << " " << p20 << "    16 17 18 19 20 \n"
         << " " << p21 << " " << p22 << " " << p23 << " " << p24 << " " << p25 << "    21 22 23 24 25 \n"
         << endl;
} //end displayBoard()
// ----------------------------------------------------------------------
//Function for the original board
void Board(){
  p1 = p2 = p3 = p4 = p6 = p7 = p8 = p9 = p10 = p11 = p12 = p13 = p14 = p15 = p16 = p17 = p18 = p19 = p20 = p22 = p23 = p24 = p25 = BlackKnight;
  p21 = WhiteKnight;
  p5 = BlankPosition;
}
// ----------------------------------------------------------------------

// Fucntion to swap the knights from the position to the destination
void MoveKnight(int position, int destination) {
  string temp; //temp variable to hold the string that will be swap
  switch(position){
    case 1:
        if(destination == 8){
            temp = p1;
            p1 = p8;
            p8 = temp;
        }
        else if (destination == 12){
            temp = p1;
            p1 = p12;
            p12 = temp;
        }
        break;
    case 2:
        if(destination == 9){
            temp = p2;
            p2 = p9;
            p9 = temp;
        }
        else if (destination == 11){
            temp = p2;
            p2 = p11;
            p11 = temp;
        }
        else if (destination == 13){
            temp = p2;
            p2 = p13;
            p13 = temp;
        }
        break;
    case 3:
        if(destination == 6){
            temp = p3;
            p3 = p6;
            p6 = temp;
        }
        else if (destination == 10){
            temp = p3;
            p3 = p10;
            p10 = temp;
        }
        else if (destination == 12){
            temp = p3;
            p3 = p12;
            p12 = temp;
        }
        else if (destination == 14){
            temp = p3;
            p3 = p14;
            p14 = temp;
        }
        break;
    case 4:
        if(destination == 7){
            temp = p4;
            p4 = p7;
            p7 = temp;
        }
        else if (destination == 13){
            temp = p4;
            p4 = p13;
            p13 = temp;
        }
        else if (destination == 15){
            temp = p4;
            p4 = p15;
            p15 = temp;
        }
        break;
    case 5:
        if(destination == 8){
            temp = p5;
            p5 = p8;
            p8 = temp;
        }
        else if (destination == 14){
            temp = p5;
            p5 = p14;
            p14 = temp;
        }
        break;
    case 6:
        if(destination == 3){
            temp = p6;
            p6 = p3;
            p3 = temp;
        }
        else if (destination == 13){
            temp = p6;
            p6 = p13;
            p13 = temp;
        }
        else if (destination == 17){
            temp = p6;
            p6 = p17;
            p17 = temp;
        }
        break;
    case 7:
        if(destination == 4){
            temp = p7;
            p7 = p4;
            p4 = temp;
        }
        else if (destination == 14){
            temp = p7;
            p7 = p14;
            p14 = temp;
        }
        else if (destination == 16){
            temp = p7;
            p7 = p16;
            p16 = temp;
        }
        else if (destination == 18){
            temp = p7;
            p7 = p18;
            p18 = temp;
        }
        break;
    case 8:
        if(destination == 1){
            temp = p8;
            p8 = p1;
            p1 = temp;
        }
        else if (destination == 5){
            temp = p8;
            p8 = p5;
            p5 = temp;
        }
        else if (destination == 11){
            temp = p8;
            p8 = p11;
            p11 = temp;
        }
        else if (destination == 15){
            temp = p8;
            p8 = p15;
            p15 = temp;
        }
        else if (destination == 17){
            temp = p8;
            p8 = p17;
            p17 = temp;
        }
        else if (destination == 19){
            temp = p8;
            p8 = p19;
            p19 = temp;
        }
        break;
    case 9:
        if(destination == 2){
            temp = p9;
            p9 = p2;
            p2 = temp;
        }
        else if (destination == 12){
            temp = p9;
            p9 = p12;
            p12 = temp;
        }
        else if (destination == 18){
            temp = p9;
            p9 = p18;
            p18 = temp;
        }
        else if (destination == 20){
            temp = p9;
            p9 = p20;
            p20 = temp;
        }
        break;
    case 10:
        if(destination == 3){
            temp = p10;
            p10 = p3;
            p3 = temp;
        }
        else if (destination == 13){
            temp = p10;
            p10 = p13;
            p13 = temp;
        }
        else if (destination == 19){
            temp = p10;
            p10 = p19;
            p19 = temp;
        }
        break;
    case 11:
        if(destination == 2){
            temp = p11;
            p11 = p2;
            p2 = temp;
        }
        else if (destination == 8){
            temp = p11;
            p11 = p8;
            p8 = temp;
        }
        else if (destination == 18){
            temp = p11;
            p11 = p18;
            p18 = temp;
        }
        else if (destination == 20){
            temp = p11;
            p11 = p20;
            p20 = temp;
        }
        break;
    case 12:
        if(destination == 1){
            temp = p12;
            p12 = p1;
            p1 = temp;
        }
        else if (destination == 3){
            temp = p12;
            p12 = p3;
            p3 = temp;
        }
        else if (destination == 9){
            temp = p12;
            p12 = p9;
            p9 = temp;
        }
        else if (destination == 19){
            temp = p12;
            p12 = p19;
            p19 = temp;
        }
        else if (destination == 21){
            temp = p12;
            p12 = p21;
            p21 = temp;
        }
        else if (destination == 23){
            temp = p12;
            p12 = p23;
            p23 = temp;
        }
        break;
    case 13:
        if(destination == 2){
            temp = p13;
            p13 = p2;
            p2 = temp;
        }
        else if (destination == 4){
            temp = p13;
            p13 = p4;
            p4 = temp;
        }
        else if (destination == 6){
            temp = p13;
            p13 = p6;
            p6 = temp;
        }
        else if (destination == 10){
            temp = p13;
            p13 = p10;
            p10 = temp;
        }
        else if (destination == 16){
            temp = p13;
            p13 = p16;
            p16 = temp;
        }
        else if (destination == 20){
            temp = p13;
            p13 = p20;
            p20 = temp;
        }
        else if (destination == 22){
            temp = p13;
            p13 = p22;
            p22 = temp;
        }
        else if (destination == 24){
            temp = p13;
            p13 = p24;
            p24 = temp;
        }
        break;
    case 14:
        if(destination == 3){
            temp = p14;
            p14 = p3;
            p3 = temp;
        }
        else if (destination == 5){
            temp = p14;
            p14 = p5;
            p5 = temp;
        }
        else if (destination == 7){
            temp = p14;
            p14 = p7;
            p7 = temp;
        }
        else if (destination == 17){
            temp = p14;
            p14 = p17;
            p17 = temp;
        }
        else if (destination == 23){
            temp = p14;
            p14 = p23;
            p23 = temp;
        }
        else if (destination == 25){
            temp = p14;
            p14 = p25;
            p25 = temp;
        }
        break;
    case 15:
        if(destination == 4){
            temp = p15;
            p15 = p4;
            p4 = temp;
        }
        else if (destination == 8){
            temp = p15;
            p15 = p8;
            p8 = temp;
        }
        else if (destination == 18){
            temp = p15;
            p15 = p18;
            p18 = temp;
        }
        else if (destination == 24){
            temp = p15;
            p15 = p24;
            p24 = temp;
        }
        break;
    case 16:
        if(destination == 7){
            temp = p16;
            p16 = p7;
            p7 = temp;
        }
        else if (destination == 13){
            temp = p16;
            p16 = p13;
            p13 = temp;
        }
        else if (destination == 23){
            temp = p16;
            p16 = p23;
            p23 = temp;
        }
        break;
    case 17:
        if(destination == 6){
            temp = p17;
            p17 = p6;
            p6 = temp;
        }
        else if (destination == 8){
            temp = p17;
            p17 = p8;
            p8 = temp;
        }
        else if (destination == 14){
            temp = p17;
            p17 = p14;
            p14 = temp;
        }
        else if (destination == 24){
            temp = p17;
            p17 = p24;
            p24 = temp;
        }
        break;
    case 18:
        if(destination == 7){
            temp = p18;
            p18 = p7;
            p7 = temp;
        }
        else if (destination == 9){
            temp = p18;
            p18 = p9;
            p9 = temp;
        }
        else if (destination == 11){
            temp = p18;
            p18 = p11;
            p11 = temp;
        }
        else if (destination == 15){
            temp = p18;
            p18 = p15;
            p15 = temp;
        }
        else if (destination == 21){
            temp = p18;
            p18 = p21;
            p21 = temp;
        }
        else if (destination == 25){
            temp = p18;
            p18 = p25;
            p25 = temp;
        }
        break;
    case 19:
        if(destination == 8){
            temp = p19;
            p19 = p8;
            p8 = temp;
        }
        else if (destination == 10){
            temp = p19;
            p19 = p10;
            p10 = temp;
        }
        else if (destination == 12){
            temp = p19;
            p19 = p12;
            p12 = temp;
        }
        else if (destination == 22){
            temp = p19;
            p19 = p22;
            p22 = temp;
        }
        break;
    case 20:
        if(destination == 9){
            temp = p20;
            p20 = p9;
            p9 = temp;
        }
        else if (destination == 13){
            temp = p20;
            p20 = p13;
            p13 = temp;
        }
        else if (destination == 23){
            temp = p20;
            p20 = p23;
            p23 = temp;
        }
        break;
    case 21:
        if(destination == 12){
            temp = p21;
            p21 = p12;
            p12 = temp;
        }
        else if (destination == 18){
            temp = p21;
            p21 = p18;
            p18 = temp;
        }
    case 22:
        if(destination == 11){
            temp = p22;
            p22 = p11;
            p11 = temp;
        }
        else if (destination == 13){
            temp = p22;
            p22 = p13;
            p13 = temp;
        }
        else if (destination == 19){
            temp = p22;
            p22 = p19;
            p19 = temp;
        }
        break;
    case 23:
        if(destination == 12){
            temp = p23;
            p23 = p12;
            p12 = temp;
        }
        else if (destination == 14){
            temp = p23;
            p23 = p14;
            p14 = temp;
        }
        else if (destination == 16){
            temp = p23;
            p23 = p16;
            p16 = temp;
        }
        else if (destination == 20){
            temp = p23;
            p23 = p20;
            p20 = temp;
        }
        break;
    case 24:
        if(destination == 13){
            temp = p24;
            p24 = p13;
            p13 = temp;
        }
        else if (destination == 15){
            temp = p24;
            p24 = p15;
            p15 = temp;
        }
        else if (destination == 17){
            temp = p24;
            p24 = p17;
            p17 = temp;
        }
        break;
    case 25:
        if(destination == 14){
            temp = p25;
            p25 = p14;
            p14 = temp;
        }
        else if (destination == 18){
            temp = p25;
            p25 = p18;
            p18 = temp;
        }
        break;
    }
}
// ----------------------------------------------------------------------
//Function to check if the move is an L shape since a knight can only move in an L shape
bool CheckLShape(int destination, int position){
  if (position == 1){ 
    if(destination == 8 || destination == 12){
      return true;
    }
  }
  if (position == 2){
    if(destination == 9 || destination == 11|| destination == 13){
      return true;
    }
  }
  if (position == 3){
    if(destination == 6 || destination == 10|| destination == 12 || destination == 14){
      return true;
    }
  }
  if (position == 4){
    if(destination == 7 || destination == 13|| destination == 15){
      return true;
    }
  }
  if (position == 5){
    if(destination == 8 || destination == 14){
      return true;
    }
  }
    if (position == 6){
    if(destination == 3 || destination == 13|| destination == 17){
      return true;
    }
  }
  if (position == 7){
    if(destination == 4 || destination == 14|| destination == 16 || destination == 18){
      return true;
    }
  }
  if (position == 8){
    if(destination == 1 || destination == 5|| destination == 11 || destination == 15 || destination == 17 || destination == 19){
      return true;
    }
  }
  if (position == 9){
    if(destination == 2 || destination == 12|| destination == 18 || destination == 20){
      return true;
    }
  }
  if (position == 10){
    if(destination == 3 || destination == 13|| destination == 19){
      return true;
    }
  }
  if (position == 11){
    if(destination == 2 || destination == 8|| destination == 18 || destination == 22){
      return true;
    }
  }
  if (position == 12){
    if(destination == 1 || destination == 3 || destination == 9 || destination == 19 || destination == 21 || destination == 23){
      return true;
    }
  }
  if (position == 13){
    if(destination == 2 || destination == 4|| destination == 6 || destination == 10 || destination == 16 || destination == 20|| destination == 22 || destination == 24){
      return true;
    }
  }
  if (position == 14){
    if(destination == 3 || destination == 5 || destination == 7 || destination == 17 || destination == 23 || destination == 25){
      return true;
    }
  }
  if (position == 15){
    if(destination == 4 || destination == 8 || destination == 18 || destination == 24){
      return true;
    }
  }
  if (position == 16){
    if(destination == 7 || destination == 13 || destination == 23 ){
      return true;
    }
  }
  if (position == 17){
    if(destination == 6 || destination == 8 || destination == 14 || destination == 24){
      return true;
    }
  }
  if (position == 18){
    if(destination == 7 || destination == 9 || destination == 11 || destination == 15 || destination == 21 || destination == 25){
      return true;
    }
  }
  if (position == 19){
    if(destination == 8 || destination == 10 || destination == 12 || destination == 22){
      return true;
    }
  }
  if (position == 20){
    if(destination == 9 || destination == 13 || destination == 23){
      return true;
    }
  }
  if (position == 21){
    if(destination == 12 || destination == 18){
      return true;
    }
  }
  if (position == 22){
    if(destination == 11 || destination == 13 || destination == 19){
      return true;
    }
  }
  if (position == 23){
    if(destination == 12 || destination == 14 || destination == 16 || destination == 20){
      return true;
    }
  }
  if (position == 24){
    if(destination == 13 || destination == 15 || destination == 17){
      return true;
    }
  }
    if (position == 25){
    if(destination == 14 || destination == 18){
      return true;
    }
  }
  return false;
}
// ----------------------------------------------------------------------
//Function to make the integer number into a string p1...p25
string DestinationStr (int n){
  switch (n){
    case 1:
        return p1;
    case 2:
        return p2;
    case 3:
        return p3;
    case 4:
        return p4;
    case 5:
        return p5;
    case 6:
        return p6;
    case 7:
        return p7;
    case 8:
        return p8;
    case 9:
        return p9;
    case 10:
        return p10;
    case 11:
        return p11;
    case 12:
        return p12;
    case 13:
        return p13;
    case 14:
        return p14;
    case 15:
        return p15;
    case 16:
        return p16;
    case 17:
        return p17;
    case 18:
        return p18;
    case 19:
        return p19;
    case 20:
        return p20;
    case 21:
        return p21;
    case 22:
        return p22;
    case 23:
        return p23;
    case 24:
        return p24;
    case 25:
        return p25;
  }
  return " ";
}
// ----------------------------------------------------------------------
// Main() function of the program, containing the loop that controls
// game play
int main() {
  int currentScore = 500;
  int pos1;
  int pos2;
  char menuOption;
  int moveNumber = 1;
    // Set board values to the default starting position
   // ...
  displayWelcomeMessage();
  Board();
  displayBoard();
  cout << "Current score: " << currentScore;

   // Loop that controls game play
while((p5 != WhiteKnight) && currentScore >= 0) {
        cout << endl << moveNumber << ". "
        << "Enter one of the following: \n"
        << "  - M to move a knight from one position to another, \n"
        << "  - R to reset the board back to the beginning, or \n"
        << "  - X to exit the game. \n"
        << "Your choice -> ";
        cin >> menuOption;
        menuOption = toupper(menuOption); // convert user input to uppercase
        
        // If the user entered 'X' to exit,
        // break out of this loop that controls game play
        // ...
      if (menuOption == 'X'){
          cout << endl << "Exiting...";
      break;
      }
      // If the user entered 'R' to reset,
      // reset the board back to the beginning
      // ...
      if (menuOption == 'R') {
          cout << endl;
          cout << "  *** Restarting" <<endl;
          currentScore = 500;
          moveNumber = 1;
          Board();
          displayBoard(); 
          cout << "Current score: " << currentScore << endl; 
      }
      
      // If the user entered 'M' to move a knight,
      // ask for the position of the knight to be moved
  // //
      if (menuOption == 'M') {
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): " ;
        cin >> pos1 >> pos2;

        cout << "You have chosen to move a knight from position " << pos1 << " to position " << pos2 << "." << endl;

      // 1 // Check that FROM position is valid, i.e. within 1-25
        if (pos1 < 1 || pos1 > 25){
          cout << "The source position should be a valid position on the board(1-25). Try again." <<endl;
          currentScore -= 10;
          cout << "Current score: " << currentScore <<endl;
          if (currentScore <= 0){
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
          }
          continue;
        }

      // 2  // Check that TO position is valid, i.e. within 1-25
        if (pos2 < 1 || pos2 > 25){
          cout << "The destination position should be a valid position on the board (1-25). Try again. " <<endl;
          currentScore -= 10;
          cout << "Current score: " << currentScore <<endl;
          if (currentScore <= 0){
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
          }
          continue;
        }

      // 3 // Check that the source position has a knight
        if (DestinationStr(pos1) == BlankPosition){
          cout << "The source position should have a knight. Try again." << endl;
          currentScore -= 10;
          cout << "Current score: " << currentScore <<endl;
          if (currentScore <= 0){
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
          }
          continue;
        }

      // 4 // Check that the destination position is empty
        if (DestinationStr(pos2) == BlackKnight || DestinationStr(pos2) == WhiteKnight) {
          cout << "The destination position should be empty. Try again." << endl;
          currentScore -= 10;
          cout << "Current score: " << currentScore <<endl;
          if (currentScore <= 0){
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
          }
          continue;
        }
      // 5 // Check that the move is valid - knights can only move in an L-shape
        if (CheckLShape(pos2, pos1) == false){
          cout << "Invalid move. Knights can only move in an L-shape. Try again." << endl;
          currentScore -= 10;
          cout << "Current score: " << currentScore <<endl;
          if (currentScore <= 0){
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
          }
          continue;
        } 
        //Do the moving or the swapping of the knights
        MoveKnight(pos1, pos2);
        currentScore-=5;
        moveNumber++;
        if (p5 != WhiteKnight){
          displayBoard();
          cout << "Current score: "<< currentScore << endl;
        }
      }

   // Check if there are still moves left
   if (currentScore <= 0){
      cout << "Current score: " << currentScore << endl;
      cout << endl;
      cout << "You have run out of moves. Try to do better next time!" << endl;
      break;
   }
   
        //Check if the player win
   if (p5 == WhiteKnight){
      displayBoard();
      cout << endl;
      cout << "Congratulations, you did it!" << endl;
         break;
      }
   } // end loop for game play
  cout << "Thank you for playing!" << endl;
  return 0;
}