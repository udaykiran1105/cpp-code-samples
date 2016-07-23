/*
 * var_sized_arrays.cpp
 *
 *  Created on: Jul 12, 2016
 *      Author: Uday Kiran
 */
/**
 *  HACKERRANK -> C++ -> INTRODUCTION -> VARIABLE SIZED ARRAYS
 *  Demonstrates use of pointers in creating multidimensional variable sized arrays
 */
#include <iostream>
using namespace std;

int main() {
	int N,Q,k,x,y,temp;
	cin >> N >> Q;
	int* p[N];
	int *q;
	for (int i=0;i<N;i++){
	    cin >> k;
	    q=(int*)malloc(k*sizeof(int));
	    p[i]=q;
	    for(int j=0;j<k;j++){
	        cin >> temp;
	        q[j]=temp;
	    }
	}
	for(int i=0;i<Q;i++){
	    cin >> x >> y;
	    cout << p[x][y] << endl;
	}
	return 0;
}




