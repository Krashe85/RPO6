#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


char* chars(const char* string, const int amount, ...) {
    char* result = (char*)calloc((amount+1), sizeof(char));

    va_list list;
    va_start(list, amount);

    for (int element = 0; element < amount; ++i) {
        int a = va_arg(list, int);
        result[element] = string[a];
    }
    va_end(list);

    result[amount] = '\0';
    return result;
}

int main() {
    char* string = chars("byte", 7, 3, 9, 1, 2, 3, 4);
    printf("Result: %s\n", string);
    free(string);

    return 0;
}