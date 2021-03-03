// This file includes the definitions for the merge and insertion sort functions
//

#include<iostream>
#include"sortFuncts.h"
using namespace std;

void mergeSort(double arr[], int left, int right){

	if(left >= right){
		return;
	}
	
	if((right - left) <= 6){
		insertSort(arr, left, right);
	}
	else{	
		int middle = (left + right) / 2;
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);
		merge(arr, left, middle, right);
		}
	}


void merge(double arr[], int left, int middle, int right){

	// Establish number of elements for 2 arrays and create the arrays
	int elementsL = (middle - left + 1);
	int elementsR = (right - middle);
	double leftArr[500], rightArr[500];

	// Copy initial array into the left and right arrays
	for(int i = 0; i < elementsL; i++) {
		leftArr[i] = arr[left + i];
	}

	for(int i = 0; i < elementsR; i++) {
		rightArr[i] = arr[middle + i + 1];
	}

	// Iterators for combining the two arrays back to the original in order
	int i = 0;
	int j = 0;
	int k = left;

	// Puts the elements back in sorted order
	while(i < elementsL && j < elementsR){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}
		else {
			arr[k] = rightArr[j];
			j++;
		}

		k++;
	}

	// Assigns any leftover elements to the end of the array
	while(i < elementsL){
		arr[k] = leftArr[i];
		i++;
		k++;
	}

	while(j < elementsR){
		arr[k] = rightArr[j];
		j++;
		k++;
	}


}


void insertSort(double arr[], int left, int right) {
	
	double key;
	int pos;

	for(int i = left; i < right + 1; i++){
		key = arr[i];
		pos = i - 1;

		while(pos >= 0 && arr[pos] > key){

			arr[pos + 1] = arr[pos];
			pos--;
		}

		arr[pos + 1] = key;
	}
}
