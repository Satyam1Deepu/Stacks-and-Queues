/*
M 1 :
*/

#include <stack>
void reverseStack(stack<int> &input, stack<int> &extra) {
    int n = input.size();
    for(int i  = 0 ; i < n ; i++){
        extra.push(input.top());
        input.pop();
    }
    n = extra.size();
    for(int i  = 0 ; i < n ; i++){
        cout<<extra.top()<<" ";
        extra.pop();
    }
}
