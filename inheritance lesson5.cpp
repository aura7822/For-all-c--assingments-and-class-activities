// LESSON 5 ICT 1
/* ABOUT : A C++ PROGRAM TO DEMONSTRATE INHERITANCE AND ENCAPSULATION :
   AUTHOR : AURA
   REG NO : bse-05-0180/2024
   GROUP : GROUP III
   GITHUB USERNAME : aura7822
   DATE : 25th FEBRUARY
   YEAR : 2025
*/
#include<iostream>
#include<string>
using namespace std;

class Person{
protected :
    string name;

public :
     void setName(string n) { name = n; }
    string getName() { return name; }

};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string n, int id, int books) {
        name = n;
        memberID = id;
        booksBorrowed = books;
    }
    int getMemberID() { return memberID; }
    int getBooksBorrowed() { return booksBorrowed; }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() { return membershipFee; }
};

int main() {
    PremiumMember pm("John Doe", 101, 5, 50.0);

    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}

