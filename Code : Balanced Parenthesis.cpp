#include<stack>

bool isBalanced(string expression) 
{
   stack<char> s;
    /* closebrac will count number of closeing brackets if stack size (number of open bracket)
    count of closebracket will be greater than open bracket then there is something wrong in 
    order of brackets so return false
    */
    int closebrac  = 0;
    for(int  i  =  0 ; expression[i] !='\0' ; i++){
         // if ) } ] comes first then 
        if(closebrac > s.size())
            return false;
        // adding open brackets in stack
        if(expression[i] =='(' || expression[i] =='{' || expression[i] =='['){
            s.push(expression[i]);
        }
        if(expression[i] ==')' || expression[i] =='}' || expression[i] ==']'){
        closebrac++;
        }
        
    }

    // Removing from stack by checking closing brackets
    for(int  i  =  0 ; expression[i] !='\0' ; i++){
        if(expression[i] ==')' || expression[i] =='}' || expression[i] ==']'){
            s.pop();
        }
    }
    // if stack is empty then all brackets are on appropriate order
    return s.empty();
 
}
