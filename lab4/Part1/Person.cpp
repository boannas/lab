#include "Person.h"
#include <iostream>
using namespace std;

// ***************************-Person-***************************
Person::Person(){
    name = "";
    height = 0;
    age = 0;
}
Person::Person(string n, int h, int a){
    name = n;
    height = h;
    age = a;
}
Person::~Person(){

}
void Person::showPersonInfo(){
    cout<<"Person name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"height : "<<height<<endl;
    
}

// ***************************-Student-***************************

Student::Student():Person(){
    id = 0;
    grade = 0;
}

//Student(name , height , age , ID , grade)
Student::Student(string name, int height, int age, int id_In,int grade_In):Person(name, height, age){
    id = id_In;
    grade = grade_In;
}

Student::~Student(){}

void Student::showStudenInfo(){
    showPersonInfo();
    cout<<"id : "<<id<<endl;
    cout<<"grade : "<<grade<<endl;
}

//*******************************Teacher**************************************

Teacher::Teacher(){
    subject = "";
}

//Teacher(name , age , height)
Teacher::Teacher(string name, int age, int height):Person(name, height, age){
}

Teacher::~Teacher() {}

string Teacher::getSubject(){
    cout << "Subject : "<< subject << endl; 
    return subject;
}

void Teacher::setSubject(string sub) {
    subject = sub;
}

void Teacher::showTeacherInfo(){
    showPersonInfo();
    getSubject();
}