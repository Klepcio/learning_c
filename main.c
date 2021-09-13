#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int x = 15;                         // %i
    unsigned short int number = 23;     // %u

    unsigned short int * my_pointer;

    my_pointer = &number;               // & = " the address of "

    printf("The variable 'number' contains the output: %u \n", number);
    printf("The address of variable 'number' is %u' \n", my_pointer);
    printf("The output of 'my_pointer' is  %u \n", *my_pointer);
    // address : output stored in memory 
    // variable is both the address and returns the ouput 
    // pointer stores the address of variable/data & can return it ----- used for large variables 
    // pointer points to address " 6 422 294 "
    // in binary                 " 0000 0000 0110 0001 1111 1111 0001 0110 " ----> 4 bit in this example

    char character = 'z';
    printf("Character selected: %c \n", character);

    char * char_pointer = &character;
    printf("This pointer's address holds the character: %c \n", *char_pointer);

    char words[6] = "Hello";    // need to assign number of characters + null -- can be larger e.g. words[100] = "hello";

    char *statement = "World!";
    printf("This program says: %s %s", words, statement);

    // char pointer seems to not need * to access its outout -- only the correct formatting ( at least in printf function )


    return 0;
}


