/*
 * heapsort.cpp
 *
 *  Created on: May 21, 2016
 *      Author: Uday Kiran
 */
#include<iostream>
#include<string>
using namespace std;
int* makeHeap(int x[], int y);
void heapsort(int *x, int y);
	int main(){
		string arr,ar;
		int i;
		int left=0,k=0;
		cout << "Enter the array to be sorted" << endl ;
		getline(cin,arr);
		int L=arr.length();
		int A[L];

		for(i=0;i<L;i++){
			ar=arr[i];
			if(ar.compare(" ")==0 || i==L-1){
				A[k]=stoi(arr.substr(left,i-left+1));
				k=k+1;
				left=i+1;
			}
		}
		cout << "array size: " << k << endl;
		for(i=0;i<k;i++){
			cout << A[i] << endl;
		}

		// Making array into heap
		 int *ptr;
		ptr=makeHeap(A,k);
		// sorting array using heapsort
		heapsort(ptr,k);
	return 0;
	}
	int* makeHeap(int array[],int size){

		return array;
	}
	void heapsort(int *array, int size){

		//print sorted array also
	}




