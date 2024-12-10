#include <string>

#include <iostream>

#include "person.h"

#include "student.h"

#include "teacher.h"

#include "utility.h"

#include "Course.h"

using namespace std;


int main()
{
 
    /*
    
    person person1("a123456789", "Chen", "Jason", "M", "1999-01-01");

    person* person2 = new person();

    person2->setid("B987654321");
    person2->setlastname("Wang");
    person2->setfirstname("Mary");
    person2->setgender("F");
    person2->setbirthdate("1999-12-31");

    person1.display();
    cout << endl;
    person2->display();
    
    */

    student student1("4B3G0157", "林", "宜璇", "女", "2005-10-05", "4B3G0157",
        Department::computersciece, Classname::_1A);
    student1.display();
    
    cout << endl;

    Course course1("C001", "C++ programming", "這門課程教授C++程式語言");
    Course course2("C002", "Jave programming", "這門課程教授Jave程式語言");
    Course course3("C003", "Python programming", "這門課程教授Python程式語言");

   

    vector<Course> teacher1_courses = { course1,course2,course3 };

    teacher teacher1("T123456789", "王", "大富", "男", "1980-07-01", "T001",Department::computersciece, Classname::_1A,  { course1 });

    cout << "--------------------" << endl;
    teacher1.display();


    course1.display();
    course2.display();
    course3.display();
 
}

