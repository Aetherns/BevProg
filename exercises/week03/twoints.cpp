#include "../std_lib_facilities.h"

int main() {
	int a , b = 0;
	
	
	
	cout << "Please enter two integer values!\n" ;
	
	cin >> a >> b;
	
	if (a<b)
		cout << "Max {" << a <<", " << b << "} is " << b << endl;
	else
		cout << "Max {" << a <<", " << b << "} is " << a << endl;
		
	return 0;

}
