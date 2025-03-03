#include<stdio.h>
#include<stdlib.h>

int main() {   // (1) Syntax Error: Misspelled 'main'
    int num = 10;  // (2) Lexical Error: Variable name cannot start with a number
    int x = 5, y = 0;
    float z = x / 2.0;  // (3) Semantic Error: Integer division instead of floating-point

    if (x == 10) {  // (4) Logical Error: Assignment '=' instead of comparison '=='
        printf("x is 10\n");
    }

    int result = x / 2;  // (5) Runtime Error: Division by zero
    printf("Result: %d", result);

    return 0;
}


    //Syntax Error
    //print("Hello World");

    //Logical Error
    /*
    int a = 5, b = 0;
    int res = a/b;
    printf("result is : %d", res);
    return 0;
    */

    //semantic error
    //int x = "hello"; Assigning a string to an integer variable



