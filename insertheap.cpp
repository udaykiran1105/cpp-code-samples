/*
 * insertheap.cpp
 *
 *  Created on: May 22, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
using namespace std;
int* insheap(int* x,int y, int z);
int main(){
	int list[]={44,30,50,22,60,55,77,55};
	int* a=(int*)malloc(sizeof(list));
	a=list;
	for(int n=0;n<(int)(sizeof(list)/sizeof(*list));n++){
		a=insheap(a,n,*(a+n));
	}
	// print sorted array
	for(int it=0;it<(int)(sizeof(list)/sizeof(*list));it++){
	cout << *(a+it) << endl;
	}
	return 0;
}
int* insheap(int *ptr,int n,int item){
	n=n+1; int item_loc=n,par; // add new item to array at the end (complete binary tree)
	// find appropriate location for the element
	while(item_loc>1){
		par = item_loc/2; // parent of current item position
		if(item<=*(ptr+par-1)){
			*(ptr+item_loc-1)=item; // assigning item after finding its correct position
			return ptr;
		}
		*(ptr+item_loc-1)=*(ptr+par-1); // moving node down
		item_loc=par; // updates item_loc to its parent location
	}
	*(ptr)=item;
	return ptr;
}


