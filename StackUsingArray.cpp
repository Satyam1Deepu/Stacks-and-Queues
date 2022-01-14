#include<iostream>
#include<climits>

using namespace std;
class StackUsingArray{
    int * data;
    int  nextIndex;
    int capacity;
    public:
    // Constrctor :
    StackUsingArray( int totalSize ){
    data = new int[totalSize];
    nextIndex = 0;
    capacity = totalSize;
    }
    // To Insert Element :
    void push(int element){
        if(nextIndex==capacity){
        cout<<"Stack is Full"<<endl;
        return;
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
