#include "teacher.h"
#include <iostream>
using namespace std;

teacher::teacher(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthdate,
	const string& teacherId, Department department, Classname, const vector<Course>& courses) : person(id, lastname, firstname,  gender, birthdate), teacherId(teacherId)
	, department(department), classname(classname), courses(courses)
{

}

string teacher::getteacherId() const
{
	return teacherId;
}

Department teacher::getDepartment() const
{
	return department;
}

Classname teacher::getclassname() const
{
	return classname;
}

vector<Course> teacher::getCourses() const
{
	return courses;
}

void teacher::setteacherId(const string& teacherId)
{
	this->teacherId = teacherId;
}

void teacher::setDepartment(Department department)
{
	this->department = department;
}

void teacher::setclassname(Classname classname)
{
	this->classname = classname;
}

void teacher::setCourses(const vector<Course>& courses)
{
	this->courses = courses;

}

void teacher::display() const
{
	person::display();
	cout << "教師編號 : " << teacherId << endl;
	cout << "教師所屬系所 : " << utility::tostring(department) << endl;
	cout << "教師所屬班級 : " << utility::tostring(classname) << endl;
	cout << "教師所授課程 : " << endl;
	for (const Course& course : courses)
	{
		course.display();
	}
}

