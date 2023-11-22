#include <iostream>

using namespace std;

int main(){

int A[5]={2,12,43,45,2};

int i,search_val,flag=-1;
string choice;
cout << "enter search value : " << endl;
cin >> search_val;
cout << "Enter which position do you want? first or last?" << endl;
cin >> choice;

for(i=0; i<5; i++){
    if(A[i]==search_val){

        flag = i;
        if(choice=="first"){
          break;
        }


    }

}

if(flag==-1){
   printf("%d not found\n",search_val);
}else{
    printf("%d is found at %d index\n",search_val,flag);

}


return 0;

}
