// you can use includes, for example:
#include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    int len = A.size();

    if(K == len || K == 0){
        return A;
    };

    if(len == 1 || len == 0)
    {
        return A;
    }

    if( K > len){
        K = K%len;

    }

    vector<int> resultArray;
    int offsetInd = abs(K - len);
    
    for (int i = offsetInd; i < len; i++) {
        resultArray.push_back(A[i]);
    };

    for(int i = 0; i < offsetInd; i++)
    {
        resultArray.push_back(A[i]);
    };

    return resultArray;

}
