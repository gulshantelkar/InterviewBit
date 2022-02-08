vector<string> Solution::restoreIpAddresses(string s) {
        vector<string> ans;
        
        if(s.length() <= 3 || s.length() > 12)
            return ans;
        
        for(int i = 0;i < 3;i++)
        {
            for(int j = i+1;j < i + 4 && j < s.length();j++)
            {
                for(int k = j+1;k < j + 4 && k < s.length();k++)
                {
                    string a = s.substr(0,i+1);
                    string b = s.substr(i+1,j-i);
                    string c = s.substr(j+1,k-j);
                    string d = s.substr(k+1,s.size()-1);
                    
                    if(a.length() == 0 || b.length() == 0 || c.length() == 0 || d.length() == 0)
                        continue;
                    
                    if(a[0] == '0' && a.length() > 1)
                        continue;
                    
                    if(b[0] == '0' && b.length() > 1)
                        continue;
                    
                    if(c[0] == '0' && c.length() > 1)
                        continue;
                    
                    if(d[0] == '0' && d.length() > 1)
                        continue;
                    
                    if(stoi(a) <= 255 && stoi(b) <= 255 && stoi(c) <= 255 && stoi(d) <= 255)
                        ans.push_back(a + "." + b + "." + c + "." + d);
                }
            }
        }
        return ans;
    }
