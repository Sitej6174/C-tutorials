//Input and output

/*
printf for output
scanf for input

//Format specifiers
 Special tokens that begin with a % symbol, followed by a character that specifies the 
 data type and optional modifiers (width, precision, flags). 
 They control how data is displayed or interpreted.

//Variables and data types 
Common types: int, float, char.
int age = 22;
float pi = 3.14f;
char grade = 'A'; 

Constants and keywords
Constants:
Constants are fixed values that do not change during program 
execution, like numbers, characters, or strings written directly in code, or 
identifiers defined with const or #define. For example: 10, 3.14, 'A', "Hello", 
const int MAX = 100;, and #define PI 3.14159.​; C has 32 reserved keywords.
Keywords:
Keywords are predefined or reserved words that have special meanings to the compiler
Keywords have special meaning for the compiler and cannot be used as names for variables, 
functions, or types.​ Trying to name a variable return or if will cause a compile error.
32 Reserved keywords--->
auto break case char const continue default do
double else enum extern float for goto if 
int long register return short signed sizeof static 
struct switch typedef union unsigned void volatile while​ 
*/

#include <stdio.h>
int main() 
{
    int age = 25;
    float price = 19.99;
    double pi = 3.14159265;
    char currency = '$';
    char name[] = "Sitej";

    printf("%d\n", age);                  // Integer
    printf("%.2f\n", price);              // Float with 2 decimal places
    printf("%.8lf\n", pi);                // Double with 8 decimal places
    printf("%c\n", currency);             // Character
    printf("%s\n", name);                 // String

    return 0;
}





​


