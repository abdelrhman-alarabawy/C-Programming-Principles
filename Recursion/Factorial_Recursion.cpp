#include <iostream>
using namespace std;

int normalFact(int n){
    int f =1;
    for(int i = n; i>=1; i--){
        f *= i;
        // f = f * i;
    }
    return f;
}

int recursionFact(int n){
    if((n == 1) || (n == 0)){
        return 1;
    }
    else{
        return (n*recursionFact(n-1));
    }
}

int main(){
    int a,b,c,res;
    cout<<"Enter value of a,b,c\n";
    cin>>a>>b>>c;
    if((a < 0) || (b < 0) || (c < 0) ){
        cout<<"can not calculate recursion of -ve number"<<endl;
        return 0;
    }
    cout<<"rec of "<<a<<"\t"<<recursionFact(a)<<endl;
    cout<<"rec of "<<b<<"\t"<<recursionFact(b)<<endl;
    cout<<"rec of "<<c<<"\t"<<recursionFact(c)<<endl;
    res = recursionFact(a) + recursionFact(b) - recursionFact(c);
    cout<<"Res = "<<res;
    return 0;
}
