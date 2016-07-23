/*
 * map_simple_example.cpp
 *
 *  Created on: Jul 20, 2016
 *      Author: Uday Kiran
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

map<string,int> mp;

void print(string name){
    if(mp.count(name)!=0)
        cout << mp[name] << endl;
    else
        cout << "0" << endl;
    return;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q,type,Y;
    string X;
    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> type;
        if(type==1){
            cin >> X >> Y;
            if(mp.find(X)==mp.end())
                mp.insert(make_pair(X,Y) );
            else
                mp[X] = mp[X] + Y;
        }
        else if(type==2){
            cin >> X;
            mp.erase(X);
        }
        else {
            cin >> X;
            print(X);
        }

    }
    return 0;
}




