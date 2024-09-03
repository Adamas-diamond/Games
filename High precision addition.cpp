#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string addStrings(const string &num1, const string &num2) {
	int i=num1.size()-1;
	int j=num2.size()-1;
	int carry=0;
	string result;
	while (i>=0||j>=0||carry){
		int sum=carry;
		if (i>=0) {
			sum+=num1[i]-'0';
			i--;
		}
		if (j>=0) {
			sum+=num2[j]-'0';
			j--;
		}
		carry=sum/10;
		result.push_back(sum%10+'0');
	}
	reverse(result.begin(), result.end());
	return result;
}
int main(){
	string num1,num2;
	cin>>num1>>num2;
	string result=addStrings(num1, num2);
	cout<<result<<endl;
	return 0;
}
