#include "OneWayList.hpp"
#include <iostream>

int main()
{
	//TESTS
	OneWayList<int> list;
	list.pushBack(0);
	list.pushBack(2);
	list.pushBack(3);
	std::size_t s = list.size();
	int i = list.at(1);
	std::cout << s << " " << i;
}