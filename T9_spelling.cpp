/*
 * T9_spelling.cpp
 *
 *  Created on: Jul 30, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
#include <string>
using namespace std;
pair<int,int> telnum(char ch){
    if(ch==' ')
    return make_pair(0,1);
    int n = (int)ch;

    if(n>=112 && n<=115)
    return make_pair(7,n-111);
    else if(n>=116 && n<=118)
    return make_pair(8,n-115);
    else if(n>=119 && n<=122)
    return make_pair(9,n-118);
    else {
    int temp1 = (n-97)/3+2;
    int temp2 = n-(97+(temp1-2)*3)+1;
    return make_pair(temp1,temp2);

    }
}
void print(string s, int i){
    cout << "Case #" << i << ": ";
    int num;
    for(int j=0;j<s.length();j++){
        num = telnum(s[j]).first;
        if(j!=0){
            if(telnum(s[j-1]).first==num)
            cout << ' ';

        }
        for(int k=1;k<=telnum(s[j]).second;k++){
            cout << num;
        }
    }
    cout << endl;
}
int main(){
   int N;
   cin >> N;
   cin.ignore();
   string s;
   for(int i=1;i<=N;i++){
       getline(cin,s);
       print(s,i);
   }
    return 0;
}



