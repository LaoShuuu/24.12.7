#pragma once

#include <string>
#include <ctime>
using namespace std;

class Record
{
private:
	static int nextId;
	int recordId; //�R�A�ܼơA�Ω������Ҫ��y����
	string studentId;
	string courseId;
	time_t recordDate;

public:
	Record();
	Record(string& studentId, string& courseId);

	//getter
	int getRecordId() const;
	string getStudentId() const;
	string getCourseId() const;
	string getRecordDate() const;

	void display();
};