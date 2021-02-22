#include "student.h"

Student::Student()
{
}

Student::Student(string newfname, string newlname, int newMark, int newId)
{
    fName = newfname;
    lName = newlname;
    mark = newMark;
    id = newId;
}

string Student::getFName() {
    return fName;
}
string Student::getLName() {
    return lName;
}

float Student::getMark() {
    return mark;
}

int Student::getId() {
    return id;
}

void Student::setFName(string newname) {
    fName = newname;
}
void Student::setLName(string newname) {
    lName = newname;
}

void Student::setMark(float newMark) {
    mark = newMark;
}
void Student::setId(int newId) {
    id = newId;
}