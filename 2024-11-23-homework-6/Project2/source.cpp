
#include<iostream>
using namespace std;
void Fill_array(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Show_array(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Push_back(int*& arr, int& size, const int valie)
{
	int* new_array = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		new_array[i] = arr[i];
	}
	new_array[size] = valie;
	size++;
	delete[]arr;
	arr = new_array;
}
void Pop_back(int*& arr, int& size)
{
	size--;
	int* new_arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}
	delete[]arr;
	arr = new_arr;

}
void Push_back_start(int*& arr, int& size, const int valie)
{
	int* new_array = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		new_array[i + 1] = arr[i];
	}
	new_array[0] = valie;
	size++;

	delete[]arr;
	arr = new_array;

}
void Pop_back_start(int*& arr, int& size)
{
	size--;
	int* new_arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i + 1];
	}
	delete[]arr;
	arr = new_arr;
}
void Push_back_middle(int*& arr, int& size, const int valie, int ioe_mesto)
{
	int* new_arr = new int[size + 1];
	for (int i = 0; i < ioe_mesto; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[ioe_mesto] = valie;
	for (int i = ioe_mesto + 1; i <= size; i++)
	{
		new_arr[i] = arr[i - 1];
	}
	size++;
	delete[]arr;
	arr = new_arr;
}
void Pop_back_middle(int*& arr, int& size, int ioe_mesto)
{
	size--;
	int* new_arr = new int[size];
	for (int i = 0; i < ioe_mesto; i++)
	{
		new_arr[i] = arr[i];
	}
	for (int i = ioe_mesto + 1; i <= size; i++)
	{
		new_arr[i - 1] = arr[i];
	}
	delete[]arr;
	arr = new_arr;
}
void main()
{
	setlocale(LC_ALL, "ru");
	int size = 6;   //размер массива
	int valie = 555;//переменна, которую надо добавить
	int ioe_mesto = 2;//то место, куда надо или вставить или откуда надо убрать переменную
	int* arr = new int[size];
	cout << "Первоначальный массив:\n";
	Fill_array(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после добавления элемента в конец массива:\n";
	Push_back(arr, size, valie);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после удаления элемента с конца массива:\n";
	Pop_back(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после добавления элемента в начало массива:\n";
	Push_back_start(arr, size, valie);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после удаления элемента с начала массива:\n";
	Pop_back_start(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после добавления элемента в " << ioe_mesto + 1 << " место:\n";
	Push_back_middle(arr, size, valie, ioe_mesto);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "Массив, после удаления элемента из " << ioe_mesto + 1 << " места:\n";
	Pop_back_middle(arr, size, ioe_mesto);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	delete[]arr;
	system("pause");
}