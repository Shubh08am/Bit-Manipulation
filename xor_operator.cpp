#include <bits/stdc++.h>
using namespace std;
int main(){


// two same no. xor is zero
/*
int n;
cin>>n;
int m = n^ n;
cout<< m ;
*/
// any no. xor with 0 is that no. only

/*
int x = n^0;
cout<< x ;

*/

// swap two no. uing xor

int a = 4 , b=6;

a = a^b;

b = b^ a;
// b = b^ (a^b) --> b= b^b^a --> b= 0^a --> b = a

a = a^b;
// a = (a^b) ^ a (as b=a)--> a=a^a^b ---->  a = b 

cout<< a << " " << b;
// 6   4 i.e no. are swap

/**** QUESTION****/
/* given array of integer n , all integers are present in even count except one.
 Find that one integer whichhas odd count in O(N) T.C and O(1) space 
 N <10^5
 a[i] <10^5*/

 /* Approach we will do xor of all the no. of array and even number of time appearing no.
  will become 0 as a^a = 0 and 0^b = b we will get odd no. of yime appearung number*/ 


  int n;
  cin>>n;
  int arr[n];

  int ans=0;
  for(int i=0 ; i<n ; i++)
  {
      cin>>arr[i];
      ans = ans^arr[i] ;
        } 
        cout<<ans<<endl;

return 0;
}