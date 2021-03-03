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
	ofstream out;
	string line;
	istringstream s;
	double arr[500] = {0};
	double num;

	
	file.open("data1.txt");
	out.open("out1.txt");
	
	if(file.is_open()){
		
		if(!out.is_open()){
			cout << "Output file failed to open.\n";
			return 2;
		}
		
		while(file.good()){
			
			int count = 0;
			getline(file, line);
			s.str(line);	

			while(s >> num){
				arr[count] = num;
				count++;
			}
					
			mergeSort(arr, 0, count - 1);

			for(int i = 0; i < count; i++){
				out << arr[i] << " ";
			}
			out << endl;

			s.clear();
		}

	}
	else {
		cout << "File failed to open.\n";
		cin.get();
	}

	file.close();
	out.close();

	return 0;



}
