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
	cout << "�Юv�s�� : " << teacherId << endl;
	cout << "�Юv���ݨt�� : " << utility::tostring(department) << endl;
	cout << "�Юv���ݯZ�� : " << utility::tostring(classname) << endl;
	cout << "�Юv�ұ½ҵ{ : " << endl;
	for (const Course& course : courses)
	{
		course.display();
	}
}

