// removes the root node of the heap repeatedly
#include <iostream>
#include <utility>
using namespace std;
pair<int*, int> delheap(int* x,int y);
int main(){
	int list[]={77,55,60,50,30,44,55,22},k=0; //max heap array
	int L=sizeof(list)/sizeof(*list);
	// cout << "array size" << L << endl;
	int output[L];
		int* a=(int*)malloc(sizeof(list));
		a=list;
		pair<int*,int> result; result.first=a;
		for(int n=L;n>=1;--n){
			//for(j=0;j<n;j++){
				//			cout << *(result.first+j) << " ";
					//	}

			result = delheap(result.first,n);
			output[k]=result.second;
			k++;

			// cout << "item removed is " << result.second << endl;
		}
	for(int i=0;i<L;i++){
		cout << output[i] << endl;
	}
		return 0;
}
pair<int*,int> delheap(int* ptr,int n){
	int item, last, item_loc, left, right;
	item=*ptr; // capturing root of heap (highest element)
	last=*(ptr+n-1); n=n-1; item_loc=1;left=2;right=3;
	while(right<=n+1){
		if(last>= *(ptr+left-1) && last>= *(ptr+right-1)){  //correct position for last element
		*(ptr+item_loc-1)=last;
		return make_pair(ptr,item);
		}
		if(*(ptr+left-1)>=*(ptr+right-1)){
			*(ptr+item_loc-1)=*(ptr+left-1);
			item_loc=left;
		} else {
			*(ptr+item_loc-1)=*(ptr+right-1);
			item_loc=right;
		}
		left=2*item_loc; right=left+1;
	}
	//handling the case where the element does not have a right child anymore
	if(left==n && last<*(ptr+left-1))
		item_loc=left;
	*(ptr+item_loc-1)=last;
	return make_pair(ptr,item);
}
