#include "tool.h"

DynamicString *createNewCharInChar(const DynamicString *word, const int totalElements, ...) {
    DynamicString *resultString = init_string();

    va_list funcElementList;
    va_start(funcElementList, totalElements);

    for (int element = 0; element < totalElements; ++element) {
        int wordIndex = va_arg(funcElementList, int);
        add_string(resultString, word->string[wordIndex]);
    }
    va_end(funcElementList);
    return resultString;
}