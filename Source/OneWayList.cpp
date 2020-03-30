#include "OneWayList.hpp"

template <class T>
OneWayList<T>::OneWayList()
{
	_first = nullptr;
}

template<class T>
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

template<class T>
T& OneWayList<T>::at(std::size_t index)
{
	if(index < _size)
	{
		Element* current = _first;
		
		for(std::size_t ite = 1; ite < index; ++ite)
		{
			current = current->next;
		}
		
		return current->value;
	}
	else
	{
		throw std::out_of_range();
	}
}

template<class T>
std::size_t OneWayList::size()
{
	return _size;
}