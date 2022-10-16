#include <iostream>
using namespace std;

//Declaring a stack of sufficient size. Size can be increased if needed.
int stack[10000], n=10000, top=-1; //Create operation

//Function to push a new element at the top of the stack.
void push(int val) {
   if(top>=n-1)                                                                   // If number of elements in the stack exceeds its capacity.
   cout<<"Stack Overflow"<<endl;                                                     
   else {
      top++;
      stack[top]=val;
   }
}

//Function to pop the top element of the array.
void pop() {
   if(top<=-1)                                                                   // If stack is empty.
   cout<<"Stack Underflow"<<endl;                                                   
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

//To print the entire stack.
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=0; i<=top; i++)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else                                                                       // If stack is empty.
   cout<<"Stack is empty";
}

//main function
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;      // Update operation
   cout<<"2) Pop from stack"<<endl;     // Delete element operation
   cout<<"3) Display stack"<<endl;      // Read operation
   cout<<"4) Display top"<< endl;       // Read the top element
   cout<<"5) Exit"<<endl;               // Exit menu
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"The top element is : "<<stack[top]<<endl;
            break;
         }
         case 5: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}