class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> vals;
        int operandA;
        int operandB;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                operandA = vals.top();
                vals.pop();
                operandB = vals.top();
                vals.pop();
                operandA = operandB + operandA;
                vals.push(operandA);
            }
            else if (tokens[i] == "-") {
                operandA = vals.top();
                vals.pop();
                operandB = vals.top();
                vals.pop();
                operandA = operandB - operandA;
                vals.push(operandA);
            } else if (tokens[i] == "*") {
                operandA = vals.top();
                vals.pop();
                operandB = vals.top();
                vals.pop();
                operandA = operandB * operandA;
                vals.push(operandA);
            }else if (tokens[i] == "/") {
                operandA = vals.top();
                vals.pop();
                operandB = vals.top();
                vals.pop();
                operandA = operandB/operandA;
                vals.push(operandA);
            } else {
                vals.push(stoi(tokens[i]));
            }
        }
        return vals.top();
    }
};