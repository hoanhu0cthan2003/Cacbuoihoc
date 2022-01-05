#include <iostream>  
using namespace std;
class Student {
public:
    int id;  
    int age;
    string name;     
    string address;
    void print();
    cout << "Name: " << name << " ID: " << id << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl; 

};
int main(void) {
    Student s1{ "Ngoc Tu", 01, 18, "Son La"};
    Student s2;   
    st1.print();
    st2.print();
   
    return 0;
}