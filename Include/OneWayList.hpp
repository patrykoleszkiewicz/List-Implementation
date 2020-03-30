#pragma once
#include <ostream>

template <class T>
class OneWayList
{
public:
	void pushBack(const T& value);
	T& at(std::size_t index);
	std::size_t size();
	void print(std::ostream& str);
	
private:
	struct Element
	{
		T value;
		Element* next;
	};
	Element* _first;
	std::size_t _size;
};