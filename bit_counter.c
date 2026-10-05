#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void){
    uint32_t num;
    uint32_t temp;
    int count = 0;
    int check;

    printf("Enter an unsigned 32-bit integer: ");
    check = scanf("%" SCNu32, &num);

    if (check != 1){
        printf("Error: Invalid input.\n");
        return 1;
    }

    temp = num;

    while (temp != 0){
        temp &= (temp - 1);
        count++;
    }

    printf("\nSteve Ortiz\n");
    printf("Number entered: %" PRIu32 "\n", num);
    printf("Number of bits set to 1: %d\n", count);

    return 0;
}
    