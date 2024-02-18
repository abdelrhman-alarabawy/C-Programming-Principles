#include<iostream>
#include<ctime>
#include<random>
using namespace std;

void generate_random_numbers(int *p, int n){
    srand(time(NULL));
    for (int i = 0; i<n; i++){
        p[i] = 5 + rand()%96;
    }
    for (int i = 0; i<n;i++){
        cout<<p[i]<<"\t";
    }
    cout<<"\n";

}

void sort_array(int *p,int n){
    int a,b,temp;
    for(a = 0;a < n-1; a++){
        for(b = a +1;b<n;b++){
            if(p[b] < p[a]){
                temp = p[a];
                p[a] = p[b];
                p[b] = temp;
            }
        }

    }
     for (int i = 0; i<n;i++){
        cout<<p[i]<<"\t";
    }
    cout<<"\n";

}

int linear_search(int *p, int n, int key){
    for(int i =0; i<n;i++){
        if(key == p[i]){
            return i;
        }
    }
    return -1;
}

int binary_search(int *p,int first,int last,int key){
    int mid;
    while(first <= last){
        mid = (first + last)/2;
        if (p[mid] == key){
            return mid;
        } 
        else if(key > p[mid]){
            first = mid +1;
        
        }
        else{
            last = mid -1;
        }
    }
    return -1;


}


int main(){
    int arr[20],key;
    generate_random_numbers(arr,20);
    sort_array(arr , 20);
    cout<<"Enter the key number"<<endl;
    cin>>key;
    // int kk = linear_search(arr,20,key);
    int kk = binary_search(arr,0,19,key);
    if(kk == -1){
        cout<<"Number you are searching for is not in the list";
    }
    else{
        cout<<"Number found at index : "<<kk;
    }
    return 0;
}
