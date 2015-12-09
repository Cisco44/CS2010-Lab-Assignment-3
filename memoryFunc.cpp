#include "memory"

int memory::memorySize() const
{
	return size;
}

void memory::store(const word param, const word loc)
{
	block.at(loc) = param;
}

word memory::retrieve(const int loc) const
{
	return block.at(loc);
}

void memory::copy(const int fromLoc, const int toLoc, const int num)
{
	if(toLoc + num < memorySize() || fromLoc + num < memorySize())
		for(int i = 0; fromLoc + i < fromLoc + num; i++)
		{
			block.at(toLoc + i) = block.at(fromLoc + i);
		}
	else
		std::cout << "The blocks cannot be swapped." << std::endl;
}

void dump(const memory *mem)
{
	for(int x = 0; x < (*mem).size; x++)
	{
		std::cout << "Memory " << x << ":" << (*mem).retrieve(x) << std::endl; 
	}
}

void dump(const int fromLoc, const int toLoc, const memory *mem)
{
	if(toLoc < (*mem).memorySize())
	{
		int x = fromLoc;
		while(x <= toLoc)
		{
			std::cout << "Memory:" << std::endl;
			std::cout << (*mem).block.at(fromLoc + x) << std::endl; 
			x++;
		}
	}
}

