//Transform the expression
//stack
//solved on 30-09-16

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string s;
	int t, l;
	char a;
	cin>>t;
	while(t--)
	{
		cin>>s;
		stack <char> st;
		l=s.length();
		for(int i=0; i<l; i++)
		{
			if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
			{
				st.push(s[i]);
                //cout<<"check-push-"<<s[i]<<endl;
			}
			else if(s[i]==')')
			{
				while(!st.empty())
				{
                    //cout<<"check-pop-"<<st.top()<<endl;
					a=st.top();
                    if(a!='(')
					{
                       cout<<a;
					   st.pop();
                    }
                    else
                        break;
				}
                st.pop();
			}
            else
            {
                //cout<<"check-operand-"<<s[i]<<endl;
                cout<<s[i];
            }
                
		}
		cout<<endl;
	}

	return 0;
}
