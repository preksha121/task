#include<bits/stdc++.h>
using namespace std;
int btod(string n) 
{ 
    string num = n; 
    int dec_value = 0; 
    int base = 1; 
  
    int len = num.length(); 
    for (int i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    } 
  
    return dec_value; 
} 
string dtob(int n) 
{  
    string s = bitset<64> (n).to_string(); 
    
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    return "0"; 
}
int main()
    {unsigned long n;
	string s;
	cin>>n;
	cin>>s;int i;
const unsigned long m=n;
	if(n==1)
		{cout<<"-1"<<"\n";
		}
	else 
	{int x=btod(s);
	int  y=x-2;
	int z=x+2;
    string str1=dtob(y);
    string str2=dtob(z);
	cout<<str1<<" "<<str2;}
	return 0;}
