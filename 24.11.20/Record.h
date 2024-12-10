#pragma once

#include <string>

#include <ctime>
using namespace std;

class Record
{
private:
	static int recordId;
	string studentId;
	string courseId;
public:
	Record();
	Record(string& studentId, string& courseId);

	//getter
	string getstudentId();
	string getcourseId();

	void display();
};