#pragma once

#include <iostream>
#include <regex>

using namespace std;

class RegularExpression {
public:
	regex anchors;
	regex wordBoundaries;

	bool matchFound(string name, string searchterm);
};