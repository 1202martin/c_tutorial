#include <stdio.h>
#include <string.h>

int main(){
    char name[25];      //Array size in C cannot be altered once the program runs; can cause a bufferoverflow
    int age;

    //prompt user for their age
    printf("How old are you?\n");
    scanf("%d", &age);  //& is the "address of" operator that defines the address of the variable that follows
    getchar();          // Apparently, trying to use scanf in combination with fgets is not a smart move; input saved using scanf makes the following fgets consume the nextline character, which then recognizes that as the input from user before the user even gets a chance.

    printf("What's your name?\n");
    //scanf("%s", name);  //scanf reads input on the terminal up to the closest white space. To make an input of more that one word (input containing whitespace),
                        //use fgets function.
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);
    
    return 0;
}