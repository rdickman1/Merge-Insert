// This program is designed to preform a merge/insertion sort recursivly,
// 	read from a file named data1.txt, and wirte to a file named out1.txt


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"sortFuncts.h"
using namespace std;


int main(){
	
	
	ifstream file;
	string line;
	istringstream s;
	double arr[500];
	double num;

	file.open("data1.txt");
	if(file.is_open()){
	
		
		while(file.good()){
			
			int count = 0;
			getline(file, line);
			s.str(line);	

			while(s >> num){
				arr[count] = num;
				count++;
			}
		
			for(int i =0; i < count; i++){
				cout << arr[i] << " ";
			}

			cout << endl;
		cout << arr[0] << " count-> " << count << endl;

			mergeSort(arr, 0, count);

			cout << arr[0] << " count-> " << count << endl;

			for(int i = 0; i < count; i++){
				cout << arr[i] << " ";
			}
			cout << endl;

			s.clear();
		}

	}
	else {
		cout << "File failed to open.\n";
		cin.get();
	}

	return 0;



}
