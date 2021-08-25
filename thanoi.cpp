#include <iostream>
using namespace std;

int Thanoi(int n){
    if(n==1){
      return 1;
    }
    else if(n>1){
      return 2*Thanoi(n-1)+1;
    }
    else{
      return 0;
    }
}
int main(){
  int x;
  cin>>x;
  int hanoi=Thanoi(x);
  cout<< hanoi;
  return 0;
}