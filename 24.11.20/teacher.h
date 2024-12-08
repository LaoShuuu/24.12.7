#pragma once

#include "person.h"

#include "utility.h"

#include "Course.h"

#include <string>

#include <vector>

using namespace std;


class teacher :
    public person
{
private:
    string teacherId;
    Department department;
    Classname classname;
    vector<Course> courses;

public:
    teacher(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthdate,
        const string& teacherId, Department department, Classname, const vector<Course>& courses );

    //getter
    string getteacherId() const;
    Department getDepartment() const;
    Classname getclassname() const;
    vector<Course> getCourses()const;
    
    //setter
    void setteacherId(const string& teacherId);
    void setDepartment(Department department);
    void setclassname(Classname classname);
    void setCourses(const vector <Course>& courses);

    void display() const;

};

