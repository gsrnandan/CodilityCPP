// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    // Defining HashMap in C++
    unordered_map<int, int> hash;
    unsigned int size = A.size();
    // Putting all elements into the HashMap
    for(unsigned int i = 0; i < size; i++)
    {
        hash[A[i]]++;
    }
    // Iterate through HashMap to check an element
    // occurring odd number of times and return it
    for(auto i : hash)
    {
        if(i.second % 2 != 0)
        {
            return i.first;
        }
    }
    return -1;
}
