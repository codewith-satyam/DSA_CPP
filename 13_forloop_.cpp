// //using break statement in for loop
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int n = 50;
//     for(int i=1;i<=n;i++){
//         sum +=i;
//         if(i==5){
//             break;
//         }
//     }
//     cout << "sum is : " << sum << endl;
//     return 0;

// }

// sum of all odd numbers from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
           oddsum +=i;
        }
    }
    cout << oddsum << endl;
    return 0; 
}




