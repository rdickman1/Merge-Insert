// This program is designed to preform a merge/insertion sort recursivly,
// 	read from a file named data1.txt, and wirte to a file named out1.txt


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"sortFuncts.h"
using namespace std;


int main(){
	
	
	fstream file;
	string line;
	stringstream s(line);
	double arr[500], num;

	file.open("data1.txt");
	if(file.is_open()){
	
		int count = 0;

		while(file.good()){

			getline(file, line);

			while(s >> num){
				arr[count] = num;
				count++;
			}
		}

		for(int i = 0; i < count; i++){
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "File failed to open.\n";
		cin.get();
	}

	return 0;



}
