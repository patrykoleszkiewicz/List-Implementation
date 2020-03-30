#include "OneWayList.hpp"

template <class T>
OneWayList<T>::OneWayList()
{
	_first = nullptr;
}

template<typename T>
void OneWayList<T>::pushBack(const T& value)
{
	if(_first == nullptr)
	{
		_first = new Element();
		_first->value = value;
		_first->next = nullptr;
		++_size;
	}
	else
	{
		Element* end = _first;
		
		while(end->next != nullptr)
		{
			end = end->next;
		}
		
		end->next = new Element();
		end->next->value = value;
		end->next->next = nullptr;
		++_size;
	}
}