#include "core.h"

DynamicString* init_string() {
    DynamicString* result = (DynamicString*)malloc(sizeof(DynamicString));
    result->currentSize = 16;
    result->currentlyUsed = 0;
    result->string = (char*)malloc(result->currentSize * sizeof(char));
    memset(result->string, '\0', result->currentSize * sizeof(char));

    return result;
}

void add_string(DynamicString* string, char symbol) {
    if (string->currentlyUsed > string->currentSize) {
        string->currentSize += 16;
        string->string =
                (char*)realloc(string->string, string->currentSize * sizeof(char));
        memset(&(string->string[string->currentlyUsed]), '\0',
               sizeof(char) * (string->currentSize - string->currentlyUsed));
    }

    string->string[string->currentlyUsed] = symbol;
    ++string->currentlyUsed;
}

void free_string(DynamicString* string) {
    free(string->string);
    free(string);
}

void printDynamicString(DynamicString* string) {
    printf("%s", string->string);
}

void setString(DynamicString* string, char* newString) {
    string->currentSize += sizeof(newString);
    free(string->string);
    string->string = (char*)malloc(string->currentSize * sizeof(char));
    strcpy(string->string, newString);
}

void readToString(DynamicString* string) {
    char newSymbol;
    scanf(" %c", &newSymbol);

    while (newSymbol != '\n') {
        add_string(string, newSymbol);
        scanf("%c", &newSymbol);
    }
}

int getStringLen(DynamicString *string) {
    return strlen(string->string);
}