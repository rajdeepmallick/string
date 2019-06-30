#include<bits/stdc++.h>
using namespace std;

string fun(string str){
    unordered_set<char>s={'a','e','i','o','u','A','E','I','O','U'};
    string st;
    for(int i=0;i<str.size();i++){
        if(s.find(str[i])!=s.end())
            st.push_back(str[i]);
        else if(str[i]==' ')
            st.push_back(' ');
    }
    return st;
}

int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string str;
	    //cin>>str;
	    getline(cin,str);
	    str=fun(str);
	    if(!str.empty())
	        cout<<str<<endl;
	    else
	        cout<<"No Vowel"<<endl;
	}
	return 0;
}
