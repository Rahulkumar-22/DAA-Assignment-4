#include <bits/stdc++.h>
using namespace std;
// Function to shufle an array
void shufleArray(int arr[], int start, int end)
{
    // base condition
	if (end  < start) {
		return;
	}

	//if only two elements present in the subarray
	if (end - start== 1)
		return;

	//Finding middle of the array to divide the array
	int mid = (start + end) / 2;

	//using  temp in order to swap first half of second array
	int temp = mid + 1;

	//using  first in order to swap second half of first array
	int firstmid = (start + mid) / 2;

	//Swapping the center elements
	for (int i = firstmid + 1; i <= mid; i++)
		swap(arr[i], arr[temp++]);

	// recursively calling the function for first and second subarrays
	shufleArray(arr, start, mid);
	shufleArray(arr, mid + 1, end);
}

int main()
{
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++)
        cin >>arr[i];
	shufleArray(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
