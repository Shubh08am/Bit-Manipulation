#include <iostream>
using namespace std;
int main(){
int n , i;
cin>>n>>i;
int m= n<<i; // m= n*2^i 
cout<<"left shift "<< n << "ans is:" << m << endl;

int v= n>>i; // v= n/2^i 
cout<<"right shift "<< n << "ans is:" << v << endl;

return 0;
}