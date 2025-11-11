#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string exp) {
        stack<char> s;
	for(int i = 0; i < exp.length(); i++){
		if(exp[i] == '['|| exp[i] == '(' || exp[i] == '{'){
			s.push(exp[i]);
		}
		else if(exp[i] == ')'){
			if(s.empty() || s.top() != '('){
				return false;
			}
			s.pop();
		}
		else if(exp[i] == ']'){ 
			if(s.empty() || s.top() != '['){  
				return false;
			}
			s.pop();
		}
		else if(exp[i] == '}'){
			if(s.empty() || s.top() != '{'){  
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
    }
};