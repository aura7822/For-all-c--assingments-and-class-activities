//A PROGRAM TO COMPUTE AN EMPLOYEE'S SALARY
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

float salary;
int year;
double bonus;
int age;
int income;

int main(){
    cout<<"Input your salary : \n";
    cin>>salary;
    if(salary <= 0){
        cout<<"Error! enter a valid amount"<<endl;
    }
    cout<<"Enter year of service : \n";
    cin>>year;
    if(year > 10){
            bonus = salary * 12/100;
        cout<<"Your net bonus is 12%"<<endl;
    }else if(year>=6 && year<=10){
        bonus = salary * 10/100;
        cout<<"Your net bonus is 10%"<<endl;
    }else if(year<6){
        bonus = salary * 8/100;
        cout<<"Your net bonus is 8% \n";
    }else{
        cout<<"Error! please try again ! \n";
    }

    cout<<"Your bonus is : "<<bonus<<endl;

    cout<<"Loan application section : "<<endl;

cout<<"\n   \n";

cout<<"Enter your age : " ;
cin>> age;
if(age <= 20){
    cout<<"Unfortunately we are not able to offer you a loan at this time"<<endl;
}else{
    cout<<"Congratulations! you qualify for the loan \n ";
}
cout<<"Enter your income : " ;
cin>> income;
if(income <= 20000){
    cout<<"Unfortunately we are not able to offer you a loan at this time"<<endl;
}else{
    cout<<"Congratulations! you qualify for the loan \n ";
}
    return 0;
}
