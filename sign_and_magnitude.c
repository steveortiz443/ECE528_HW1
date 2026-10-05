#include <stdio.h>
#include <stdlib.h>

int main(void){

    int v;
    int absV;

    printf("//Sign and Magnitude Checker//\n");
    printf("Please enter an integer: ");
    scanf("%d", &v);

    if (v < 0){
        printf("%d is a negative integer.\n", v);
    }
    else if (v > 0)
    {
        printf("%d is a positive integer.\n", v);
    }
    else{
    printf("%d is zero.\n", v);
    }

    absV = abs(v);
    printf("The absolute value is %d. \n", absV);

    return 0;
    
}