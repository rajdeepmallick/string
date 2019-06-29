#include<bits/stdc++.h>
using namespace std;

string left(string str){
    reverse(str.begin(),str.begin()+2);
    reverse(str.begin()+2,str.end());
    reverse(str.begin(),str.end());
    return str;
}

string right(string str){
    int d=str.size()-2;
    reverse(str.begin(),str.begin()+d);
    reverse(str.begin()+d,str.end());
    reverse(str.begin(),str.end());
    return str;
}

bool isRotated(string str1,string str2){
    return (left(str1)==str2 || right(str1)==str2);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1;
	    cin>>str2;
	    cout<<isRotated(str1,str2)<<endl;
	}
	return 0;
}
