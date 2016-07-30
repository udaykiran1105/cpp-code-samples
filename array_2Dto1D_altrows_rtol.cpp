/*
 * array_2Dto1D_alt_rtol.cpp
 *
 *  Created on: Jul 25, 2016
 *      Author: Uday Kiran
 */
/**
 * converts an MxN 2D matrix into a 1D where elements are read from left to right
 * and right to left in alternate rows
 */
#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int> > &v){
    int M = v.size();
    int N = v[0].size();
    int i,j;
    for(i=0;i<M;i++){
        if(i%2==0){
            for(j=0;j<N;j++)
                cout << v[i][j] << " ";
        } else {
            for(j=N-1;j>=0;j--)
                cout << v[i][j] << " ";
        }

    }
}
int main(){
    int M,N;
    cin >> M >> N;
    vector<vector<int> > v(M,vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> v[i][j];
        }
    }
    print(v);
    return 0;
}
/*
vector<int> print(vector<vector<int> > matrix) {
	vector<int> ans;
	for (int i = 0; i < matrix.size(); i++) {
		if (i%2) {
			ans.insert(ans.end(), matrix[i].rbegin(), matrix[i].rend());
		} else {
			ans.insert(ans.end(), matrix[i].begin(), matrix[i].end());
		}
	}
	return ans;
}
 */

