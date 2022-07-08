#include<bits/stdc++.h>
using namespace std;
void print(stack<int>  s){
	while(!s.empty()){
		cout<<s.top()<<"  ";
		s.pop();
	}
	cout<<endl;
}
void sortedInsert(stack<int> &s, int a){
	if(s.empty() || a>s.top()){
		s.push(a);
	}
	else{
		int temp=s.top();
		
		s.pop();
		sortedInsert(s,a);
		s.push(temp);
		
		
	}
}
void sortedStack(stack<int> &s){
	if(!s.empty()){
		int temp=s.top();
		s.pop();
		sortedStack(s);
		sortedInsert(s,temp);
		
	}
}
 
int main(){
	stack<int> s;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		s.push(x);
	}
	print(s);
	sortedStack(s);
	 print(s);
	 return 0;
}
