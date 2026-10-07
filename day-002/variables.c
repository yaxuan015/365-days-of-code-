#include <stdio.h>
#include <stdbool.h>

int main() {

// variable = a reusable container for a value.
// behaves as if it were the value it contains.

//int = whole numbers (4bytes)
//float = single precision decimal number (4bytes)
//double = double precision decimal number (8bytes)
//char = single character (1byte)
//char[]= array of characters (size varies)
//bool = true or false (1 byte, requires <stbool.h>)

int age = 27;
int year = 2026;
int quantity = 67;

printf("you are %d years old\n", age);
printf("the year is %d\n", year);
printf("I have %d apps on my phone\n", quantity);

return 0;

}