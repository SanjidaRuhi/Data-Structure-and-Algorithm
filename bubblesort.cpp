#include<iostream>
using namespace std;

int main(){

int a[10]={90,10,20,74,12,92,50,21,29,34};


for(int j=0; j<10; j++){

for(int i=0; i<9; i++){

    if(a[i]>a[i+1]){
    int temp = a[i];
    a[i] = a[i+1];
    a[i+1] = temp;

    }

}
}

for(int j=0; j<10; j++){

    cout << a[j] << endl;

}



return 0;
}
