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
	cout << "選課序號 : " << getRecordId() << endl;
	cout << "學號 : " << getStudentId() << endl;
}
