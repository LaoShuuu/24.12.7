﻿#include <string>

#include <iostream>

#include "person.h"

#include "student.h"

#include "utility.h"
using namespace std;


int main()
{
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

    student student1("A123456789", "Chen", "Jason", "M", "1999-01-01", "S001",
        Department::computersciece, Classname::_1A);
    student1.display();
}

