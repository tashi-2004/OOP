//i222041
//Tashfeen Abbasi
//BS_DS_D
#include <iostream>

using namespace std;

long permute(int n, int r) {
    if (n < r) {
        return 0;
    }
    else if (r == 0) {
        return 1;
    }
    else {
        return n * permute(n - 1, r - 1);
    }
}

int main()
{
    cout<<permute(7,4);

    return 0;
}