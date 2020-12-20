#include "intByte.h"


void printByteCodeOnNumber(int printNumber) {
    union number num;
    num.re = printNumber;
//    if (num.im.bit1 == 1){
//        printf("By the sign bit, we can say that this number has a sign -");
//    } else{
//        printf("By the sign bit, we can say that this number has a sign +");
//    }
    printf("Bit 1: %u\nBit 2: %u\nBit 3: %u\nBit 4: %u\nBit 5: %u\nBit 6: %u\nBit 7: %u\nBit 8: %u\nBit 9: %u\nBit 10: %u\nBit 11: %u\nBit 12: %u\nBit 13: %u\nBit 14: %u\nBit 15: %u\nBit 16: %u\nProfit!\n",
           num.im.bit1, num.im.bit2, num.im.bit3, num.im.bit4, num.im.bit5, num.im.bit6, num.im.bit7, num.im.bit8,
           num.im.bit9, num.im.bit10, num.im.bit11, num.im.bit12, num.im.bit13, num.im.bit14, num.im.bit15,
           num.im.bit16);
}