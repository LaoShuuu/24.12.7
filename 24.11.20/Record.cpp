#include "Record.h"
#include <iostream>
using namespace std;

Record::Record()
{
}

Record::Record(string& studentId, string& courseId):studentId(studentId),courseId(courseId), recordId(nextId++)
{
}



void Record::display()
{
	cout << "��ҧǸ� : " << getRecordId() << endl;
	cout << "�Ǹ� : " << getStudentId() << endl;
}
