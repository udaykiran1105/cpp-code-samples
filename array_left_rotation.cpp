/*
 * array_left_rotation.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d,i;
     cin >> n >> d;
    int arr[n],temp[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
       if(i-d%n < 0)
           temp[i-d%n+n]=arr[i];
        else
            temp[i-d%n]=arr[i];
    }

    for(i=0;i<n;i++){
        cout << temp[i] << " ";
    }
    return 0;
}




