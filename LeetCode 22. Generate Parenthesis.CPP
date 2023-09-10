class Solution {
private:
    vector<string> output;
    string s;
    int l;
    
public:
    vector<string> generateParenthesis(int n) {
        
        this -> l = 2 * n;
        
        generateParenthesis("(", 1, 0, n);
        return output;
    }
    
private:
    void generateParenthesis(string s, int open_brackets, int closed_brackets, int n) {
        
        if (s.length() == l)
        {
            output.push_back(s);
            return;
        }
        
        if (open_brackets < n)
            generateParenthesis(s + "(", open_brackets + 1, closed_brackets, n);
        
        if (closed_brackets < open_brackets)
            generateParenthesis(s + ")", open_brackets, closed_brackets + 1, n);
            
    }
};