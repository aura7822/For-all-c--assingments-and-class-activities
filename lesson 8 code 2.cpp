//A PROGRAM TO CALCULATE AN INDIVIDUAL'S Body Mass Index
/*
AUTHOR : AURA JOSHUA
GROUP : BSE GROUP 3
REG NO : bse-05-0180/2024
GITHUB USERNAME : aura7822
SESSION : LESSON 8
DATE : MONDAY, 17th MARCH
*/
#include<iostream>
using namespace std;

float weight, height;
double BMI;
int main(){
    cout<<"Enter your weight : ";
    cin>>weight;

    cout<<"\n";

    cout<<"Enter your height : ";
    cin>>height;

    BMI = weight / (height*height);

    cout<<"\n";

    cout<<"The BMI is : "<<BMI<<endl;

    if(BMI <18.5){
        cout<<"Underweight"<<endl;
    }else if(BMI >= 18.5 && BMI <= 24.9){
        cout<<"Normal weight"<<endl;
    }else if(BMI > 24.9 && BMI <30){
        cout<<"Overweight"<<endl;
    }else{
        cout<<"Obesity"<<endl;
    }

    return 0;
}
