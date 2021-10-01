#include <stdio.h>
#include "square.h"


int notSquare(void){
    printf("This is not a magic square.\n");
}

int checkNums(int MS[][3]){
    int check = 0;
    Increment: ;
    check++;
    if (check == 10){
        checkMath(MS);
    }
    for(int currRow = 0; currRow < 3; currRow++){
        for(int currColumn = 0; currColumn < 3; currColumn++){
            if (MS[currRow][currColumn] == check){
                goto Increment;
            }
        }
    }
    notSquare;
}
int checkMath(int MS[][3]){
    int row1 = MS[0][0] + MS[0][1]+ MS[0][2];
    int row2 = MS[1][0] + MS[1][1]+ MS[1][2];
    int row3 = MS[2][0] + MS[2][1]+ MS[2][2];
    int col1 = MS[0][0] + MS[1][0]+ MS[2][0];
    int col2 = MS[0][1] + MS[1][1]+ MS[2][1];
    int col3 = MS[0][2] + MS[1][2]+ MS[2][2];
    int diag1 = MS[0][0] + MS[1][1]+ MS[2][2];
    int diag2 = MS[2][0] + MS[1][1]+ MS[0][2];

    if (row1 == row2 && row1 == row3 && row1 == col1 && row1 == col2 && row1 == col3 && row1 == diag1 && row1 == diag2){
        printf("Your array is a magic square\n");
    }
    else{
        notSquare();
    }
}


