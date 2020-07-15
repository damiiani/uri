#include <iostream>

using namespace std;

int main()
{
	int n[20], aux[20];
	int max = 0;
	
	for(int i = 0; i < 20; ++i)
	{
		cin >> n[i];
		
		aux[i] = n[i];
	}
	
	for(int i = 19; i >= 0; --i)
	{
		n[i] = aux[max];
		
		++max;
	}
	
	for(int i = 0; i < 20; ++i)
	{
		cout << "N[" << i << "] = " << n[i] << endl;
	}
}
