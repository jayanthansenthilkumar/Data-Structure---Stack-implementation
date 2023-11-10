#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class stack
{
private:
    node *head;
    int tos;
public:
    stack()
    {
        head = NULL;
        tos = -1;
    }
    void push(int x)
    {
        if (tos >= 4)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        node *temp = new node;
        temp->data = x;
        temp->next = head;
        head = temp;
        tos++;
    }
    void display()
    {
        if (tos < 0)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void pop()
    {
        if (tos < 0)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
        tos--;
    }
};
int main()
{
    stack s1;
    int ch;
    while (1)
    {
        cout << "\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int val;
            cout << "Enter an element: ";
            cin >> val;
            s1.push(val);
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
