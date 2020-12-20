#ifndef INT_BYTE_H
#define INT_BYTE_H

#include <stdio.h>

// Для хранения целочисленных числе использует 2 байта = 16 бит
// Используется unsigned, т.к. отрицательные числа представляются в обратном коде
// Т.е перед выводм битов требуется инвентировать биты (0 = 1, 1 = 0)

// unsigned int bit1 : 1 - Экономия памяти int, т.к. мы используем это для хранения числа 0 или 1

typedef struct {
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
} bitIntNumber;

union number {
    unsigned int re; // "Человеческое: Представление int
    bitIntNumber im; // Побитовое представление целочисленного int
};


void printByteCodeOnNumber(int printNumber);

#endif