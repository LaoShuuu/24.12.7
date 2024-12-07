#pragma once

#include "person.h"
#include "utility.h"

class student :
    public person
{
private:
    string studentid;
    department department;
    classname classname;
};


