#include "OneWayList.hpp"
#include <iostream>
#include <sstream>

void test(std::string name, std::string expected, std::string actual)
{
    std::cout << "TEST " << name << ":\n"
                 "Should be: \"" << expected << "\"\n"
                 "Actual:    \"" << actual << "\"\n\n";
}

int main()
{
	OneWayList<int> list;
	
    test("Empty List","",list.printToString(' '));
    
    list.pushBack(0);
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushBack(4);
    
    test("Filled list","0 1 2 3 4",list.printToString(' '));
    
    list.erase(2);
    
    test("Erasing","0 1 3 4",list.printToString(' '));
}