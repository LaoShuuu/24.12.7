#pragma once
#include <iostream>
using namespace std;

#include "person.h"
#include "utility.h"

class student :
    public person
{
private:
    string studentid;
    Department department;
    Classname classname;

public:
    student(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthdate,
        const string& studentid, Department department, Classname classname);

    //getter, ���Ȩ��
    string getstudentid()const;
    Department getDepartment()const;
    Classname getclassname()const;

    //setter, �]�Ȩ��
    void setstudentid(const string& studentid);
    void setDepartment(Department department);
    void setclassname(Classname classname);

    void display() const;

};


