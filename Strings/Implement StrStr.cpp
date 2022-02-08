int Solution::strStr(const string haystack, const string needle) {

    int index = -1;
    if (haystack.empty() || needle.empty())
        return index;
    for (auto i = 0; i<haystack.length(); ++i)
    {
        if (haystack[i]==needle[0])
        {
            index = i;
            int j = 0;
            while (j<needle.length())
            {
                if (needle[j]==haystack[i] && i<haystack.length())
                {
                    ++i; ++j;
                }
                else
                {
                    index = -1;
                    i -= j;
                    break;
                }
            }
            if (j==needle.length())
                return index;
        }
    }
    return index;
}
