/*
 * reverse_words.cpp
 *
 *  Created on: Jul 30, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
#include <string>
using namespace std;
void print(string s,int i){
    int len = s.length(),temp;
    temp = len-1;
    cout << "Case #" << i << ": ";
    for(int j=len-1;j>=0;j--){

        if(s[j]==' '){
            cout << s.substr(j+1,temp-j) << " ";
            temp = j-1;
        }
    }
    cout << s.substr(0,temp+1);
    cout << endl;
}
int main(){
    int N,len;
    string s;
    cin >> N;
    cin.ignore();
    for(int i=1;i<=N;i++){
        getline(cin,s);

        print(s,i);
    }
    return 0;
}



