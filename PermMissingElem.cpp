// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    
    if(len < 1){
        return 1;
    }

    if(len == 1 && A[0] != 1)
    {
        return 1;
    }
    else if(len == 1 && A[0] == 1)
    {
        return 2;
    }

    sort(A.begin(), A.end());
    int res = A[len-1] + 1;
    int ind = 1;
    for(int i=0; i<len; i++)
    {
        if(ind != A[i]){
            res = ind;
            break;
        }
        ind++;
    };
    return res;

}
