#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int check(string s,int k,char c){
    int dem=1;
    int max=-99;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]&&s[i]==c){
            dem++;
            if(max<dem)max=dem;
        }else{
            dem=1;
        }
    }
    if(max>=k)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char c;
    cin >> n >>c;
    char d;
    if(c=='O')d='0';
    if(c=='X')d='1';
    string a;
    for (int i = 0; i < n; i++)
        a += '0';
    while (1)
    {
        if(check(a,5,d)==1){
            for(int i=0;i<a.size();i++){
                if(a[i]=='0'){
                    cout<<"O";
                }else{
                    cout<<"X";
                }
            }
            cout<<"\n";
        }
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '0')
            {
                ok = 1;
                a[i] = '1';
                for (int j = i + 1; j < n; j++)
                    a[j] = '0';
                break;
            }
        }
        if (ok == 0)
            break;
    }
}
