/*
 * op_overload_friend_example.cpp
 *
 *  Created on: Jul 15, 2016
 *      Author: Uday Kiran
 */
/**
 * HACKERRANK -> C++ -> CLASSES -> BOX IT!
 * Overloading of < and << operators with a friend function for accessing private members
 * overloaded functions are passed arguments by value and not reference (not a good practice!)
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated,BoxesDestroyed;


class Box{
  int l,b,h;
    public:
    Box(){
        l=0;b=0;h=0;
        BoxesCreated++;
    }
    Box(int x,int y, int z){
        l=x;b=y;h=z;
        BoxesCreated++;
    }
    Box(Box &box){
        l=box.l;b=box.b;h=box.h;
        BoxesCreated++;
    }
    ~Box(){
        BoxesDestroyed++;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        long long vol = (long long)l*b*h;
        return vol;
    }
    bool operator<(Box &box){
        if(l<box.l){return true;}
        else if(l==box.l && b<box.b){return true;}
        else if(l==box.l && b==box.b && h<box.h){return true;}
        return false;
    }
    friend ostream& operator<<(ostream&, Box);

};
 ostream& operator<<(ostream &out,const Box box){
        out << box.l << " " << box.b << " " << box.h ;
        return out;
    }
 void check2()
 {
 int n;
 cin>>n;
 Box temp;
 for(int i=0;i<n;i++)
     {
     int type;
     cin>>type;
     if(type ==1)
         {
             cout<<temp<<endl;
         }
         if(type == 2)
         {
             int l,b,h;
             cin>>l>>b>>h;
             Box NewBox(l,b,h);
             temp=NewBox;
             cout<<temp<<endl;
         }
         if(type==3)
         {
             int l,b,h;
             cin>>l>>b>>h;
             Box NewBox(l,b,h);
             if(NewBox<temp)
             {
                 cout<<"Lesser"<<endl;
         }
             else
             {
                 cout<<"Greater"<<endl;
             }
         }
         if(type==4)
         {
             cout<<temp.CalculateVolume()<<endl;
         }
         if(type==5)
         {
             Box NewBox(temp);
             cout<<NewBox<<endl;
         }

     }
 }

 int main()
 {
     BoxesCreated = 0;
     BoxesDestroyed = 0;
     check2();
     cout<<"Boxes Created : "<<BoxesCreated<<endl<<"Boxes Destroyed : "<<BoxesDestroyed<<endl;
 }




