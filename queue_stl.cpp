#include <bits/stdc++.h>
using namespace std;


int main(){




    queue<int>q;
   
    for (int i = 1; i <=15; ++i)
    {
    	q.push(i);
    }

    while(!q.empty()){
    	cout<<q.front()<<" ";
    	q.pop();
    }
    
    cout<<q.front();

}



