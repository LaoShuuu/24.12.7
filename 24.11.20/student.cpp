#include "student.h"
#include <iostream>
#include "utility.h"
using namespace std;

student::student(const string& id, const string& lastname, const string& firstname, const string& gender, 
	const string& birthdate, const string& studentid, Department department, Classname classname)
	:person(id, lastname, firstname, gender, birthdate),studentid(studentid), department(department), classname(classname)
{


}

string student::getstudentid() const
{
	return string();
}

Department student::getDepartment() const
{
	return Department();
}

Classname student::getclassname() const
{
	return Classname();
}

void student::setstudentid(const string& studentid)
{
	this->studentid = studentid; 
}

void student::setDepartment(Department department)
{
	this->department = department;
}

void student::setclassname(Classname classname)
{
	this->classname = classname;
}

void student::display()const
{
	person::display();
	cout << "學號 : " << studentid << endl;
	cout << "科系 : " << utility::tostring(department) << endl;
	cout << "班級 : " << utility::tostring(classname) << endl;
}