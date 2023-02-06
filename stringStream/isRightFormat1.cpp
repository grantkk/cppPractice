#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
#include <regex>

bool isNumeric(std::string const &str)
{
	return std::regex_match(str,std::regex("[(-|+)|][0-9]+"));
}

int main()
{
	std::string s = "s123342x";
	char start = s[0];
	char end = s[7];
	std::cout<< s[0]<<std::endl;
	std::cout<< s[7]<<std::endl;
	std::cout<<s.substr(1,6)<<std::endl;
	std::cout<<std::boolalpha<<isNumeric(s.substr(1,6))<<std::endl;
	return 0;
}
