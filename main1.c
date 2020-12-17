#include <stdio.h>

struct bitNumber {
    unsigned int bit1 : 1;
    unsigned int bit2 : 1;
    unsigned int bit3 : 1;
    unsigned int bit4 : 1;
    unsigned int bit5 : 1;
    unsigned int bit6 : 1;
    unsigned int bit7 : 1;
    unsigned int bit8 : 1;
    unsigned int bit9 : 1;
    unsigned int bit10 : 1;
    unsigned int bit11 : 1;
    unsigned int bit12 : 1;
    unsigned int bit13 : 1;
    unsigned int bit14 : 1;
    unsigned int bit15 : 1;
    unsigned int bit16 : 1;
};

union number {
    unsigned int originalNum;
    struct bitNumber bitNum;
};

int main(int argc, char const* argv[]) {
    union number numbers;

    printf("Enter int: ");
    scanf("%i", &numbers.originalNum);

    printf("Result:\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n",
           numbers.bitNum.bit1,
           numbers.bitNum.bit2,
           numbers.bitNum.bit3,
           numbers.bitNum.bit4,
           numbers.bitNum.bit5,
           numbers.bitNum.bit6,
           numbers.bitNum.bit7,
           numbers.bitNum.bit8,
           numbers.bitNum.bit9,
           numbers.bitNum.bit10,
           numbers.bitNum.bit11,
           numbers.bitNum.bit12,
           numbers.bitNum.bit13,
           numbers.bitNum.bit14,
           numbers.bitNum.bit15,
           numbers.bitNum.bit16);

    return 0;
}
