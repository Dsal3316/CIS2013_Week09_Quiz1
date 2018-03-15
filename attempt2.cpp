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

	for(int i=0; i<9190; i++){
		inFromFile >> item;
		if(item == 'A') {As++;}
		else if(item == 'F') {Fs++;}
		else if(item == 'a') {as++;}
		else if(item == 'b') {bs++;}

		total++;
	}
		

	

	cout << "total A: " << As << endl;
	cout << "total F: " << Fs << endl;
	cout << "total a: " << as << endl;
	cout << "total b: " << bs << endl;
	cout << "total all characters: " << total << endl;

	inFromFile.close();
	return 0;
}