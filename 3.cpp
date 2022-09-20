//第三题
#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
//第一小问==========================================================================

    int a,b = 0;
    int c = 1;
    int f1,f2 = 0;//f1为最大公约数，f2为最小公倍数

//input
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;

    f2 = a*b;
    if ( a < b )
    {
        swap(a,b);//保证最开始时a永远比b大
    } 
    while ( c != 0 )//余数为0时跳出循环,所以c的初始化值不能为0
    {
	    c = a%b;
	    a = b;
	    b = c;
    }
    f1 = a;
    f2 /= f1;
//output
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

//================================================================================


//第二小问==========================================================================

//    string number;
//    int i,j;
//   int number_int;

//    cout << "Input the number: ";
//    cin >> number;

//    i = 0;
//    j = number.length() - 1;
//    while (i < j)
//    {
//        char temp;
//        temp = number[j];
//        number[j] = number[i];
//        number[i] = temp;
//        i++;
//        j--;
//    }
//    cout << "The new number is: " << number << endl;

////变为整型
//    number_int = atoi(number.c_str());
//    cout << "The new number for int is: " << number_int << endl;

//================================================================================


//第三小问==========================================================================

//    int N = 10;//数列长度
////循环方法
//    int a[N];
    
//    a[0] = 1;
//    a[1] = 1;

//    cout << "a: " << a[0] << " " << a[1];
//    for (int i = 2; i <= N; i++)
//    {
//        a[i] = a[i-1] + a[i-2];
//        cout << " " << a[i];
//    }
//    cout << endl;

////递归方法
//    int Fib(int n);

//    cout << "b: ";
//    for (int i = 0; i <= N; i++)
//    {
//        cout << Fib(i) << " ";
//    }
//    cout << endl;

//================================================================================

//第四小问==========================================================================

//    int N = 3;//向量维度
//	double *a = new double [N];
//	double *b = new double [N];
//	double inner_product = 0.0;
//    double *convolution = new double [2*N-1];
//	double *exterior_product = new double [N];

////两个向量的简单赋值
//    for(int i = 0; i < N; i++)
//	{
//		*(a+i) = i+1;
//        *(b+i) = i+2;
//	}

//    cout << "The first vector is: ";
//    for(int i = 0; i < N; i++)
//	{
//		cout << *(a+i) << " ";
//	}
//    cout << endl;
//    cout << "The second vector is: ";
//    for(int i = 0; i < N; i++)
//	{
//		cout << *(b+i) << " ";
//	}
//    cout << endl;
//    cout << endl;

////内积
//	for(int i = 0; i < N; i++)
//	{
//		inner_product += *(a+i) * *(b+i);
//	}
//	cout << "The inner product is: " << inner_product << endl;

////卷积
//    for(int i = 0; i < N; i++)//卷积向量的初始化
//	{
//		*(convolution+i) = 0.0;
//	}

//    for(int i = 0; i < N; i++)
//	{
//        for (int j = 0; j < N; j++)
//        {
//            *(convolution+i+j) += *(a+i) * *(b+j);
//        }
//	}
    
//    cout << "The convolution vector is: ";
//    for(int i = 0; i < 2*N-1; i++)
//	{
//		cout << *(convolution+i) << " ";
//	}
//	cout << endl;

////外积
//    *exterior_product = *(a+1) * *(b+2) - *(b+1) * *(a+2);
//    *(exterior_product+1) = *(a+2) * *b - *a * *(b+2);
//    *(exterior_product+2) = *a * *(b+1) - *b * *(a+1);
	
//    cout << "The exterior product vector is: ";
//    for(int i = 0; i < N; i++)
//	{
//		cout << *(exterior_product+i) << " ";
//	}
//	cout << endl;
    
//    delete[] a;
//	delete[] b;
//    delete[] convolution;
//	delete[] exterior_product;

//================================================================================

//第五小问==========================================================================

//    double A[2] = {1, 0};
//    double B[2] = {0, 1};
//    double C[2] = {-1, 0};
//    double S = 0.0;//面积
//    double mp[2] = {0, 0};//重心坐标

//    S = A[0]*B[1] - A[0]*C[1] + B[0]*C[1] - B[0]*A[1] + C[0]*A[1] - B[0]*B[1];
//    cout << "The triangle area is: S = " << S << endl;

//    mp[0] = (A[0] + B[0] + C[0])/3;
//    mp[1] = (A[1] + B[1] + C[1])/3;
//    cout << "The barycentric is: x = " << mp[0] << ", y = " << mp[1] << endl;

//================================================================================

//第六小问==========================================================================

//    double A[3] = {1, 0, 0};
//    double B[3] = {0, 1, 0};
//    double C[3] = {0, 0, 1};
//    double AB[3] = {B[0]-A[0], B[1]-A[1], B[2]-A[2]};
//    double AC[3] = {C[0]-A[0], C[1]-A[1], C[2]-A[2]};
//    double *exterior_product = new double [3];
//    double S = 0.0;//面积
//    double n[3] = {0, 0, 0};

////做外积
//    *exterior_product = AB[1]*AC[2] - AC[1]*AB[2];
//    *(exterior_product+1) = AB[2]*AC[0] - AC[2]*AB[0];
//    *(exterior_product+2) = AB[0]*AC[1] - AC[0]*AB[1];

//    S = 0.5*sqrt( pow(*exterior_product,2)+pow(*(exterior_product+1),2)+pow(*(exterior_product+2),2) );
//    cout << "The triangle area in 3D is: S = " << S << endl;

//    for (int i = 0; i <=2 ; i++)
//    {
//        n[i] = *(exterior_product+i);
//    }
//    cout << "The normal vector is: n = (" << n[0] << ", " << n[1] << ", "<< n[2] << ")" << endl;
    


//==============================END===============================================

    return 0;
}

////递归子函数
//int Fib(int n)
//{
//    int m = 0;
//    if (n == 0 || n ==1)
//    {
//        m = 1;
//    }
//    else
//    {
//        m = Fib(n-1) + Fib(n-2);
//    }
//    return m;
//} 
