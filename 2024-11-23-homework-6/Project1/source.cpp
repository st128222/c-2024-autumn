
#include<iostream>

void fillArray(int* const arr, const int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 10;
	}
}
void printArray(const int* const arr, const int len) {
	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << " ";
	}
}
void addElementToEnd(int*& arr, int& len, const int el)
{
	int* new_array = new int[len + 1];
	for (int i = 0; i < len; i++)
	{
		new_array[i] = arr[i];
	}
	new_array[len] = el;
	len++;
	delete[]arr;
	arr = new_array;
}
void deleteElementFromEnd(int*& arr, int& len)
{
	len--;
	int* new_arr = new int[len];
	for (int i = 0; i < len; i++)
	{
		new_arr[i] = arr[i];
	}
	delete[]arr;
	arr = new_arr;

}
void addElementToStart(int*& arr, int& len, const int el)
{
	int* new_array = new int[len + 1];
	for (int i = 0; i < len; i++)
	{
		new_array[i + 1] = arr[i];
	}
	new_array[0] = el;
	len++;

	delete[]arr;
	arr = new_array;

}
void deleteElementFromStart(int*& arr, int& len)
{
	len--;
	int* new_arr = new int[len];
	for (int i = 0; i < len; i++)
	{
		new_arr[i] = arr[i + 1];
	}
	delete[]arr;
	arr = new_arr;
}


void printMenu() {
	system("cls");
	printf("0 - exit\n");
	printf("1 - print array\n");
	printf("2 - add to start\n");
	printf("3 - add to end \n");
	printf("4 - delete from start \n");
	printf("5 - delete from end \n");
}
int main(int argc, char* argv[]) {
	int len = 0;
	std::cout << "Enter array size";
	scanf_s("%d", &len);
	int* arr = new int[len];
	bool flag = true;
	while (flag) {
		printMenu();
		int choice = 0;
		scanf_s("%d", &choice);
		if (choice == 0){
			flag = false;
		}
		else if (choice == 1) {
			fillArray(arr, len);
			printArray(arr, len);
			
		}
		else if (choice == 2) {
			fillArray(arr, len); 
			printArray(arr, len); // array before adding
			std::cout << "\n";
			int el = 0;
			scanf_s("%d", &el);
			addElementToStart(arr, len, el);
			printArray(arr, len);	
		}
		else if (choice == 3) {
			fillArray(arr, len);
			printArray(arr, len); // array before adding
			std::cout << "\n";
			int el = 0;
			scanf_s("%d", &el);
			addElementToEnd(arr, len, el);
			printArray(arr, len);
		
		}
		else if (choice == 4) { 
			fillArray(arr, len); // array before deletion
			printArray(arr, len);
			std::cout << "\n";
			deleteElementFromStart(arr,len);
			printArray(arr, len);
		
		}
		else if (choice == 5) {
			fillArray(arr, len);
			printArray(arr, len); // array before deletion
			std::cout << "\n";
			deleteElementFromEnd(arr, len);
			printArray(arr, len);
			
			
		}
	}
	return EXIT_SUCCESS;
}