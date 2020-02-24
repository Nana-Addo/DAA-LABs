// feel free to change elements in array "arr"
// this program is not dynamic, it is static, elements in array have been manually placed in there
// Recursive C++ program
// to search x in array
#include<bits/stdc++.h>

using namespace std;

// prototype to recSearch() function, this is the implementation of our recursive linear search function
int recSearch(int arr[], int l, int r, int x);

// Implementation and Calling of main() function
int main()
{
    // Statically declared array Array
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr) / sizeof(arr[0]);
	// element of array we are interested in finding
	int x = 3;
	int index = recSearch(arr, 0, n - 1, x);
	// if else block tells us where variable x can be found (position wise in our array)
	// if variable x is also not in array arr[], the else block would let us know
	if (index != -1)
	cout << "Element " << x
		<< " is present at index "
		<< index;
	else
		cout << "Element" << x
			<< " is not present" ;
	return 0;
}

// Recursive function to
// search x in arr[l..r]
int recSearch(int arr[], int l, int r, int x)
{
	if (r < l)
		return -1;
	if (arr[l] == x)
		return l;
	if (arr[r] == x)
		return r;
	return recSearch(arr, l + 1,
						r - 1, x);
}

