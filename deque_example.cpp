/*
 * deque_example.cpp
 *
 *  Created on: Jul 20, 2016
 *      Author: Uday Kiran
 */
#include <iostream>
#include <deque>
using namespace std;
int print_max(deque<int>& dq){
    int max=dq.front();
    for(int i=1;i<dq.size();i++){   // O(n)
        if(dq[i]>=max)
            max=dq[i];
    }
   // cout << max << " ";
    printf("%d ",max);
    return max;
}
void printKMax(int arr[], int n, int k){
   //Write your code here.
    int suba=n-k+1,temp,new_el;
    deque<int> dq;
    for(int i=0;i<k;i++){   // O(k)
        dq.push_back(arr[i]);
    }
    int max = print_max(dq);
    for(int i=1;i<suba;i++){    // O(n)
        temp = dq.front();
        new_el = arr[k+i-1];
        if(temp==max){
            dq.pop_front();
            dq.push_back(new_el);
            if(dq.back()>=temp){
                max=dq.back();
                printf("%d ",max);
            } else {
                int max = print_max(dq);
            }

        } else {
            dq.pop_front();
            dq.push_back(new_el);
            if(max>=dq.back()){
                printf("%d ",max);
            } else {
                printf("%d ",dq.back());
            }

        }



    }
    printf("\n");
}
int main(){

   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}




