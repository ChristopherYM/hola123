#include <iostream>

using namespace std;

int pos(int num){
    int p, n=2, i=0;

    while (i<=num)
    {
        for (p=2; n%p!=0; p=p+1);
        if (p==n){
                i=i+1;
                if (i==num)
                    return n;
                }
        n=n+1;
    }
}

int main()
{
    int num,n;
    cout << "ingres posicion";
    cin >> num;

    cout << pos(num);

    return 0;
}
