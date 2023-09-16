// Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;
const int MAX_SIZE = 100;

class stack {
    int top;
    int item[MAX_SIZE];

public:
    stack():top (-1){}

    void push(int Element) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack full on push";
        }
        else
        {
            top++;
            item[top] = Element;
        }
   }

    bool IsEmpty() 
    {

        return top < 0;

    }

    void pop() {
        if (IsEmpty()) {
            cout << "Stack empty on pop";
        }
        else
            top--;
    }

    void getTop(int& stackTop) {
        if (IsEmpty()) {
            cout << "Stack empty on getTop";
        }
        else {
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

        void print() {
            for (int i = top; i >= 0 ; i--)
            {
                cout << item[i] << " ";
            }
            cout << "]";
            cout << endl;
        }


};



int main()
{


    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    int y = 0;
   s.getTop(y);
    s.print();
}


