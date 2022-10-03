#include<bits/stdc++.h>
using namespace std;
void reve(stack<int> &s, int a)
{
    if(s.empty()){
        s.push(a);
    }
    else{
        int temp=s.top();
        s.pop();

        reve(s,a);
        s.push(temp);

    }
    
}
 void sorted(stack<int> &s){
        if(!s.empty()){
         int temp=s.top();
         s.pop();
         sorted(s);
         reve(s,temp);

        }
    }
    void print(stack<int> s){
        while(!s.empty()){
            cout<<s.top()<<"  ";
            s.pop();
        }
    }
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    print(s);
    cout<<endl;
    sorted(s);
    print(s);

    return 0;
}