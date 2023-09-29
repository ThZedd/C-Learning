#include<stdio.h> // this a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.

int main() { // main is a function
    printf("hello world \n");

// Variables: Variables are containers for storing data values, like numbers and characters.
    //Data types: a variable in C must be a specified data type ( like int or char, etc...), and you must use a format specifier (such as %d, %c, etc...) inside the printf() function to display it

    int numbers = 1; // this is for integers (Size: 2 or 4 bytes)
    char letter = 'D'; // we use '' for characters and "" for strings (Size: 1 bytes)
    float numbers2 = 1.2; // this is for decimal numbers (Size: 4 bytes) (Stores 6-7 decimals)
    double numbers3 = 1.998888888; // this is for decimal numbers (Size: 8 bytes) (Sotes 15 decimals)
    char string[] = "This is a string"; // this is a string

    printf("%d\n", numbers); // if we don´t use the %d, the console will detect a error and will not print
    printf("%c\n", letter); // if we don´t use the %c, the console will detect a error and will not print
    printf("%f\n", numbers2); // if we don´t use the %f, the console will detect a error and will not print
    printf("%lf\n" , numbers3); // if we don´t use the %lf, the console will detect a error and will not print
    printf("%s\n", string ); // if we don´t use the %s, the console will detect a error and will not print

    //Type Convertion: Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.
    int x = 1;
    int y = 2;
    float z = (float) 1/2; // Explicit conversion is done manually by placing the type in parentheses () in front of the value.
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.1f\n", z); // we put the .1 before the f, for us to get only one decimal if we wanted 2 decimals we put .2 before the f

    // Constants
    // If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
    //This will declare the variable as "constant", which means unchangeable and read-only:

    const int MYNUM = 15;  // myNum will always be 15
    //MYNUM = 10;  // error: assignment of read-only variable 'MYNUM'
    //Another thing about constant variables, 
    //is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:


    //Sizeof
    //The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
    printf("%lu\n", sizeof(numbers));
    printf("%lu\n", sizeof(numbers2));
    printf("%lu\n", sizeof(numbers3));
    printf("%lu\n", sizeof(letter));
}
