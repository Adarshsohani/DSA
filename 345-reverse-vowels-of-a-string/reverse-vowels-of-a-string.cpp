class Solution {
public:
    bool isvowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            return true;
        }
        else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            return true;
        }
        else {
            return false;
        }
    }
    string reverseVowels(string s) {
        
        int i =0;
        int j=s.length()-1;
        while(i<j)
        {
            if(!isvowel(s[i]))
            {
                i++;
            }
            else if(!isvowel(s[j]))
            {
                j--;
            }
            else if(isvowel(s[i])&&isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else
            {
                i++;
                j--;
            }

        }
        return s;
    }
};