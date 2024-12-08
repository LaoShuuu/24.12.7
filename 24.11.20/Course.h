#pragma once
#include <string>
using namespace std;

class Course
{
private:
	string courseId;
	string courseName;
	string courseDescription;

public:
	Course(const string& courseId, const string& courseName, const string& cousrseDescription);
	Course();

	//getter
	string getCourseId() const;
	string getCourseName() const;
	string getCourseDescription() const;
	
	//setter
	void setCourseId(const string& courseId);
	void setCourseName(const string& coursename);
	void setCoueseDescription(const string& courseDescription);
	void display() const;
};

