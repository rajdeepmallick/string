#include<bits/stdc++.h>
using namespace std;


//using hashing
void repteatedChar(string str){
    unordered_multiset<char>s;
    bool flag=false;
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    for(int i=0;i<str.size();i++){
        if(s.count(str[i])>1){
            cout<<str[i]<<endl;
            flag=true;
            break;
        }
    }
    
    if(flag==false)
        cout<<"-1"<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    repteatedChar(str);
	}
	return 0;
}
