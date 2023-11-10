#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int stk[5];
    int top=-1;
public:
    void push(int x)
    {
        if (top > 3)
        {
            cout << "Stack is overflow";
            return;
        }
        cout << "Inserted Number is :" << stk[++top] << endl;
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "stack under flow";
            return;
        }
        cout << "Deleted Element is :" << stk[top--] << endl;  
    }
    void display()                                                                                               
    {
        if (top < 0)
        {
            cout << "stack empty";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << stk[i] << " ";
        cout << endl;
    }
};
int main()
{
    int ch;
    stack st;
    while (1)
    {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice :"; 
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the element :";
            cin >> ch;
            st.push(ch);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return (0);
}
