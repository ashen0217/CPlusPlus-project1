// LAB-2EX-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//function declaration 
int search(int* arry,int key);
int findMAX(int arry[]);

int main()
{
	int arry[10],key,maxnum; //create an array and key varaiable

	cout << "Enter the number";
	for (int i = 0; i < 10; i++) {
		cin >> arry[i];
	}

	maxnum = findMAX(arry);
	cout << "MAX :" << maxnum << "\n";

	//function call
	cout << "Enter the key";
	cin >> key;

	int newsearch = search(arry,key);

	if (newsearch == -1) {
		cout << "not found";
	}
	else {
		cout << "Element is dound at index:" << newsearch;
	}


	return 0;
}

//function implementation 
int search(int* arry, int key) {
	for (int i = 0; i < 10; i++) {
		if (arry[i] == key) {
			return i;
		}
	}
	return -1;
	
}

int findMAX(int arry[]) {
	int max = arry[0];
	for (int j = 0; j < 10; j++) {
		if (arry[j] >= max) {
			max = arry[j];
		}
	}
	return max;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
