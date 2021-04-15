#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLUSH fflush(stdin)

void beginner( void );

void guess( void );
void boom( void );
void print_final_minefield( void );
void win( void );
void play_again( void );
void game_over( void );

int x, y;
int M, N;
float diff;
int total_mines = 0;
int mines = 0;
int minefield[30][30];                                      //This 2-D array contains all of the mines, numbers and blank spaces
int blank_minefield[30][30];                                //This contains the minefield full of '|-|' characters
int final_minefield[30][30];

int main()
{
    printf("\t\tWelcome to Minesweeper\n");
    beginner();
    return 0;
}
void beginner( void )                                       //Gives the minefield the 'beginner' grid and mines
{
    M = 9;
    N = 9;
    total_mines = 10;
    minefield_generator();
    guess();
}





void guess( void )
{
    int q = 0, i=0, j=0, match=0;
    print_minefield();
    while( j < N )                                          // While loop for testing whether or not the user has cleared the minefield
    {
        while( i < M )
        {
            if(minefield[i][j] == blank_minefield[i][j])
            {
                match++;
            }
            i++;
        }
        i = 0;
        j++;
    }
    if( match == (( M * N ) - total_mines))                 // If the user has cleared the minefield, the win() function is run
    {
        win();
    }
    printf("\nEnter the x value, then a space, then the y value:");
    scanf("%d %d", &x, &y);                                 // Reading in the co-ordinates for the guess
    FLUSH;
    if( (x >= M) || (x < 0) || (y < 0) || (y >= N) )
    {
        printf("\nPlease enter a value inside the grid\n");
        guess();
    }
    if( minefield[x][y] == '*' )                            // Runs the boom() function if the user selects a mine
    {
        boom();
    }
    if( blank_minefield[x][y] != '-' )
    {
        printf("\nPlease enter a value that has not already been entered\n");
        guess();
    }

    else                                                // Checks if the adjacent spaces are blank, then changes the values in the blank_minefield array. Because they are changed, they will now print out in the print_minefield function
    {
        blank_minefield[x][y] = minefield[x][y];
        if( minefield[x][y] == 0 )
        {
            if( minefield[x-1][y-1] == 0 )
            {
                blank_minefield[x-1][y] = minefield[x-1][y];
            }
            if( minefield[x-1][y] == 0 )
            {
                blank_minefield[x-1][y] = minefield[x-1][y];
            }
            if( minefield[x][y-1] == 0 )
            {
                blank_minefield[x][y-1] = minefield[x][y-1];
            }
            if( minefield[x-1][y+1] == 0 )
            {
                blank_minefield[x-1][y+1] = minefield[x-1][y+1];
            }
            if( minefield[x+1][y-1] == 0 )
            {
                blank_minefield[x+1][y-1] = minefield[x+1][y-1];
            }
            if( minefield[x+1][y] == 0 )
            {
                blank_minefield[x+1][y] = minefield[x+1][y];
            }
            if( minefield[x][y+1] == 0 )
            {
                blank_minefield[x][y+1] = minefield[x][y+1];
            }
            if( minefield[x+1][y+1] == 0 )
            {
                blank_minefield[x+1][y+1] = minefield[x+1][y+1];
            }
        }
        guess();
    }
}

void boom( void )                                       // Runs the print_final_minefield function, then the play_again function                    
{
    print_final_minefield();
    printf("\n\t\tYou hit a mine at %d,%d\n\t\tYOU LOSE!!!!", x, y);
    play_again();
}

void print_final_minefield( void )                      // Prints the minefield, showing where all of the mines are placed
{
    int i = 0, j = 0, z = 0;
    while( z < M )
    {
        if( z == 0 )
        {
            printf("\t");
        }
        printf("|%d|\t", z);
        z++;
    }
    printf("\n\n");

    while( j < N )
    {   
        printf("|%d|\t", j);
        while( i < M)
        {
            printf("|%c|\t", final_minefield[i][j]);
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
}

void win( void )                                        // Runs the play_again function
{
    printf("\n\n\n\t\t\tYOU WIN!!!!!\n\n\n");
    play_again();
}

void play_again( void )                                 // Gives the user the option to play again
{
    char option[2];
    printf("\n\t\tWould you like to play again(Y/N)?:");
    scanf("%c", &option[0]);
    FLUSH;
    if((option[0] == 'Y') || (option[0] == 'y'))        // Restarts the program from after the welcome message
    {
        beginner();
    }
    else if( (option[0] == 'N') || (option[0] == 'n'))
    {
        game_over();
    }
    else
    {
        printf("Please enter either Y or N");
        play_again();
    }
}

void game_over( void )                                  // Ends the program
{
    printf("\n\n\t\tGame Over");
    exit(1);
}
