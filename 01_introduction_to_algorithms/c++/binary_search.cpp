#include <iostream>

int integer_binary_search(int list[],int item, int lenghtOfArray);

int main(int argc, char **argv) 
{
    
    int list[5] = { 11, 34, 78, 101, 120 };
    int item = 11;
	
	int size = ((sizeof list) / (sizeof list[0]));

#ifdef DEBUG
	std::cout << "length of array" << size << std::endl;
#endif // DEBUG
    
	int result = integer_binary_search(list, item, size);
	if (result == -1)
	{
		std::cout << "An error has occured please restart." << std::endl;
		return result;
	} 
	
	if (result == 0)
	{
		std::cout << "Item not found please search again" << std::endl;
	}
	if (item == list[result])
	{
		std::cout << item << " was found at " << result << " in the list" << std::endl;
	}
	char input = '0';
	std::cout << "Press any key to continue" << std::endl;
	std::cin >> input;
    return 0;
}

int integer_binary_search( int list[], int item, int size_of_array)
{
	if (list == NULL || item == NULL || size_of_array == 0)
		return -1;

	int low = 0;
	int mid;
	int high; 
	int guess;
	high = size_of_array -1;
	 
	while (low <= high)
	{
		mid = (low + high) / 2;
		guess = list[mid];
		if (guess == item)
		{
			return mid;
		}
		if (guess > item)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}

    return 0; 

}