#include "utility.h"
#include <string>

string utility::tostring(Department department)
{
    switch (department) {
    case Department::computersciece:
        return "資訊工程系";
    case Department::electricalengineering:
        return "電機工程系";
    case Department::electronicengineering:
        return "電子工程系";
    case Department::informationmanagement:
        return "資訊管理系";
    default:
        return "未知";
    }
}

string utility::tostring(Classname classname)
{
    switch (classname) {
    case Classname::_1A:
        return "一甲";
    case Classname::_1B:
        return "一乙";
    case Classname::_2A:
        return "二甲";
    case Classname::_2B:
        return "二乙";
    case Classname::_3A:
        return "三甲";
    case Classname::_3B:
        return "三乙";
    case Classname::_4A:
        return "四甲";
    case Classname::_4B:
        return "四乙";
    default:
        return "未知";
    }
}