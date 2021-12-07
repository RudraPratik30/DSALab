#include <iostream>
using namespace std;

#define MAX_SIZE 4
int top = -1;
int stackArray[MAX_SIZE];

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (top == MAX_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stackArray[top] = data;
    }
    else
    {
        cout << "\nStack Overflow! No space available!💀\n";
    }
}

int pop()
{
    if (!isEmpty())
    {
        int stackEL = stackArray[top];
        top = top - 1;
        return stackEL;
    }
    else
    {
        cout << "\nStack is empty! Add some elements!💀";
        return -1;
    }
}

int main()
{
    push(34);
    push(36);
    push(23);
    push(22);
    push(100);
    push(100);

    cout << "⚡⚡⚡⚡⚡⚡⚡⚡⚡⚡\n";

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << stackArray[i] << endl;
    }

    cout << "\n\n";

    while (!isEmpty())
    {
        int data = pop();
        cout << data << endl;
    }

    return 0;
}