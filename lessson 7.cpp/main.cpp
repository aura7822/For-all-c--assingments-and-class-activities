#include<iostream>
using namespace std;

struct student{
    string name;
    int idno;
    string email;
    int DOB;
    float GPA;

};

void display(const student s1){
   cout<<"Student 1 : \n"<<"\n";
   cout<<"Name : "<<s1.name<<endl;
   cout<<"Id number : "<<s1.idno<<endl;
   cout<<"Email address : "<<s1.email<<endl;
   cout<<"Date of birth : "<<s1.DOB<<endl;
   cout<<"GPA : "<<s1.GPA<<endl;

   cout<<"\n";

}
int main(){
student s1 = {"James", 123, "james@gmail.com", 2000, 4.6};
 student s2 = {"Aura", 7822, "joshuaura782@gmail.com", 7000, 5.7};
 student s3 = {"joshua", 7772, "joshua7722@gmail.com", 4560, 9.3};

 display(s1);
 display(s2);
 display(s3);


   cout<<"Addresses :\n "<<endl;
   cout<<"Name -> "<<&s1.name<<endl;
   cout<<"Id number -> "<<&s1.idno<<endl;
   cout<<"Email address -> "<<&s1.email<<endl;
   cout<<"Date of birth -> "<<&s1.DOB<<endl;
   cout<<"GPA -> "<<&s1.GPA<<endl;

   cout<<"\n"<<"\n";

    cout<<"MEMORY : \n"<<endl;
    cout<<"String size : "<<sizeof(string)<<endl;
    cout<<"Int size : "<<sizeof(int)<<endl;
    cout<<"Float size : "<<sizeof(float)<<endl;
    cout<<"Struct size : "<<sizeof(student)<<endl;

    cout<<endl;



   int a = 10;
   int* ptr = &a;
   cout<<"Value of a : "<<a<<endl;
   cout<<"Address : "<<&a<<endl;
   cout<<"ptr : "<<ptr<<endl;
   cout<<"DErefernce of ptr : "<<*ptr<<endl;
   cout<<endl;

   return 0;
};
