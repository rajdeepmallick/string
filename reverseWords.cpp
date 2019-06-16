//my complete code
#include<bits/stdc++.h>
using namespace std;

//stack implementation
string reverseWords(string str){
    if(str.length()==0)
        return str;
    stack<string>s;
    string st;
    for(int i=0;i<str.length();i++){
        if(str[i]!='.'){
            st.push_back(str[i]);
        }
        else{
            s.push(st);
            st.clear();
        }
    }
    s.push(st);
    if(s.size()==1)
        return str;
    str.clear();
    while(s.size()>1){
        str=str+s.top();
        str.push_back('.');
        s.pop();
    }
    str=str+s.top();
    s.pop();
    return str;
}


//normal implementaion
string reverseWords(string str){
    string s=str;//storing if no '.' is not found
    reverse(str.begin(),str.end());
    vector<int>v;
    for(int i=0;i<str.length();i++){
        if(str[i]=='.')
            v.push_back(i);
    }
    if(v.size()==0)
        return s;
    //returning the original string if no '.' is not found
    
    string::iterator i1=str.begin(),i2=str.begin()+v[0];
    for(int i=0;i<v.size();i++){
        reverse(i1,i2);
        i1=str.begin()+v[i]+1;
        if(v.size()==i+1)
            break;
        i2=str.begin()+v[i+1];
    }
    reverse(i1,str.end());
    return str;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    cout<<reverseWords(str)<<endl;
	}
	return 0;
}
