#pragma once
#include <ostream>
#include <sstream>

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
    
	std::size_t size() const
	{
		return _size;
	}
	
	T& at(std::size_t index)
	{
		if(index < _size)
		{
			Element* current = _first;
			
			for(std::size_t ite = 0; ite < index; ++ite)
			{
				current = current->next;
			}
			
			return current->value;
		}
		else
		{
			throw "";
		}
	}
	
	void print(std::ostream& str, char separator = 0) const
	{
		Element* current = _first;
		
		while(current != nullptr)
		{
			str << current->value;
			if(separator > 0 && current->next > 0)
			{
				str << separator;
			}
			current = current->next;
		}
	}
    
    std::string printToString(char separator = 0)
    {
        std::stringstream ss;
        print(ss,separator);
        return ss.str();
    }
    
    void erase(const std::size_t index)
    {
        if(index < _size)
        {
            if(index == 0)
            {
                Element* eraser = _first;
                _first = _first->next;
                delete eraser;
                --_size;
            }
            else
            {
                Element* current = _first;
                Element* previous = nullptr;
                
                for(std::size_t ite = 0; ite < index; ++ite)
                {
                    previous = current;
                    current = current->next;
                }
                
                previous->next = current->next;
                delete current;
                --_size;
            }
        }
        else
        {
            throw "";
        }
    }
    
private:
	struct Element
	{
		T value;
		Element* next;
	};
	Element* _first;
	std::size_t _size;
};