#include <vector>
#include <map>

using namespace std;

int solution(int X, vector<int> &A) {
    map<int, bool> m;
    for (int i = 0; i < A.size(); i++) {
        int element = A[i];
        m[element] = true;
        if (m.size() == X) {
            return i;
        }
    }
    return -1;
}
