#include <fstream>
#include <iostream>

using namespace std;

int main(){

	int letter = 0;
	int A, F, a, b;
	int count;
	
	
	ifstream out_a;

	out_a.open("info.dat");
	if(out_a.fail()){
		cout << "something happened" << endl;
		exit(1);
	}

	if (letter = A);{
		count = 0;
		count++;
		cout << "number of A's: " << A << endl;
		}

	if (letter = F);{
		count=0;
		count++;
		cout << "number of F's: " << F << endl;
		}

	if (letter = a);{
		count=0;
		count++;
		cout << "number of a's: " << a << endl;
		}

	if (letter = b);{
		count=0;
		count++;
		cout << "number of b's: " << b << endl;
		}

	

		

	



	return 0;
}
