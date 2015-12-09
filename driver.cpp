#include "memory"

int main()
{
	int size = -1, x;
	int loc = 0, loc2, amount;
	bool valWord = false;
	int curr = 0;
	
	std::cout << "Please input the size of your storage: ";
	std::cin >> size;
	std::cout << std::endl;
	
	while(size < 0)
	{
		std::cout << "Please enter a positive interger: ";
		std::cin >> size;
		std::cout << std::endl;
	}
	
	memory *storage = new memory(size);

	while(loc < size)
	{
		std::cout << loc << ": ";
		std::cin >> x;
		(*storage).store(x, loc);
		loc++;

	}
	
	std::cout << "Please enter the location of the integer you wish to retrieve: ";
	std::cin >> amount;
	std::cout << std::endl << "Your value is : ";
	amount = (*storage).retrieve(amount);
	std::cout << amount << std::endl;
	
	std::cout << "Please enter the first location to copy, "
	<< "second location which you want to copy, and the "
	<< "the amount of blocks you wish to copy." << std::endl << std::endl
	<< "First Location: ";
	std::cin >> loc;
	std::cout << "Second Location: ";
	std::cin >> loc2;
	std::cout << "Amount :";
	std::cin >> amount;
	std::cout << std::endl << std::endl;
	
	(*storage).copy(loc, loc2, amount);
	
	dump(storage);
	
	std::cout << "Please enter a range of memory that your wish to dump"
	<< " (start, end): ";
	std::cin >> loc >> loc2;
	std::cout << std::endl;
	dump(loc, loc2, storage);
	
}     
