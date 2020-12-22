//第一题
#include<iostream>
using namespace std;
int main(void)
{
    int fun(int a,int b);
    int a,b,c;
    cout<<"请输入一个整数A:";
    cin>>a;
    cout<<"请输入一个整数B:";
    cin>>b;
    c=fun(a,b);
    cout<<"得到整数C的值是:"<<c;
    return 0;
}
int fun(int a,int b)
{
    int c1,c2,c3,c4; //分别对应千位十位百位个位
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    return(c1*1000+c2*100+c3*10+c4);
}
