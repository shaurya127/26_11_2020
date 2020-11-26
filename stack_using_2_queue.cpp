#include<bits/stdc++.h>

using namespace std; 

template<typename T>

class Stack {
    queue<T> q1,q2;
    public:
       
        void push(T data){
            q1.push(data);
        }

        void pop(){
            //remove first n-1 element from q1 to q2
            //interchange the name of q1 and q2

            if(q1.empty()){
                return;
            }
            while(q1.size()>1){
            T element=q1.front();
            q2.push(element);
            q1.pop();
            }
            //remove the last element
            q1.pop();
            //swap the name of q1 and q2
            swap(q1,q2);
        }

        int top(){
            while (q1.size()>1)
            {
                T element=q1.front();
                q2.push(element);
                q1.pop();
            }
            //1 element in q1 left
            T element=q1.front();
            q1.pop();
            q2.push(element);
            swap(q1,q2);
            return element;
        }

        int size(){
           return  q1.size() + q2.size();
        }

        bool emepty(){
            return size()==0;
        }
};


int main()
{
    Stack <int>s;

    s.push(11);
    s.push(12);
    s.push(13);
    while (!s.emepty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;

}