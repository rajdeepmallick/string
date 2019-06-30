#include<bits/stdc++.h>
using namespace std;

string uncommon(string str1,string str2){
    unordered_set<char>s1;
    unordered_set<char>s2;
    string s;
    
    for(int i=0;i<str1.size();i++)
        s1.insert(str1[i]);
    for(int i=0;i<str2.size();i++)
        s2.insert(str2[i]); 
        
    for(int i=0;i<str1.size();i++){
        if(s2.find(str1[i])==s2.end()){
            s.push_back(str1[i]);
        }    
    }
    for(int i=0;i<str2.size();i++){
        if(s1.find(str2[i])==s1.end()){
            s.push_back(str2[i]);
        }    
    }
    sort(s.begin(),s.end());
    int k=0;
    string st;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            st.push_back(s[i]);
        }
    }
    st.push_back(s[s.size()-1]);
    return st;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1>>str2;
	    cout<<uncommon(str1,str2)<<endl;
	}
	return 0;
}
