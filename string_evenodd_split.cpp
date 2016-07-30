/*
 * string_evenodd_split.cpp
 *
 *  Created on: Jul 24, 2016
 *      Author: Uday Kiran
 */
#include <string.h>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,i,j,ce=0,co=0;
    string temp;
    char tempe[5000],tempo[5000];
    cin >> N;
    for(i=0;i<N;i++){
        cin >> temp;
        for(j=0;j<temp.length();j++){
            if(j%2==0){
                tempe[ce]=temp[j];
                ce++;
            }
            else {
                tempo[co]=temp[j];
                co++;
            }
        }
        cout << tempe << " " << tempo << endl;
        ce=0;
        co=0;
        memset(tempe,0,sizeof(tempe));
        memset(tempo,0,sizeof(tempo));
    }
    return 0;
}




