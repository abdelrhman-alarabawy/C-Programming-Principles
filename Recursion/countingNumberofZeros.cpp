#include <iostream>
using namespace std;

int countZero(int n){
    if(n == 0){
        return 1;
    }
    else if(n < 10){
        return 0;
    }
    else if(n%10 == 0){
        return (countZero(n/10) + 1);
    }
    else{
        return countZero(n/10);
    }
}

int main(){
    int n,count;
    cout<<"Enter your number"<<endl;
    cin>>n;
    count = countZero(n);
    cout<<"Number of zeros in your number "<<n<<" equals "<<count;
    return 0;
}
