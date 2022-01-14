#include<iostream>
#include"DynamicStack.cpp"
using namespace std;

int main(){
    
    DynamicStack stack();

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    cout<< stack.top() <<endl;

    cout<< stack.pop() <<endl;
    cout<< stack.pop() <<endl;
    cout<< stack.size() <<endl;
    cout<< stack.isEmpty() <<endl;
}
