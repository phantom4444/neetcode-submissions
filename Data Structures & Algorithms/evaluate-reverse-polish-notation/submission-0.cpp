class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        if(n==1)
            return stoi(tokens[0]);
        stack <int> st;
        st.push(stoi(tokens[0]));
        st.push(stoi(tokens[1]));

        for(int i=2;i<n;i++){
            if( tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();

                if(tokens[i] == "+"){
                    st.push(y+x);
                } else if (tokens[i] == "-"){
                    st.push(y-x);
                } else if (tokens[i] == "*"){
                    st.push(y*x);
                } else {
                    st.push(y/x);
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};
