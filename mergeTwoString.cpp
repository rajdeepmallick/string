#include<bits/stdc++.h>
using namespace std;

string mergeString(string str1,string str2){
    int n1=str1.size(),n2=str2.size();
    int Max=max(n1,n2),Min=min(n1,n2);    
    string s;
    
    for(int i=0;i<Min;i++){
        s.push_back(str1[i]);
        s.push_back(str2[i]);
    }
    
    if(n1<n2)
        str1.swap(str2);
    
        
    for(int i=Min;i<Max;i++){
        s.push_back(str1[i]);
    }
    return s;
    
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<mergeString(s1,s2)<<endl;
	}
	return 0;
}
