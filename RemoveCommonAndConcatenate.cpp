#include<bits/stdc++.h>
using namespace std;

string concat(string str1,string str2){
    unordered_set<char>s1;
    unordered_set<char>s2;
    for(int i=0;i<str1.size();i++)
        s1.insert(str1[i]);
    for(int i=0;i<str2.size();i++)
        s2.insert(str2[i]);
    
    string s;
    
    for(int i=0;i<str1.size();i++){
        if(s2.find(str1[i])==s2.end())
            s.push_back(str1[i]);
    } 
    for(int i=0;i<str2.size();i++){
        if(s1.find(str2[i])==s1.end())
            s.push_back(str2[i]);
    } 
    return s;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1>>str2;
	    string s=concat(str1,str2);
	    if(!s.empty())
	        cout<<s<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}
