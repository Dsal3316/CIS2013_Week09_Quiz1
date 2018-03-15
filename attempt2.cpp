#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int As = 0;
	int Fs = 0;
	int as = 0;
	int bs = 0;
	int total =0;
	char item;

	ifstream inFromFile;
	inFromFile.open("info.dat");

	if(inFromFile.fail()){
		cout << "Somthing went wrong with info.dat." << endl;
	}

	inFromFile >> item;
	cout << "Item 1 is " << item << endl;
	inFromFile >> item;
	cout << "Item 2 is " << item << endl;
	inFromFile >> item;
	cout << "Item 3 is " << item << endl;
	inFromFile >> item;
	cout << "Item 4 is " << item << endl;
	inFromFile >> item;
	cout << "Item 1 is " << item << endl;
	inFromFile >> item;
	cout << "Item 2 is " << item << endl;
	inFromFile >> item;
	cout << "Item 3 is " << item << endl;
	inFromFile >> item;
	cout << "Item 4 is " << item << endl;
		
		

	

	cout << "total A: " << As << endl;
	cout << "total F: " << Fs << endl;
	cout << "total a: " << as << endl;
	cout << "total b: " << bs << endl;
	cout << "total all characters: " << total << endl;

	inFromFile.close();
	return 0;
}