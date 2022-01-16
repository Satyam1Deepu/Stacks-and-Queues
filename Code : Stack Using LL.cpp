/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	Node * head;
    int size;
   public:
    // Implement the Constructor
    Stack() {
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/
 // Implement the getSize() function
    int getSize() {
       return size;
    }
 // Implement the isEmpty() function
    bool isEmpty() {
       return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node * newNode = new Node(element);
        // if(head==NULL){
        //     // means this is the first node so
        // head = newNode;
        // }else{
         // if it is normal node not first then 
        newNode ->next = head;
        head = newNode;
            size++;
      //  }
    }
     // Implement the pop() function
    int pop() {
        // Incase stack is  empty 
        if(isEmpty())
            return -1;
      int ans =  head ->  data;
        Node * deallo = head;
        head = head -> next;
        delete deallo;
            size--;
        return ans;
    }
 // Implement the top() function
    int top() {
        // Incase stack is  empty 
        if(isEmpty())
            return -1;
       return head -> data;
    }
};
