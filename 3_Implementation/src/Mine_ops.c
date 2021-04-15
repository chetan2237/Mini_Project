#include <Mine_ops.h>
void minefield_generator( void )                            //Function that generates the minefield
{
    int i = 0, j = 0;

    srand( time( NULL ) );                                  //Starts the random no. generator

    while( j < N )                                          //Nested loop for making the blank minefield and final minefield
    {
        while( i < M)
        {
            minefield[i][j] = '-';
            blank_minefield[i][j] = minefield[i][j];        
            final_minefield[i][j] = minefield[i][j];        
            i++;
        }
        i = 0;
        j++;
    }
    mines = 0;
    while( mines < total_mines )                            //Randomly generates the mines into the minefield
    {
        i = rand()%(M);
        j = rand()%(N);
        if( minefield[i][j] != '*')                         //If statement that checks if there is a mine already there and doesn't place a mine if there is
        {
            minefield[i][j] = '*';
            final_minefield[i][j] = minefield[i][j];
            mines++;
        }
    }
    i = 0;
    j = 0;

    while( j < N )                                          //While loop that generates the numbers for any adjacent mines
    {
        while( i < M)
        {
            if( minefield[i][j] != '*')
            {
                minefield[i][j] = 0;
            }   
            if((minefield[i-1][j-1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i-1][j] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i][j-1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i-1][j+1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j-1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i][j+1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j+1] == '*') && (minefield[i][j] != '*'))
            {
                minefield[i][j]++;
            }
            i++;
        }
        i = 0;
        j++;
    }
    i = 0;
    j = 0;
}
void print_minefield(void)                                  // This function prints the minefield
{
    int i = 0, j = 0, z = 0;
    while( z < M )                                          // This while loop prints out the line of co-ordinates along the x axis of the minefield
    {
        if( z == 0 )
        {
            printf("\t");
        }
        printf("|%d|\t", z);
        z++;
    }
    printf("\n\n");

    while( j < N )                                          // Loop that prints out each character in the minefield                         
    {   
        printf("|%d|\t", j);
        while( i < M)
        {
            if( blank_minefield[i][j] == '-')
            {
                printf("|%c|\t", blank_minefield[i][j]);

            }
            else if( minefield[i][j] == 0 )                 // This changes any spaces with values of zero to the character 'B'
            {
                blank_minefield[i][j] = 'B';                
                printf("|%c|\t", blank_minefield[i][j]);
            }
            else
            {
                printf("|%d|\t", blank_minefield[i][j]);

            }
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
}