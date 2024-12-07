#pragma once
#include <string>

using namespace std;

enum class Department {
	computersciece,
	electricalengineering,
	electronicengineering,
	informationmanagement,
};

enum class Classname {
	_1A,
	_1B,
	_2A,
	_2B,
	_3A,
	_3B,
	_4A,
	_4B,
};

class utility {
public:
	static string tostring(Department department);
	static string tostring(Classname classname);
};