/*
 * virtual_static_example.cpp
 *
 *  Created on: Jul 12, 2016
 *      Author: Uday Kiran
 */
/**
 * HACKERRANK -> C++ -> INTRODUCTION -> VIRTUAL FUNCTIONS
 * Implements an inheritance using virtual function feature including static variables
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    string name;
    int age;
    virtual void putdata(){};
    virtual void getdata(){};
};
class Professor:public Person{
    public:
    int pub;
    int cur_id;
    static int id;
    Professor(){
        cur_id=++id; // sequential increment of Professor id (cur_id). Only one copy of id
    }
    void getdata(){
        cin >> name >> age >> pub;

    }
    void putdata(){
        cout << name << " " << age << " " << pub << " " << cur_id << endl;
    }
};
class Student:public Person{
    public:
    int mark[6];
    static int id;
    int cur_id;
    Student(){
        cur_id=++id; // sequential increment of student id (cur_id). Only one copy of id
    }
    void getdata(){
        cin >> name >> age >> mark[0] >> mark[1] >> mark[2] >> mark[3] >> mark[4] >> mark[5];
    }
    void putdata(){
        int sum = mark[0]+mark[1]+mark[2]+mark[3]+mark[4]+mark[5];

        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Professor::id = 0; // need to INITIALIZE STATIC variables OUTSIDE CLASS before main can access them
int Student::id = 0; // same reason as above
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}




