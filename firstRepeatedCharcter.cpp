#include<bits/stdc++.h>
using namespace std;

char res(string str){
    unordered_set<char>s;
    for(int i=0;i<str.size();i++){
        if(s.find(str[i])==s.end())
            s.insert(str[i]);
        else
            return str[i];
    }
    return '1';
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    char ans=res(str);
	    if(ans!='1')
	        cout<<ans<<endl;
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}
