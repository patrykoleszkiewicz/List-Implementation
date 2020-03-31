#include "OneWayList.hpp"
#include <iostream>

int main()
{
	OneWayList<int> list;
	
	list.pushBack(50);
	list.pushBack(100);
	list.pushBack(150);
	list.pushBack(200);
	list.pushBack(250);
	
	std::cout << list.at(0) << "\n";
	list.print(std::cout);
}