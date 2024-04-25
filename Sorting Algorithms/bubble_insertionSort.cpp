#include<iostream>
#include<random>

using namespace std;


class Odometer{
    private:
        double miles;
        double fuelCons;
    public:
        Odometer(){
            miles = 0;
            fuelCons = 0;
        }
        Odometer(double m,double f){
            miles = m;
            fuelCons = f;
        }
        void set_miles(){
            miles = 0;
        }
        void set_fuelCons(double f){
            fuelCons = f;
        }
        void addMiles(double m){
            miles += m;
        }
        double numerOfgallons(){
            return (miles/fuelCons);
        }



};
class AAA{

    private:
        int sum;

    public:

        AAA(){
            sum = 10;
        }
        AAA(int z){
            sum = 0;
        }
        AAA(int z,int x){
            sum = z + x;
        }
        // void initial(){
        //     sum = 0;
        // }

        void add(int n){
            sum += n;
        }

        void print(){
            cout<<sum<<endl;
        }
};


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
    //key = 2
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

// [9,1,0,10]


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
    s1.print();
    s1.insertionSort();
    s1.print();

    

    return 0;
}