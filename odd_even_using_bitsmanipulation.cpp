#include <iostream>
using namespace std;
int main(){
/* logic
if any number in its binary form has last bit as 1 than it is a oddd no.
 else if its 0 than its a even number. as it is a deciding bit
 
 doing and operation with 1 of any number gives lastbit*/

int x;
cin>>x;

if((x&1)) 
{
cout<<"odd number" ;
}

else if ((x&0)) 
{
cout<<"even number";
}
return 0;
}