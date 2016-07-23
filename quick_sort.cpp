/*
 * quick_sort.cpp
 *
 *  Created on: Jul 22, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
using namespace std;
int partition(int *A, int start, int end){
	int pivot = A[end];	//no pivot randomization here
	int pIndex = start;	//partition index
	for(int i=start;i<end;i++){
		if(A[i]<=pivot){
			swap(A[i],A[pIndex]);
			pIndex++;
		}
	}
	swap(A[pIndex],A[end]);
	return pIndex;
}
/**
 * void randomizedPartition(A,start,end){
 * pIndex=rand(start,end);
 * swap(A[pIndex],A[end]);	// this is done to be able to continue with the original partitioning method
 * partition(A,start,end);
 * }	//call randomizedPartition() in quickSort procedure
 */
void quickSort(int *A, int start, int end){
	if(start<end){
		int pIndex = partition(A,start,end);
		quickSort(A,start,pIndex-1);
		quickSort(A,pIndex+1,end);
	}
}
int main(){
	int A[] = {7,2,6,1,4,3,5,0};
	quickSort(A,0,7);
	for(int i=0;i<8;i++)
		cout <<A[i]<<" ";
}


