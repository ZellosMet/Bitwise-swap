#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int num_one, num_two;

	cout << "������� ������ � ������ ����������: "; cin >> num_one >> num_two;

	num_one = num_one ^ num_two;
	num_two = num_two ^ num_one;
	num_one = num_one ^ num_two;

	cout << "Swap: " << num_one << " " << num_two;
}