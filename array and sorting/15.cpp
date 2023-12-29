
#include <bits/stdc++.h>
using namespace std;

int maxDiff (int arr[], int n)
{
	
	int diff = arr[1]-arr[0];
	int curr_sum = diff;
	int max_sum = curr_sum;

	for(int i=1; i<n-1; i++)
	{
		
		diff = arr[i+1]-arr[i];

		
		if (curr_sum > 0)
		curr_sum += diff;
		else
		curr_sum = diff;

		
		if (curr_sum > max_sum)
		max_sum = curr_sum;
	}

	return max_sum;
}

/* Driver program to test above function */
int main()
{
int arr[] = {80, 2, 6, 3, 100};
int n = sizeof(arr) / sizeof(arr[0]);

// Function calling
cout << "Maximum difference is " << maxDiff(arr, n);

return 0;
}
