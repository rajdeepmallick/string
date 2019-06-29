#include<bits/stdc++.h>
using namespace std;

//using hashing
string isAnagram(string str1,string str2){
    unordered_set<char>s;
    for(int i=0;i<str1.size();i++)
        s.insert(str1[i]);
    for(int i=0;i<str2.size();i++){
        if(s.find(str2[i])==s.end())
            return "NO";
    } 
    s.clear();
    for(int i=0;i<str2.size();i++)
        s.insert(str2[i]);
    for(int i=0;i<str1.size();i++){
        if(s.find(str1[i])==s.end())
            return "NO";
    }
    return "YES";
}


//using bit manipulation xor operator
string isAnagram(string str1,string str2){
    if(str1.size()!=str2.size())
        return "NO";
    int v=0;    
    for(int i=0;i<str1.size();i++){
        v=v^(int)str1[i];
        v=v^(int)str2[i];
    } 
    if(v==0)
        return "YES";
    else
        return "NO";
}

//this can be solved using sorting

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1>>str2;
	    cout<<isAnagram(str1,str2)<<endl;
	}
	return 0;
}
