#include <iostream>
#include <vector>
using namespace std;

int main() 
{
// Create a vector 
	vector<int> vect0_1D = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < vect0_1D.size(); i++)
	{
		cout << vect0_1D[i] << " ";
	}
	cout << "\n";
	vector<int> vect1_1D{ 6, 7, 8, 9, 10 };
	for (const int& i : vect1_1D) 
	{
		cout << i << "  ";
	}

	cout << "\n Adding element to a vector " << endl; 
	vect0_1D.push_back(15);
	vect0_1D.push_back(16);
	vect0_1D.push_back(17);
	for (const int& i : vect0_1D)
	{
		cout << i << "  ";
	}
	cout << "\n Another way of for loop " << endl;
	for (int i = 0; i < vect0_1D.size(); i++)
	{
		cout << vect0_1D[i] << " " ;
	}
 // Access Elements of a Vector
	cout << endl;
	cout << "Element at 0th location = " << vect0_1D.at(0) << endl;
	cout << "Element at 3rd location = " << vect0_1D.at(3) << endl;
	cout << "Element at 5th location = " << vect0_1D.at(5) << endl;

// Change Vector Element
	vect0_1D.at(1) = 78;
	vect0_1D.at(4) = 45;
	cout << "Updated vector after changing element" << endl;
	for (const int& i : vect0_1D)
	{
		cout << i << "  ";
	}
// remove the last element
	vect0_1D.pop_back();

// final vector
	cout << "\nUpdated Vector \n";
	for (int i : vect0_1D) 
	{
		cout << i << " ";
	}
	vector<vector<int>> vect0_2D
	{
		{11, 22, 33},
		{44, 55, 66},
		{77, 88, 99}
	};
	cout << "\n 2D vector \n";
	for (int i = 0; i < vect0_2D.size(); i++)
	{
		for (int j = 0; j < vect0_2D[i].size(); j++)
		{
			cout << vect0_2D[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}