#include<bits/stdc++.h>
using namespace std;
int maxlen(string);
int main()
{
    string str="()()()((";
    cout<< maxlen(str) << endl;
    return 0;
}
int maxlen(string str){
    stack<int>stk;
    int n=str.length();
    stk.push(-1);
    int result=0,i;
    for(i=0;i<n;i++){
        if(str[i]=='(')
            stk.push(i);
        else
        {
            stk.pop();
            if(!stk.empty())
                result=max(result,i - stk.top());
            else
                stk.push(i);
        }
    }
    return result;
}

