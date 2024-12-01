
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
	int size = 6;   //������ �������
	int valie = 555;//���������, ������� ���� ��������
	int ioe_mesto = 2;//�� �����, ���� ���� ��� �������� ��� ������ ���� ������ ����������
	int* arr = new int[size];
	cout << "�������������� ������:\n";
	Fill_array(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� ���������� �������� � ����� �������:\n";
	Push_back(arr, size, valie);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� �������� �������� � ����� �������:\n";
	Pop_back(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� ���������� �������� � ������ �������:\n";
	Push_back_start(arr, size, valie);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� �������� �������� � ������ �������:\n";
	Pop_back_start(arr, size);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� ���������� �������� � " << ioe_mesto + 1 << " �����:\n";
	Push_back_middle(arr, size, valie, ioe_mesto);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	cout << "������, ����� �������� �������� �� " << ioe_mesto + 1 << " �����:\n";
	Pop_back_middle(arr, size, ioe_mesto);
	Show_array(arr, size);
	cout << endl;
	cout << endl;
	delete[]arr;
	system("pause");
}