#include<bits/stdc++.h>
using namespace std;
/*
string left(string str,int d){
    reverse(str.begin(),str.begin()+d);
    reverse(str.begin()+d,str.end());
    reverse(str.begin(),str.end());
    return str;
} 

bool isRotate(string str1,string str2){
    if(str1==str2)
        return true;
    for(int i=1;i<(str2.size());i++){
        if(str1==left(str2,i))
            return true;
    }
    return false;
}
*/

bool isRotate(string str1,string str2){
    if(str1.size()==str2.size() && (str1+str1).find(str2)!=-1)
        return true;
    else
        return false;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1>>str2;
	    cout<<isRotate(str1,str2)<<endl;
	}
	return 0;
}
