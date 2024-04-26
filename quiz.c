#include<stdio.h>

int main() {
    printf("Welcome to the Quiz!\n");
    printf("You will attempt 5 questions.\n");

int correctanswer = 0;
int wronganswer = 0;

printf("___________________________________________________\n");
printf("Question 1\n");
printf("___________________________________________________\n");

    char Question1[200] = "What does the printf() function in C do?\n"
                         "a) Reads input from the user\n"
                         "b) Prints output to the console\n"
                         "c) Performs mathematical calculations\n"
                         "d) Declares a variable\n";
    printf("%s", Question1);
 printf("Select one option :-");

    
    char answer1;

    scanf(" %c", &answer1);

    if (answer1 == 'b') {
        correctanswer++;
    } else {
        wronganswer++;
    }

printf("___________________________________________________\n");
printf("Question 2\n");
printf("___________________________________________________\n");

    char Question2[200] = "Which keyword is used to define a constant in C?\n"
                          "a) const\n"
                          "b) constant\n"
                          "c) define\n"
                          "d) var\n";
    printf("%s", Question2);
   printf("Select one option :-");

    
    char answer2;


    scanf(" %c", &answer2);

    if (answer2 == 'a') {
        correctanswer++;
    } else {
        wronganswer++;
    }

printf("___________________________________________________\n");
printf("Question 3\n");
printf("___________________________________________________\n");

char Question3[200] = "What does the sizeof operator in C return?\n"
"a) The size of a variable in bytes\n"
"b) The value of a variable\n"
"c) The data type of a variable\n"
"d) The address of a variable\n";

printf("%s",Question3);
printf("Select one option :-");
char answer3;
scanf(" %c" , &answer3);

  if (answer3 == 'a') {
        correctanswer++;
    } else {
        wronganswer++;
    }

    printf("___________________________________________________\n");
printf("Question 4\n");
printf("___________________________________________________\n");

char Question4[200] = "What does the strcmp() function in C do?\n"
"a) Copies a string\n"
"b) Converts a string to uppercase\n"
"c) Compares two strings\n"
"d) Finds the length of a string\n";


printf("%s",Question4);
printf("Select one option :-");

char answer4;
scanf(" %c" , &answer4);
 
  if (answer4 == 'c') {
        correctanswer++;
    } else {
        wronganswer++;
    }
printf("___________________________________________________\n");
printf("Question 5\n");
printf("___________________________________________________\n");

char Question5[200] = "What is the correct way to dynamically allocate memory for an integer in C?\n"
"a) malloc(sizeof(int));\n"
"b) malloc(int);\n"
"c) allocate(int);\n"
"d) new int;\n" ;
 
printf("%s",Question5);
   printf("Select one option :-");


char answer5;
scanf(" %c" , &answer5);
  
  if (answer5 == 'a') {
        correctanswer++;
    } else {
        wronganswer++;
    }
  printf("You Scored %d\n", correctanswer);
    printf("You got %d answer wrong.\n", wronganswer);

    

    return 0;
}









