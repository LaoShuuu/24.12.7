#pragma once
#include <string>
using namespace std;

class person
{
private:
	string id;
	string lastname;
	string firstname;
	string gender;
	string birthdate;

public:
	person(const string& id,const string& lastname, const string& firstname,const string& gender,const string& birthdate);
	person();

	string getid() const;
	string getlastname()const;
	string getfirstname()const;
	string getgender()const;
	string gerbirthdate() const;



	void setid(const string& id);
	void setlastname(const string& lastname);
	void setfirstname(const string& firstname);
	void setgender(const string& gender);
	void setbirthdate(const string& birthdate);

	void display() const;
};

