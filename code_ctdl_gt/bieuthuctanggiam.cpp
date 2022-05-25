#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,i,j;
	cin>>t;
	string s;
	for (i=1;i<=t;i++){
		cin>>s;
		string key="";
		stack<int> st;
		for (j=0;j<=s.size();j++){
			st.push(j+1);
			if (j==s.size() || s[j]=='I'){
				while (!st.empty()){
					key+=to_string(st.top());
					st.pop();
				}
			}
		}
		cout<<"Test "<<i<<": "<<key<<endl;
	}
}
