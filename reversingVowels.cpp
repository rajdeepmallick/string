//my solution

#include<bits/stdc++.h>
using namespace std;

string vowelsReverse(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            s.push(str[i]);
        }
    }
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=s.top();
            s.pop();
        }
    }
    return str;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin>>str;
	    cout<<vowelsReverse(str)<<endl;
	}
	return 0;
}
