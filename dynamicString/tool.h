#ifndef DYNAMIC_STRING_TOOL_H
#define DYNAMIC_STRING_TOOL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "core.h"

DynamicString *createNewCharInChar(const DynamicString *word, const int totalElements, ...);

#endif