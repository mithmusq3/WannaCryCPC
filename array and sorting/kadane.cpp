#include <climits>
#include <iostream>
using namespace std;

void maxSubArraySum(int a[], int size)
{
	int sum = 0;
	int mxsum = INT_MIN;
	int start=0,end=0;
	
	for(int i=0;i<size;i++){
	    sum+=a[i];
	    if(sum<a[i]){
	        sum = a[i];
	        start=i;
	    }
	    if(sum>mxsum){
	        mxsum = sum;
	        end = i;
	    }
	}
	
	cout << "Maximum contiguous sum is " << mxsum
		<< endl;
	cout << "Starting index " << start << endl
		 << "Ending index " << end << endl;
}

int main()
{
	int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);
	maxSubArraySum(a, n);
	return 0;
}
