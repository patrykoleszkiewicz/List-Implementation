#pragma once
#include <ostream>

template <class T>
class OneWayList
{
public:
	OneWayList()
	{
		_first = nullptr;
		_size = 0;
	}
	
	void pushBack(const T& value)
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
	
	T& at(std::size_t index)
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
			//throw std::out_of_range;
		}
	}
	
	std::size_t size() const
	{
		return _size;
	}
	
	//void print(std::ostream& str) const;
	
private:
	struct Element
	{
		T value;
		Element* next;
	};
	Element* _first;
	std::size_t _size;
};