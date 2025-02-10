// A C++ PROGRAM TO CALCULATE VOLUME OF A CYLINDER BY PROMPT
/*
Author : Aura
Reg no : BSE-05-0180/2024
GROUP ; BSE GROUP 3
SCHOOL : ZETECH UNIVERSITY
*/

#include<iostream>
using namespace std;
//Global declaration
double pi = 3.14159;
double volume;
float radius;
int height;


int main(){
cout<<"Enter your radius : ";
cin>> radius;

cout<<"enter your height : ";
cin>> height;

volume = pi*radius*radius*height;

cout<<"The volume of the cylinder is : "<<volume<<endl;
   return 0;
}

