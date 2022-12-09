#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unsigned long long int t;
	cin >> t;
	unsigned long long int arr[t];
	for (unsigned long long int i = 0; i < t; i++)
	{
		cin >> arr[i];
		int x = 0;
		unsigned long long int temp = arr[i];
		if(temp == 1){
			x = 1;
			cout << "NO" << "\n";
			continue;
		}
		if(floor(sqrt(temp)) != sqrt(temp)){
			continue;
		}
		if (floor(sqrt(temp)) == sqrt(temp))
		{
			for (unsigned long long int j = 2; j < floor(sqrt(sqrt(temp)))+1; j++)
			{
				if (temp % j == 0)
				{
					x = 1;
					break;
				}
			}
		}
		if (x == 0)
		{
			cout << "YES"
				 << "\n";
		}
		else
		{
			cout << "NO"
				 << "\n";
		}
	}
}
