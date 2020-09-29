#include <iostream>
#include<climits>
#include<queue>
using namespace std;

int main()
{    
   int n;
	cin >> n;
	int c = 0, e = 0, res = 0;
	for(int i = 0; i < n; ++i) {
		int ch;
		cin >> ch;
		e += res - ch;
		if(e < 0) {
			c -= e;
			e = 0;
		}
		res = ch;
	}
	cout << c;


    return 0;
}