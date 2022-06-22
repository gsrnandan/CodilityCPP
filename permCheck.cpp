// you can use includes, for example:
#include <algorithm>
#include <numeric>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

 sort(A.begin(), A.end());
 int n = A.size();
 int ind = 1;
 for(int i = 0; i < n; i++)
 {
     if(A[i] != ind)
     {
         return 0;
     }
     ind++;
 }

 return 1;

}
