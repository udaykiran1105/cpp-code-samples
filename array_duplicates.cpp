/*
 * array_duplicates.cpp
 *
 *  Created on: Jul 22, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicates(vector<int> v){
    int size = v.size();    //size = 12
    vector<int> dup;
    int flag=0;
    for(int i=1;i<size;i++){

        if(v[i]==v[i-1]){
        	if(flag==1)
        		continue;
            dup.push_back(v[i]);
            flag=1;
        } else if(flag==1){
        	flag=0;
        }
    }
    return dup;
}
int main(){
	vector<int> v;
	vector<int> result;
	v={1,2,3,3,3,4,5,6,6,7,9,9};
	result = duplicates(v);

	for(int i=0;i<result.size();i++){
		cout << result[i] << " ";
	}
	cout <<endl;

	return 0;
}



