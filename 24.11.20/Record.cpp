#include "Record.h"
#include <string>
#include <iostream>
using namespace std;

Record::Record()
{
}

Record::Record(string& studentId, string& courseId) : studentId(studentId), courseId(courseId), recordId(nextId++)
{
}

int Record::getRecordId() const
{
	return recordId;
}

string Record::getStudentId() const
{
	return  studentId;
}

string Record::getCourseId() const
{
	return courseId;
}

string Record::getRecordDate() const
{
	char buffer[20];
	struct tm timeinfo;
	localtime_s(&timeinfo, &recordDate);
	strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
	return string(buffer);
}



void Record::display()
{
	cout << "��ҧǸ� : " << getRecordId() << endl;
	cout << "�Ǹ� : " << getStudentId() << endl;
	cout << "�ҵ{�N�X : " <<getCourseId() << endl;
	cout << "��Ҥ�� : " << getRecordDate() << endl;
	cout << "--------------------" << endl;
}
