bool possible(vector<int> arr, int day, int m, int k)
{
	//we are trying to see possible no of bouquets at the given day. if arr(i) < day, we increase
	//our count, and once its broken, we calculate no of bouq with given count
	int n = arr.size();
	int no = 0;
	int c = 0;
	for(int i = 0; i<n; i++)
	{
		if (arr[i] <= day)
		{
			c++;
                } else {
                        no += (c / k);
                        c = 0;
                }
        }
		// After the loop, check if the last segment counts towards the bouquet count
		no += (c/k);
        return no >= m;
}

int roseGarden(vector<int> arr, int k, int m)
{
	//what is our answer space? it is from min(arr) to max(arr). why? max value is time taken
	//for all flowers to bloom, whle min is time taken for at least one
	//impossible if m*k is more than n
	
	long long val = m * 1ll * k *1ll;
	int n = arr.size();
	if (val > n) return -1;

	int maxa = INT_MIN;
	int mina = INT_MAX;

	for(int i = 0; i<n; i++)
	{
		maxa = max(maxa, arr[i]);
		mina = min(mina, arr[i]);
	}

	int low = mina;
	int high = maxa;

	while(low <= high)
	{
		int mid = (low+high)/2;
		if (possible(arr,mid,m,k))
		{
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return low;

}
