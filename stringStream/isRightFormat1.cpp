#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
#include <regex>

bool is_number( const std::string&s )
{
	std::string::const_iterator it = s.begin();
	while ( it != s.end() && std::isdigit(*it)) 
	{
		++it;
	}	
	return !s.empty() && it ==s.end();
}

bool isNumeric(std::string const &str)
{
	return std::regex_match(str,std::regex("[(-|+)|][0-9]+"));
}

int main()
{
	std::string s = "s12342x";
	std::istringstream is( s );
	char start = s[0];
	char end = s[7];
	std::string n;
	std::cout<< s[0]<<std::endl;
	std::cout<< s[7]<<std::endl;
	std::cout<<s.substr(1,6)<<std::endl;
	std::cout<<std::boolalpha<<isNumeric(s.substr(1,6))<<std::endl;
	/*
	while( is >> n )
	{
		std::cout << n <<std::endl;
//		std::cout << is_number(std::to_string(n))<<std::endl;
		std::cout << is_number(n)<<std::endl;
	}
	*/
	return 0;
}
