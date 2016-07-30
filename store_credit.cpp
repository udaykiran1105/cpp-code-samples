/*
 * store_credit.cpp
 *
 *  Created on: Jul 30, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v,int C, int I,int i){
for(int k=0;k<I-1;k++){
            for(int m=k+1;m<I;m++){
                if(v[k]+v[m]==C){
                    cout << "Case #" << i << ": " << k+1 << " " << m+1 << endl;
                     return;
                }

            }
        }
        return;
}

int main(){
    int N,C,I;

    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> C >> I;
        vector<int> v(I);
        for(int j=0;j<I;j++){
            cin >> v[j];
        }
         print(v,C,I,i);
    }
    return 0;
}




