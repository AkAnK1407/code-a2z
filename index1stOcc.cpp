class Solution {
public:
    int strStr(string haystack, string needle) {
     
            if(needle.size()<=haystack.size())
            {
                int index=haystack.find(needle);
                return index;
            }
        return -1;

    }
};
