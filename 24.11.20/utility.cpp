#include "utility.h"
#include <string>

string utility::tostring(Department department)
{
    switch (department) {
    case Department::computersciece:
        return "��T�u�{�t";
    case Department::electricalengineering:
        return "�q���u�{�t";
    case Department::electronicengineering:
        return "�q�l�u�{�t";
    case Department::informationmanagement:
        return "��T�޲z�t";
    default:
        return "����";
    }
}

string utility::tostring(Classname classname)
{
    switch (classname) {
    case Classname::_1A:
        return "�@��";
    case Classname::_1B:
        return "�@�A";
    case Classname::_2A:
        return "�G��";
    case Classname::_2B:
        return "�G�A";
    case Classname::_3A:
        return "�T��";
    case Classname::_3B:
        return "�T�A";
    case Classname::_4A:
        return "�|��";
    case Classname::_4B:
        return "�|�A";
    default:
        return "����";
    }
}