#include "person.h"
using namespace std;
#include <string>
#include <iostream>

person::person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthdate) 
	:id(id), lastname(lastname), firstname(firstname), gender(gender), birthdate(birthdate)
{
}

person::person()
{
}

string person::getid()const 
{
	return id;
}

string person::getlastname()const
{
	return lastname;
}

string person::getfirstname()const
{
	return firstname;
}

string person::getgender()const
{
	return gender;
}

string person::gerbirthdate()const
{
	return birthdate;
}



void person::setid(const string& id)
{
	this->id = id;
}

void person::setlastname(const string& lastname)
{
	this->lastname = lastname;
}

void person::setfirstname(const string& firstname)
{
	this->firstname = firstname;
}

void person::setgender(const string& gender)
{
	this->gender = gender;
}

void person::setbirthdate(const string& birthdate)
{
	this->birthdate = birthdate;
}

void person::display() const
{
	cout << "ID : " << id << endl;
	cout << "姓 : " << lastname << endl;
	cout << "名 : " << firstname << endl;
	cout << "性別 : " << gender << endl;
	cout << "生日 : " << birthdate << endl;
}
