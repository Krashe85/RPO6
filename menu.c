#include "menu.h"
int getUserEnter(const char* userTitle) {
    int userEnter;
    printf("%s \n:::", userTitle);
    scanf("%d", &userEnter);
    return userEnter;
}

void menu_one() {
    int userNumber = getUserEnter("Please, enter number");
    printByteCodeOnNumber(userNumber);
}

void menu_two() {
    printf("Do you want to enter your word? If yes then specify 1, and 2 if you want to use the default word \"atom\".\n"
           "This function takes 2, 3, 4, 1, 2 letters from a word and creates a new one");
    int userEnter = getUserEnter("Your choice");
    DynamicString *enterString = init_string();
    if (userEnter == 1) {
        printf("Please enter a word, Russian is NOT SUPPORTED, minimum length 4 characters\n");
        readToString(enterString);
    } else{
        setString(enterString, "atom");
    }
    if (getStringLen(enterString) < 4) {
        printf("Sorry, but the line is too short :(\n");
        return;
    }
    DynamicString* newString = createNewCharInChar(enterString, 5, 1, 2, 3, 0, 1);
    printDynamicString(newString);
    free_string(newString);
}

int printAllMenu() {
    printf("\n====Welcome====\n");
    printf("1. Bitwise representation of a number\n2. Generating words from its elements\n3.Exit\n");
    return getUserEnter("Please, select menu element");
}

void buildMenuResult(int userEnter) {
    switch (userEnter) {
        case 1:
            menu_one();
            break;
        case 2:
            menu_two();
            break;
        case 3:
            printf("Bye!\n");
            exit(0);
        default:
            printf("Unknown menu element");
            break;
    }
}