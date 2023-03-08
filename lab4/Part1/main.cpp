#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person A("FOO",183,19);
    A.showPersonInfo();
    cout << endl;

    Student B("Boss",19,170,76,10);
    B.showStudenInfo();
    cout <<endl;
    
    Teacher C("Aj.Pengwang",45,168);
    C.setSubject("Basic Mechanics");
    C.showTeacherInfo();
}