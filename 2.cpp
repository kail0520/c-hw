//第二题
#include<iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
    int f_n = 0;
    int f_e = 0;
    int x = 2;
    int n = 5;
    int a[6] = {10, 1, 2, 3, 4, 5};//cof

//正常算法
    for (int i = 0; i <= n; i++)
    {
        f_e += a[i]*pow(x,i);
    }

//秦九韶算法
    f_n = a[n];
    for (int i = n; i >=1 ; i--)
    {
        f_n = f_n*x + a[i-1];
    }

//output
    cout << "exact f(2) = " << f_e << endl;
    cout << "Qing f(2) = " << f_n << endl;
    return 0;
}