/*
 * array_right_rotations.cpp
 *
 *  Created on: Jul 25, 2016
 *      Author: Uday Kiran
 */
#include <vector>
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q,i,query;

    cin >> n >> k >> q;
    vector<int> v(n+k%n,0);
    for(i=k%n;i<k%n+n;i++)
        cin >> v[i];
    for(i=0;i<k%n;i++)
        v[i]=v[i+n];

    for(i=0;i<q;i++){
        cin >> query;
        cout << v[query] << endl;
    }
    return 0;
}




