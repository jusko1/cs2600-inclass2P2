#include <stdio.h>
#include "square.h"
int main(void){
    int mySquare[3][3] =  {{1,2,3}, {4,5,6}, {7,8,9}};
    int mySquare2[3][3] ={{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};

    int checking = checkNums(mySquare);
    int checking2 = checkNums(mySquare2);


    return 0;
}