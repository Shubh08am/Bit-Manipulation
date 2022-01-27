#include <bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i=10 ; i>=0 ; --i)
    {
        cout << ((num >>i) & 1);

    }
    cout<<endl;
}
int main(){

/// 1)  checking even or odd no. 
/* also can directly check as n&1 where n is a number.*/

/*
  for(int i=0 ; i<8 ; i++)
  {
      printbinary(i); 

      if( i &1)
      cout<<"odd\n"; // as odd no. has last bit as 1
      else cout<<"even\n";
  }
  */

//  2)multiply or divide number by 2 (integer division)

/*
int n ;
cin>>n;

cout << (n>>1) << endl; // divide by 2
cout<< ( n<<1) <<endl; // multiply by 2
*/

/// 3) UPPERCASE to lowercase and vice versa

/* first printing binary value for uppercase and lowercase letters to see pattern*/

/*
for( char c= 'A' ; c<='E' ; c++)
{
    cout<<c<<endl;
    printbinary(int(c));
}

for( char c= 'a' ; c<='e' ; c++)
{
    cout<<c<<endl;
    printbinary(int(c));
}
*/
/*
A                        a
00001000001             00001100001
B                       b
00001000010             00001100010
C                       c
00001000011            00001100011
D                       d
00001000100             00001100100
E                        e
00001000101              00001100101
*/
//i.e 5th bit of uppercase letter is not set i.e only difference and if we set it it get converted to lowercase letter.


// now converting uppercase to lowercase by using left shift
char A = 'A';
char a = A | (1<<5);
cout<<a<<endl;

// now converting  lowercase to upper.. by using ~ concept as we will unset 5th bit
cout<< char(a & (~(1<<5)))<<endl;



return 0;
}