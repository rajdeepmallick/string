#include<bits/stdc++.h>
using namespace std;

string strRev(string str){
    for(int i=0;i<(str.length()/2);i++){
        swap(str[i],str[str.length()-1-i]);//use of swap
    }
    return str;
}

string strrev(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i++],str[j--]);//use of swap
    }
    return str;
}

int main(){
    string str;//str.size()=0,str.empty()==true
    cout<<str.size()<<endl<<str.empty()<<endl;//str.size() str.empty()
    //0  1
	
    str="Rajdeep Mallick";
    cout<<str.size()<<endl<<str.empty()<<endl;
    //15  0
	
    cout<<str.front()<<" "<<str.back()<<endl;
    //R  k
	
    str.clear();//str.clear()
    cout<<str.size()<<" "<<str.empty()<<endl;
    //0  1
	
    for(int i=65;i<70;i++)
        str.push_back(char(i));//str.push_back()
    cout<<str.size()<<endl<<str.empty()<<endl<<str<<endl;
    //5  0  ABCDE 
    while(str.size()>0){//!str.empty()
        cout<<str<<" ";
        str.pop_back();//str.pop_back()
    }
    //ABCDE  ABCD   ABC    AB    A
    cout<<endl;
    
    /*
    string decleration,size(),capacity(),resize(),shrink_to_fit()
    push_back(),pop_back(),empty(),getline(cin,str),cin>>,str.front(),str.back()
    */
    
    str="Medha";
    string::iterator it;//iterator
    for(it=str.begin();it!=str.end();it++)
        cout<<*it;
    cout<<endl;
    //Medha
	
	
    string::reverse_iterator it_r;//reverse iterator
    for(it_r=str.rbegin();it_r!=str.rend();it_r++)
        cout<<*it_r;
    //ahdeM
	
    cout<<endl;
    cout<<str<<endl;//reverse_iterator doesn't change the string
    //Medha
	
    /*
    iterator and reverse iterator
    */
    
    string str1="Rajdeep",str2="Raju";
    cout<<str1<<" "<<str2<<endl;
    //Rajdeep    Raju
	
    str1.swap(str2);//use of swap() for whole string 
    //str.copy(ch,len,pos) also a manipulation function
    cout<<str1<<" "<<str2<<endl;
    //Raju    Rajdeep
	
	
    //reverse string
    //process one
    str="abcdef";
    cout<<strRev(str)<<" "<<str<<endl;
    //fedcba
	
	
    //preocess two
    str="1234567";
    cout<<str<<" "<<strrev(str)<<endl;
    //7654321
	
	
    //process three
    str="abcdefghijk";
    reverse(str.begin(),str.end());//this will modify the string
    cout<<str<<endl;
    //kjihgfedcba
	
	
    //use of str1.compare(str2) returns int str1.length()-str2.length()
    //if first max substring matched
    str1="12345";str2="abcd";
    if(str1.compare(str2)==0)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;
    //not equal
	
	
    if(str1.compare("1234567")==-2)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;  
    //equal
	
	
    //end of compare() 
    
    str="The geeks for geeks";
    cout<<str.find("geeks")<<" "<<str.rfind("geeks")<<endl;
    //4    14
	
	
    //use of str.find() and str.rfind()
    //if not find the position then return string::npos
    //which is equal to -1
    
    str1="Geeks";
    str2="forgeeks";
    str1.insert(5,str2);
    cout<<str1<<endl;
    //Geeksforgeeks
	
	
    str1.insert(0,str2);
    cout<<str1<<endl;
    //forgeeksGeeksforgeeks
	
	
	
    string mystr(1,'a');//convert a char to string
    cout<<mystr<<endl;
    //a
	
	
    /*
    str.append(),str.substr(),str.replace(),str.erase()
    */
    // substr(a, b) function returns a substring of b length 
	// starting from index a
	//for str.substr(a,b) str will no change
	// if second argument is not passed, string till end is 
	// taken as substring
	// erase(a, b) deletes b characters at index a
	// replace(a, b, str) replaces b characters from a index by str
	str1="Rajdeep";
	cout<<str1.substr(3,3)<<endl;//substr() doesn't change the string 
	cout<<str1<<endl;
	//dee
	//Rajdeep
	
	
	str1="Rajdeep";
	cout<<str1.substr(3)<<endl;//starting index
	cout<<str1<<endl;
	//deep
	//Rajdeep
	
	
	str1="Rajdeep";
	cout<<str1.erase(3,3)<<endl;//erase() change the string 
	cout<<str1<<endl;
	//Rajp
	//Rajp
	
	
	str1="Rajdeep";
	cout<<str1.erase(3)<<endl;//starting index
	cout<<str1<<endl;
	//Raj
	//Raj
	
	
	str1="Rajdeep";
	cout<<str1.replace(1,2,"AAAJ")<<endl;
	cout<<str1<<endl;
	//RAAAJdeep
	//RAAAJdeep
	
    return 0;
}


/*
0
1
15 0
R k
0
1
5
0
ABCDE
ABCDE ABCD ABC AB A 
Medha
ahdeM
Medha
Rajdeep Raju
Raju Rajdeep
fedcba abcdef
1234567 7654321
kjihgfedcba
not equal
equal
4 14
Geeksforgeeks
forgeeksGeeksforgeeks
a
dee
Rajdeep
deep
Rajdeep
Rajp
Rajp
Raj
Raj
RAAAJdeep
RAAAJdeep
*/
