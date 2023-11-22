#include <iostream>

using namespace std;
void push();
void display();
int pop();
int array_size=10,index=-1;
int sta[10];

int main(){

push();
push();
push();
display();
pop();
display();

return 0;

}

void push(){

if(index>=array_size-1){
    cout << "Stack overflow!" << endl;
}
else{
int temp;
cout << "Enter value to push : " << endl;

cin >> temp;
index++;
sta[index]=temp;

printf("Value %d updated to %d index \n",temp,index);

}


}




int pop(){

if(index==-1){
   cout << "Stack is empty!" << endl;
   return -1;
}else{
    int temp = sta[index];
    cout << sta[index] << " is deleted successfully." << endl;
    index--;
    return temp;

}

}


bool is_emptyy(){
    if(index==-1){
        return true;
    }else{
        return false;
    }

}


bool is_full(){
    if(index==array_size){
        return true;
    }else{
        return false;
    }

}




void display(){

if(index==-1){
    cout << "Stack is Empty" << endl;
}
else{

    for(int i=0; i<=index; i++){

       cout << sta[i] << endl;

    }


}


}
