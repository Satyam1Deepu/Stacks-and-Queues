#include<iostream>
using namespace std;
#include "StackUsingArray.cpp"

int main(){
    StackUsingArray stack(4);

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
