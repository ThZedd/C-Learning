#include<stdio.h> // this a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.
#include<stdbool.h> // this is the bool library
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

     //Booleans 
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d", isProgrammingFun);   // Returns 1 (true)
    printf("%d", isFishTasty);        // Returns 0 (false)

    printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
    
// If

    int time = 22;
if (time < 10) {
  printf("Good morning.\n");
} else if (time < 20) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}
// Outputs "Good evening."

//Short Hand If...Else (Ternary Operator)
//There is also a short-hand if else, 
//which is known as the ternary operator because it consists of three operands. 
//It can be used to replace multiple lines of code with a single line. 
//It is often used to replace simple if else statements:

int time1 = 20;
if (time1 < 18) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}

int time2 = 20;
(time2 < 18) ? printf("Good day.\n") : printf("Good evening.\n");

// Switch Statement
//Instead of writing many if..else statements, you can use the switch statement.
//The switch statement selects one of many code blocks to be executed:

int day = 4;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
  default:
    printf("It doesn´t exist\n");
}

//The break Keyword
//When C reaches a break keyword, it breaks out of the switch block.
//This will stop the execution of more code and case testing inside the block.
//When a match is found, and the job is done, it's time for a break. 
//There is no need for more testing.

//The default Keyword
//The default keyword specifies some code to run if there is no case match:


//While Loop
//The while loop loops through a block of code as long as a specified condition is true:

int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}

//The Do/While Loop
//The do/while loop is a variant of the while loop. 
//This loop will execute the code block once, 
//before checking if the condition is true, 
//then it will repeat the loop as long as the condition is true.

int i1 = 0;

do {
  printf("%d\n", i1);
  i1++;
}
while (i1 < 5);

//For Loop
//When you know exactly how many times you want to loop through a block of code,
//use the for loop instead of a while loop:
/*for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
*/

/*
Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.

The example below will print the numbers 0 to 4:
*/

int i2;

for (i2 = 0; i2 < 5; i2++) {
  printf("%d\n", i2);
}

/*
Nested Loops
It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop":
*/
int i3, j;

// Outer loop
for (i3 = 1; i3 <= 2; ++i3) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}


}
