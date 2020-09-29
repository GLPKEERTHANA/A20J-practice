#include <iostream>
#include<climits>
using namespace std;

int main()
{    

int n, k;
	cin >> n;
    cin >> k;
	int p = 1, q = n;
	while(k--) {
		cout << q << " ";
	q--;
	}
	for(int i = p; i <= q; i++) cout << i << " ";


    return 0;
}