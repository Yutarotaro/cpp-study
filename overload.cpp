#include <iostream>

const int N = 10;

class ArrayLike
{
    int num[N];

public:
    ArrayLike()
    {
        for (int i = 0; i < N; ++i) {
            num[i] = i;
        }
    }

    int operator[](int i)
    {
        return num[i];
    }
};


int main()
{
    ArrayLike al;

    for (int i = 0; i < N; ++i) {
        std::cout << al[i] << std::endl;
    }
}
