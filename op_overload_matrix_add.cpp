#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//#define DEBUG
class Matrix{
    public:
    vector<vector<int> > a;
    Matrix operator+(const Matrix& y){
        int n,m,i,j;
        Matrix res;

        n=y.a.size();
        m=y.a[0].size();
        // initializing the vector 'a' so that we can access it like an array later
        for (i=0;i<n;i++){
        	res.a.push_back(vector<int>(m));
        }
         for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                res.a[i][j] = a[i][j] + y.a[i][j];
            }
        }
#ifdef DEBUG
        for(i=0;i<n;i++){
                    for(j=0;j<m;j++){
                        cout << res.a[i][j] << " " ;
                    }
                    cout << endl;
                }
#endif
        return res;
    }
};

int main () {
   int cases,k;
   cout << "start entering" << endl;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}
