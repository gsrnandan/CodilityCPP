// you can use includes, for example:
// #include <algorithm>
#include <limits>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    if(len == 2)
    {
        return A[1] - A[0];
    }

    int min = std::numeric_limits<int>::max();
    int sum = 0;

    for (auto& n : A)
     sum += n;

    int P = 0;
    for(int i = 0; i < len-1; i++){
        P = P + A[i];
        //cout << "P " << P << endl;
        int P2 = sum - P;
        //cout << "P2 " << P2 << endl;
        int diff = abs(2*P - sum);
        //cout << "diff " << diff << endl;
        min = std::min(min, diff);
    }

    return min;
}
