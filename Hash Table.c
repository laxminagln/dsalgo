string S = “ababcd”

 int Frequency[26];

    int hashFunc(char c)
    {
        return (c - ‘a’);
    }
    
void countFre(string S)
    {
        for(char c = ‘a’;c <= ‘z’;++c)
        {
            int frequency = 0;
            for(int i = 0;i < S.length();++i)
                if(S[i] == c)
                    frequency++;
            cout << c << ‘ ‘ << frequency << endl;
        }
    }
