bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];
    int top = -1;
    for (int i = 0; i < n; i++) {
        char curr = s[i];

        if (curr == '(' || curr == '{' || curr == '[') {
            stack[++top] = curr;
        }
        else {
            if (top == -1)
                return false;
            char ch = stack[top--];
            if((curr == ')' && ch != '(') ||
            (curr == '}' && ch != '{') ||
                (curr == ']' && ch != '[')) {
                    return false;
                }
        }
    }
    return top == -1;

    
}