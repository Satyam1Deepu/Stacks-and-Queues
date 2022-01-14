#include<iostream>
template <typename T>
using namespace std;
class DynamicStack{
    T * data;
    int  nextIndex;
    int capacity;
    public:
    // Constrctor :
    DynamicStack( ){
    data = new T [4];
    nextIndex = 0;
    capacity = 4;
    }
    // To Insert Element :
    void push(T element){
        if(nextIndex==capacity){
         T * newArr = new T [2*capacity];
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
    T pop(){
        if(isEmpty()){
            cout<< "Stack is Empty" << endl;
            return 0;
        }
     nextIndex--;
     return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<< "Stack is Empty" << endl;
            return 0;
        }
     return data[nextIndex-1];
    }
    // Return the number of elements present in my stack :
    int size(){
     return nextIndex;
    }
    // Check stack is empty or not :
   bool isEmpty(){
       return nextIndex==0;
    }
};
