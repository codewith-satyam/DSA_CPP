#include<iostream>
using namespace std;
int main(){
    // Arithmetic operators +,-,*,/,%
    int a=10,b=5;
    cout << "sum = " <<(a+b) << endl;
    cout << "difference = " <<(a-b) << endl;
    cout << "product = " <<(a*b) << endl;
    cout << "division = " <<(a/b) << endl;
    cout << "floor division = " <<(a%b) << endl;
    

    // Relational operators <, <= , > , >= , != , ==
    // cout << (3<5) << endl;
    // cout << (3<=5) << endl;
    // cout << (3>5) << endl;
    // cout << (3>=5) << endl;
    // cout << (3!=5) << endl;
    // cout << (3==5) << endl;
    

    // Logical operators OR (||) , AND (&&) , NOT (!)
    cout << ((3<1) || (3<1))<<endl; // false both condition
    cout << ((3<1) || (3<5))<<endl; // one condition false or one condition is true so it is true 
    cout << ((3>1) && (3>1))<<endl; // both conditions is true so it is true
    cout << ((3>1) && (3>5))<<endl; // if any one condition is false then it will be false
    cout << (3>1) << endl; // true 
    return 0;
    



}