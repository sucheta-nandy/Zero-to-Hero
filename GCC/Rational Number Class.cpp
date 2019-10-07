#include<iostream>
using namespace std;
class RationalNum
{
    int a, b;
public:
    RationalNum() :a(0), b(1) {}
    RationalNum(int x) :a(x), b(1) {}
    RationalNum(int x, int y) :a(x), b(y) {}
    RationalNum(const RationalNum &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    void setNumerator(int item)
    {
        a = item;
    }
    void setDenominator(int item)
    {
        b = item;
    }
    int getNumerator()
    {
        return a;
    }
    int getDenominator()
    {
        return b;
    }
    RationalNum add(RationalNum obj)
    {
        RationalNum result;
        result.a = (this->a * obj.b) + (obj.a * this->b);
        result.b = this->b * obj.b;
        return result;
    }
    friend RationalNum multiply(RationalNum, RationalNum);
    void disp()
    {
        cout << a << "/" << b<<endl;
    }
};

RationalNum multiply(RationalNum obj1, RationalNum obj2)
{
    RationalNum result;
    result.a = obj1.a * obj2.a;
    result.b = obj1.b * obj2.b;
    return result;
}

int main()
{
    RationalNum r1(2, 5), r2(3, 7);
    RationalNum r3 = multiply(r1, r2);
    RationalNum r4 = r1;
    r4.disp();
    r3.disp();
    system("pause");
    return 0;
}
