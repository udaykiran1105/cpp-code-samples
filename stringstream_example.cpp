/*
 * stringstream_example.cpp
 *
 *  Created on: Jul 13, 2016
 *      Author: Uday Kiran
 */
/**
 * HACKERRANK -> C++ -> STRINGS -> STRINGSTREAM
 */
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> nums;
    stringstream ss;
    char temp[256];
    ss.str(str);
    char ch = ',',c;
    c=ss.peek();

    while(c!= EOF){
   ss.get(temp,256,ch);
       // cout << "converted integer" << endl;
       // cout << atoi(temp) << endl;
    nums.push_back(atoi(temp));
        c=ss.get();
      // cout << "next char" << endl;
      //  cout << c << endl;
     }
        return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
      cout << integers[i] << "\n";
    }

    return 0;
}
