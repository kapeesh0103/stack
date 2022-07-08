#include<bits/stdc++.h>
using namespace std;
void print(stack<int>  s){
	while(!s.empty()){
		cout<<s.top()<<"  ";
		s.pop();
	}
	cout<<endl;
}
void insert_bottom(stack<int> &s, int x){
	
	if(s.size()==0){
		s.push(x);
		
	}
	else{
		int a=s.top();
		s.pop();
		insert_bottom(s,x);
		s.push(a);
		
		
		
	}
}
void reverse(stack<int> & s){
 
 if(!s.empty()){
 	int a=s.top();
 	s.pop();
 	reverse(s);
 	insert_bottom(s,a);
 	
 }
	
	
	
}
int main(){
	stack<int> a;
	a.push(4);
	a.push(3);
	a.push(2);
	a.push(1);
	print(a);
	reverse(a);
	print(a);
	return 0;
}
