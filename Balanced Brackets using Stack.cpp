#include <bits/stdc++.h>


using namespace std;
bool isBalanced(string);

int main()
{
	string expr;
	cout<<"Enter"<<endl; 
	cin>>expr;

	if(isBalanced(expr))
		cout<<"Balanced";
	else
		cout<<"Not Balanced";
	return 0;
}

bool isBalanced(string s)
{
	stack<char> st;
	int n = s.size();
	bool ans = true;
	for(int i=0;i<n;i++)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty() and st.top()=='('){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
		else if(s[i]==']'){
			if(!st.empty() and st.top()=='['){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
		else if(s[i]=='}'){
			if(!st.empty() and st.top()=='{'){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}

	}	
	if (!st.empty())
		return false;
	return ans;

}
