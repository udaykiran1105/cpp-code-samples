/*
 * time_12to24_format.cpp
 *
 *  Created on: Jul 24, 2016
 *      Author: Uday Kiran
 */

#include <iostream>
using namespace std;

int main(){
    string time,time24,temp;
    cin >> time;
    char ap = time.at(8);
    if(ap=='A'){
        temp=time.substr(0,2);
        if(temp=="12")
            time24="00"+time.substr(2,6);
        else
            time24=time.substr(0,8);
    } else {
        temp=time.substr(0,2);
        if(temp=="12")
            time24=time.substr(0,8);
        else
            time24=to_string(stoi(time.substr(0,2))+12)+time.substr(2,6);

    }
        cout << time24 << endl;
    return 0;
}




