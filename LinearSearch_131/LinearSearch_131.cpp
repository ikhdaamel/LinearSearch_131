#include <iostream>
using namespace std;

int arr[20];			//arary to be searched 
int n;					//number of elements in the array
int i;					//index of array element

void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
   }

	//accept array elements
	cout << "\n===================\n";
	cout << "enter array elements \n";
	cout << "=====================\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;					//number of comparision

	do
	{
		//accept the number to be searched
		cout << "\nEnter the elements you want to search: ";			//langkah 1 algoritma
	}
}
