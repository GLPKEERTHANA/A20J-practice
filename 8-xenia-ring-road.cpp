
    #include <iostream>
#include<climits>
#include<queue>
using namespace std;

int main()
{    
int n, m;
	cin >> n;
    cin>> m;
    int a[m];
	for(int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	long long res = 0, curr = 1;
	for(int i = 0; i < m; ++i) {
		if(a[i] < curr) {
			res += n;
		}
		curr = a[i];
	}
	res += curr - 1;
	cout << res;


    return 0;
}