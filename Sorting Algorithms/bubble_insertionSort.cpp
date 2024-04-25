#include<iostream>
#include<random>
using namespace std;

class Sorting{

    private:
        void swap(int *p1,int *p2){
            int temp = *p1;
            *p1 = *p2;
            *p2= temp;
        }
        int arr[10];
    public:  
        void read(){
            srand(time(NULL));
            for(int i = 0; i < 10;i++){
                arr[i] = rand()%101; 
            }
        }
//insertion sorting
//    [1,2,0]
//    key = 2
        void insertionSort(){
            int key,j;
            for(int i = 1;i<10;i++){
                key = arr[i];
                for(j = i-1; j >= 0;j--){
                    if(key <arr[j]){
                        arr[j+1] = arr[j];
                    }else{
                        break;
                    }
                }
                arr[j+1] = key;
            }
        }
        void bubbleSort(){
            bool flag;
            for(int i = 0; i < 9; i ++){
                flag = false;
                for(int j = 0;j < 10 - 1 - i;j++){
                    if(arr[j] > arr[j+1]){
                        swap(&arr[j],&arr[j+1]);
                        flag = true;
                    }
                }
                if (!flag){
                    break;
                }
            }
        }
        void print(){
            for(int i = 0; i < 10;i++){
                cout<<arr[i]<<endl; 
            }
        }

};



int main(){
    
    Sorting s1;

    s1.read();
    cout<<"Numbers in the array before sorting \n";
    s1.print();
    cout<<"Numbers in the array After sorting \n";
    s1.bubbleSort();
    s1.print();
    return 0;
}