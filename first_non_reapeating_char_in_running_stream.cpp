#include <bits/stdc++.h>
using namespace std;

int main(){




	queue<int>q;
	int freq[27]={0};   //freq table

	//running a stream until '.'
	char ch;
	cin>>ch;

	while(ch!='.'){
		// insert in queue and upadate the freq table

		q.push(ch);
		freq[ch-'a']++;

		while(!q.empty()){
			int idx=q.front()-'a';
			if(freq[idx]>1){
				q.pop();
			}
			else{
				cout<<q.front()<<endl;
				break;
			}
		}

		if(q.empty()){
			cout<<"-1"<<endl;
		}

		cin>>ch;
	}

}