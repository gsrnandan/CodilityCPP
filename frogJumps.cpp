int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)

    int offset = Y-X;
    int res = -1;
    
    if(X == Y){
        return 0;
    };
    
    if(D >= Y){
        return 1;
    };

    auto dv = std::div(offset, D);
    res = dv.quot;
    
    if(dv.rem > 0){
        res = dv.quot + 1;
    };

    return res;


}
