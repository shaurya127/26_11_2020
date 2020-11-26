#include<bits/stdc++.h>
using namespace std;



class Queue{

	int *arr;
	int front,rear,ms,cs;
public:

	Queue(int ds=5){
		arr=new int[ds];
		front=0;
		 cs=0;
		 ms=ds;
		rear=ms-1;
	}

	bool full(){
		return cs==ms;
	}
	bool empty(){
		return cs==0;
	}
	void push(int data){
		if(!full()){
			rear=(rear+1)%ms;
			arr[rear]=data;
			cs++;
		}
	}
	void pop(){
		if(!empty()){
			front=(front+1)%ms;
			cs--;
		}
	}

	int getfront(){
		return arr[front];
	}

	~Queue(){
		if(arr!=NULL){
			delete [] arr;
			arr=NULL;
		}
	}

};


int main()
{



// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif


    Queue q(5);
    for (int i = 1; i <=6; ++i)
    {
    	q.push(i);
    }

    q.pop();
    q.pop();
    q.push(7);
    while(!q.empty()){
    	cout<<q.getfront()<<" ";
    	q.pop();
    }




}