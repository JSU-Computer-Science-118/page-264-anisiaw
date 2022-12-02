//Anisia West J00972347
//Programming Assignment page 264 #22
#include<iostream>
#include<cmath>

using namespace std;
int main(){

int n, counter=0;

cout <<"Enter a number to check whether it is prime or not \n";
cin>>n;

  for(int i=2; i<=n-1;i++) {
    if (n%i==0) {
      cout<<n<<" is NOT a prime number \n";
      break;
    }
    counter++;
                }
  
    if (counter == n-2)
      cout << n<< " is prime \n";
   return 0;
}
