#include<bits/stdc++.h>
using namespace std;

/*

binary no. --->> 0 or 1

NOTE:-
Every odd no. has last bit as 1.-> as it add 1 to that no. from last bit-->  1*last bit
Every even no. has last bit as 0.

Operations -- and(&)
 or(|)
 xor(^)
 not(!)
 left shift(<<)
 right shift(>>)

 maximum value that can be stored in int is 32 bit ----> 2^32-1 

*////



//(1)  set bit

void printbinary(int num)
{ // it shows binary representation
    for(int i= 10 ; i>=0 ; --i)
    {
        cout<< ((num>>i) &1);
    }
    cout<<endl;
}



int main()
{
    printbinary(9);
    int a = 9 ;
/////00000001001 output

// checking whether bit is set
int x;
cin>>x;
if((a & (1<<x))!=0)
cout<<"Set bit\n";
else
cout<<"not set\n";


/// set bit using or

printbinary(a | (1<<1));  // it set first bit

//// unset bit using tilda i.e it invert all bit i.e not and than take and with original no.

printbinary(~(1<<3)) ;  //11111110111

printbinary(a & ~(1<<3)) ;   // 00000001011 & 11111110111 --- 00000000001
// unset 3rd bit

//// Toggle bit using xor as 1^1=0 , 0^0=0 , 1^0=1 , 0^1=1

printbinary(a ^ (1<<3)) ;// 00000000001 , it toggle 3rd bit from 1->0
                          
printbinary(a ^ (1<<2)) ; // 00000001101 , it toggle 2nd bit from 0->1

/// Counting No. of set bit 
int cnt=0;

for(int i=31 ; i>=0;--i)  // 32 bit no.
{
    if((a & (1<<i))!=0) // i.e 1 
    cnt++ ;
}
cout<<cnt<<"\n";             //2


/*********OR OR Using inbuilt Function *********//////
// __builtin_popcount works only for int.
cout<<__builtin_popcount(a) << endl;  //2

// __builtin_popcount can work  for long long when specified -->ex.

cout<<__builtin_popcountll(1ll<<35) << endl;  


    return 0;

}