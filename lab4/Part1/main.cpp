#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person A("FOO",183,19);
    A.showPersonInfo();
    cout << endl;

    Student B("F2",19,180,20,10);
    B.showStudenInfo();
    cout <<endl;
    
    Teacher C("AJ",34,168);
    C.setSubject("Programming");
    C.showTeacherInfo();
}