#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	vector<string> st;
	vector<string> res;
	cin.ignore();
	while (q--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		while (ss>>token){
			res.push_back(token);
		}
	}
	for (int i=0;i<res.size();i++){
		if (res[i]=="PUSH"){
			st.push_back(res[++i]);
			continue;
		}
		if (res[i]=="PRINT"){
			if (st.empty()) cout<<"NONE"<<endl;
			else {
				cout<<st[st.size()-1]<<endl;
				continue;
			}
		}
		if (res[i]=="POP"){
			if (st.empty()) continue;
			else {
				st.pop_back();
				continue;
			}
		}
	}

}
