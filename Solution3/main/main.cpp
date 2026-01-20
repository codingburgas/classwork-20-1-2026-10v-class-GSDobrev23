#include<iostream>
#include "../math/add.h"
#include "../math/divide.h"
#include "../math/multiply.h"
#include "../math/subtract.h"
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	cout << divide(a, b) << endl;
	cout << multiply(a, b) << endl;
	cout << subtract(a, b) << endl;
}