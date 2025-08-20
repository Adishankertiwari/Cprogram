#include <stdio.h>

int main(){
// Variables and data types
    // int data type
    int age = 25;
    float gpa = 9.5;
    printf("I am %d years old.\n", age);
    printf("My 1st semester gpa is %.3f\n",gpa);
    
    // float
    float pi = 3.141;
    printf("The value of pi upto 3 decimal places is %.3f\n", pi);

    //Double 
    double Pi = 3.141592653589793;
    printf("The value of pi upto 15 digits is %.13lf\n", Pi);
    
    // char
    char grade = 'A';
    printf("My grade is %C\n", grade);

    //string
    char name[]= "Adi Shanker Tiwari";
    printf("Hello, I am %s\n", name);

    return 0;
}