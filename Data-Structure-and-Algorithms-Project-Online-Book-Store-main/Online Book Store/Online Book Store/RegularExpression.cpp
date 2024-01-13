#include "RegularExpression.h"
#include <regex>

bool RegularExpression::matchFound(string name, string searchterm)
{
	anchors = std::regex("^" + searchterm + "$", std::regex_constants::icase);
	wordBoundaries = std::regex("\\b" + searchterm + "\\b", std::regex_constants::icase);
	if ((std::regex_search(name, anchors) || std::regex_search(name,wordBoundaries))) {
		return true;
	}
	return false;
}
