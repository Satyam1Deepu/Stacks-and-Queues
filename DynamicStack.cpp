#include<iostream>
#include<climits>

using namespace std;
class DynamicStack{
    int * data;
    int  nextIndex;
    int capacity;
    public:
    // Constrctor :
    DynamicStack( ){
    data = new int[4];
    nextIndex = 0;
    capacity = 4;
    }
    // To Insert Element :
    void push(int element){
        if(nextIndex==capacity){
        int * newArr = new int [2*capacity];
        // data copying in Big array :
        for(int i =  0 ; i < capacity ; i++){
            newArr[i] = data[i];
        }
        capacity *=2;
        delete [] data;
        data = newArr;

        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // Delete Element : Element we are deleting , we are return that as  well
    int pop(){
        if(isEmpty()){
            cout<< "Stack is Empty" << endl;
            return INT_MIN;
        }
     nextIndex--;
     return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<< "Stack is Empty" << endl;
            return INT_MIN;
        }
     return data[nextIndex-1];
    }
    // Return the number of elements present in my stack :
    int size(){
     return nextIndex;
    }
    // Check stack is empty or not :
    isEmpty(){
       return nextIndex==0;
    }
};
