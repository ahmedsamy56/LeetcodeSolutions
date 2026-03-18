class Solution {
public:
    int static op(int n1 , int n2 , char s){
        //cout<<n1 << " "<<n2 <<" "<<s<<endl;
        if(s == '+'){
            return  n1 + n2 ;
        }else if(s == '*'){
            return  n1 * n2;
        }else if(s == '/'){
            return n2 / n1;
        }else if(s == '-'){
            return n2 - n1;
        }

        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for (int i = 0; i < tokens.size(); ++i) {
            if(tokens[i] == "+" || tokens[i] == "-" ||  tokens[i] == "*" || tokens[i] == "/" ){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                st.push(op(n1 , n2 ,  tokens[i][0]));
            }else{
                st.push(stoi(tokens[i]));
            }

        }

        return  st.top();
    }
};