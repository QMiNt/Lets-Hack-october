#include <bits/stdc++.h>
using namespace std;

// Function to print the entire stack
void PrintStack(stack<int> s)  
{                            
    stack<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
 
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
 
        // To restore contents of
        // the original stack.
        s.push(t); 
    }
}

int main()
{
    stack<int> s;   //Create operation

    int ch, val;
    cout<<"1) Push in stack"<<endl;       // Update operation
    cout<<"2) Pop from stack"<<endl;      // Delete element operation
    cout<<"3) Display stack"<<endl;       // Read operation
    cout<<"4) Display top"<< endl;        // Read the top element
    cout<<"5) Exit"<<endl;                // Exit menu
    do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
        case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
        }
        case 2: {
            cout<<"The element to be popped is: "<<s.top()<<endl;
            s.pop();
            break;
        }
        case 3: {
            PrintStack(s);
            cout << endl;
            break;
        }
        case 4: {
            cout<<"The top element is : "<<s.top()<<endl;
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