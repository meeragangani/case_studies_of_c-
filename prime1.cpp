#include <iostream>
using namespace std;
int main()
{
  int n,r,sum=0,temp;
  cout<<"Enter the Number=";
  cin>>n;
 temp=n;
 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
if(temp==sum)
cout<<"Number is Palindrome.";
else
cout<<"Number is not Palindrome.";
  return 0;
}

//Get the number from user
//Hold the number in temporary variable
//Reverse the number
//Compare the temporary number with reversed number
//If both numbers are same, print palindrome number
//Else print not palindrome number
