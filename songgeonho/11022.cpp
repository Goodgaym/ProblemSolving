#include <iostream>

using namespace::std;

int main()
{
	char c;
	int a, b,t,i=1;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << "Case #"<< i++<<": "<< a<<" + "<<b << " = " <<a + b << endl; // 문제형식에 맞게 
	}
}
