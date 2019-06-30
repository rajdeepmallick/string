#include<bits/stdc++.h>
using namespace std;


//using hashing
string anagramPalindrome(string str){
    unordered_multiset<char>s;
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    for(int i=0;i<str.size();i++){
        if(s.count(str[i])%2==1 && s.count(str[i])>1)
            return "No";
    }
    return "Yes";
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    cout<<anagramPalindrome(str)<<endl;     
	}
	return 0;
}
