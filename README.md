# Tic-Tac-Toe
Tic Tac Toe game with BGI graphics. Written in C in 2006. Complied using Borland Turbo C/C++ 3.0 compiler. Relies on the 'EGAVGA.BGI' library. 

The various functions used are described below:

1. p1():  This function is exclusively for player 1 . It inputs the position of the square to be marked from player 1 and appropriately modifies the array by changing the value of the element corresponding to that square to 1. 

2.  p2():  This function is exclusively for player 2 . It inputs the position of the square to be marked from player 2 and appropriately modifies the array by changing the value of the element corresponding to that square to 2. 

3.  xdraw(int a): this function draws an ‘X’ in the square ‘a’. It is used to show the positions on the grid where player 1 has already placed a mark.

4.  odraw(int a): This function draws an ‘O’ in the square ‘a’. It is used to show the positions on the grid where player 2 has already placed a mark.

5. sdraw(): This function draws the grid on screen and represents the current status of the game by drawing ‘X’ and ‘O’ in the respective places by using xdraw() and odraw() respectively. It is basically used to refresh the screen and display the current status of the game on screen. 

6. wincheck(): this function analyses the array and checks if any player has three marks in a row. If player1 has 3 marks in a row it returns a value ‘1’ and if player2 has 3 marks in a row then it returns a value ‘2’. If all the 9 squares have been filled and no player has 3 marks in a row then it returns a value ‘3’. In all other cases it returns a zero value. 




