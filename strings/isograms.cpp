#include<iostream>
bool is_isogram(std::string str){
	int len = str.length();
	for(int i=0;i<len;i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = 'a' + (str[i] - 'A');
		}
	}
	for(int i=0;i<(len-1);i++){
		for(int j=i+1;j<len;j++){
			if(str[i] == str[j]) 
				return false;
		}
	}
	return true;	
}
int main(void){
	using namespace std;
	string str;
	cin>>str;
	cout<<is_isogram(str);
	return 0;
}
