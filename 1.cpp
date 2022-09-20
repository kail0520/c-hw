//第一题
#include<iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
    double pi1 = 0.0;
    double pi2 = 0.0;
    double x1 = 1.0;
    double x2 = sqrt(3.0)/3.0;

//order
    int n = 100000; //展开阶数需要足够大才能保证精度

//pi=4*arctan1
    for (int i = 1; i <= n; i++)
    {
        pi1 += pow(-1,i-1)*pow(x1,2*i-1)/(2*i-1);
    }
    pi1 *= 4.0;

//pi=6*arccot(sqrt(3))
    for (int i = 1; i <= n; i++)
    {
        pi2 += pow(-1,i-1)*pow(x2,2*i-1)/(2*i-1);
    }
    pi2 *= 6.0;

//output
    cout << "pi computed by 4*arctan(1.0) = " << pi1 << endl;
    cout << "pi computed by 6*arccot(sqrt(3.0)/3.0) = " << pi2 << endl;
    return 0;
}