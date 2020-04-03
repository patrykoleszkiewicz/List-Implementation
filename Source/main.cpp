#include "OneWayList.hpp"
#include <iostream>
#include <sstream>

void test(std::string expected, std::string actual)
{
    std::cout << "TEST:\n"
                 "Should be: \"" << expected << "\"\n"
                 "Actual:    \"" << actual << "\"\n\n";
}

int main()
{
	OneWayList<int> list;
	
	list.pushBack(50);
	list.pushBack(100);
	list.pushBack(150);
	list.pushBack(200);
	list.pushBack(250);
    
    std::stringstream test1;
    list.print(test1,' ');
    
    list.erase(2);
    
    std::stringstream test2;
    list.print(test2,' ');
    
    test("50 100 150 200 250",test1.str());
    test("50 100 200 250",test2.str());
}