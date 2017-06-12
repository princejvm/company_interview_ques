#include<bits/stdc++.h>
using namespace std;
char a[105];
stack<char> s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        int i=0;
        int n=strlen(a);
        while(i<n)
        {
            if(a[i]=='('||a[i]=='{'||a[i]=='[')
                s.push(a[i]);
            else if(a[i]==')'||a[i]=='}'||a[i]==']')
            {
                if(s.empty()==1)
                    break;
                else
                {
                    char ch=s.top();
                    s.pop();
                    if(a[i]==')')
                    {
                        if(ch!='(')
                            break;
                    }
                    else if(a[i]=='}')
                    {
                        if(ch!='{')
                            break;
                    }
                    else if(a[i]==']')
                    {
                        if(ch!='[')
                            break;
                    }
                }
            }
            i++;
        }
        if(s.empty()==0||i<n)
            {
                printf("not balanced\n");
                while(s.empty()!=1)
                {
                   s.pop();
                }
            }
        else
            printf("balanced\n");
    }
    return 0;
}
