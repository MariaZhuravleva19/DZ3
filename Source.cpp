#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int x;


	cout << "���-�� ��������� � �������: " << endl;
	cin >> x;

	int* arr = new int[x];

	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}

	int maxx = arr[0];

	for (int i = 0; i < x; i++)
	{
		if (arr[i] > maxx)
		{
			maxx = arr[i];
		}
	}
	cout << "������������ �������: ";
	cout << maxx << endl;
