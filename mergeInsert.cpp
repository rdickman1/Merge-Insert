// This program is designed to preform a merge/insertion sort recursivly,
// 	read from a file named data1.txt, and wirte to a file named out1.txt


#include<iostream>
#include<fstream>
#include<
#include"sortFuncts.h"
using namespace std;


int main(){
	
	
	fstream file;
	double arr[500], num;

	file.open("data1.txt");
	if(file.is_open()){
	
		while(file.good()){
			while(file >> num 


	}
	else {
		cout << "File failed to open.\n";
		cin.get();
	}

	return 0;



}
