#include <iostream>
using namespace std;
class FunctionOverloadingDemo {
public:
    int calculateSum(int a,int b) {
        return a+b;
    }
    int calculateSum(int a,int b, int c) {
       return a+b+c;
    }
    int calculateAverage(int a,int b) {
        return (a+b)/2;
    }
    int calculateAverage(int a,int b, int c) {
       return (a+b+c)/3;
    }
};
int main(void) {
    FunctionOverloadingDemo obj;
    cout<<"sum of 20 and 15 is :"<<obj.calculateSum(20, 15)<<endl;
    cout<<"sum of 81, 100 and 10 is :"<<obj.calculateSum(81, 100, 10)<<endl;
    cout<<"average of 20 and 15 is :"<<obj.calculateAverage(20, 15)<<endl;
    cout<<"average of 81, 100 and 10 is :"<<obj.calculateAverage(81, 100, 10)<<endl;
    return 0;
}
