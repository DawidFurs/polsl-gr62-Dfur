#pragma once
#include <iostream>
using namespace std;

template <class I, class D, class S>
class Get {
private:
    I x, y;
    D c, d;
    S e, f;
public:
    Get(I a, I b) : x(a), y(b) {
        cout << x + y << endl;
    }
    Get(D a, D b) : c(a), d(b) {
        cout << c + d << endl;
    }
    Get(S a, S b) : e(a), f(b) {
        cout << e + f << endl;
    }
};

// przyk³ad pracy: Get<int, double, string> obj ("mleko" , "zupa");