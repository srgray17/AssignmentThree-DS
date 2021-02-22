#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>
using namespace std;

typedef string treeType;

class Student {
private:
    string fName;
    string lName;
    float mark;
    int id;
public:
    Student();
    Student(string fName, string lName, int mark, int id);
    string getFName();
    string getLName();
    float getMark();
    int getId();
    void setFName(string newfname);
    void setLName(string newlname);
    void setMark(float newmark);
    void setId(int id);
};