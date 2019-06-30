#include<bits/stdc++.h>
using namespace std;

void maxEven(string str){
    string s;
    vector<int>v;
    bool flag=false;
    for(int i=0;i<str.size()-1;i++){
        if((str[i]-'0')%2==0){
            s=str;
            swap(s[i],s[s.size()-1]);
            v.push_back(stoi(s));
            flag=true;
        }
    }
    if(flag==false){
        cout<<str<<endl;
        return;
    }    
    int max=v[0];    
    for(int i=1;i<v.size();i++){
        if(max<v[i])
            max=v[i];
    }
    cout<<max<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    maxEven(str);
	}
	return 0;
}
