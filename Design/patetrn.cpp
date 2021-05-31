/*

s1 = "abbdaddsabbcddefghrjr"
p1 = "ab$c*e"   

$ - 1 or more occurences of previous character
*. - 1 or more occurence of any character


write alog to check if pattern is present in the string
*/

#include <bits/stdc++.h>
using namespace std;

// To execute C++, please define "int main()"

bool findPattern(string s, string p)
{

    int stringLen = s.length();
    int patternLength = p.length();
    int j = 0, start = 0,ps;
    while(p[j]=='*') j++;
    ps=j;
    bool res=false;
    for (int i = start; i < stringLen && res!=true; i++)
    {

        while (s[i] != p[j])
            i++;

        start = i;
        i++;
        j++;

        while (j < patternLength)
        {
            if (p[j] == '$')
            {

                char prev = p[j - 1];
                while (s[i] == prev)
                    i++;
                j++;
            }

            else if (p[j] == '*')
            {
                if(j== patternLength-1)
                {
                    res=true;
                    break;
                }
                char next = p[j + 1];
                while (s[i] != next)
                    i++;
                j++;
            }

            else
            {

                if (p[j] != s[i])
                {
                    i = start;
                    j = ps;
                    break;
                }
                else
                {
                    i++;
                    j++;

                    if (j == patternLength)
                       {res=true; break;}
                }
            }
        }
    }

    return res;
}

int main()
{

    // cout << "res is " << findPattern("abbdaddsabxbcddefghrjr", "ab$c*e");
    cout << "res is " << findPattern("abbdaddsabxbcddefghrjr", "*b$c*e*");
   // cout << "res is " << findPattern("abf", "ab*");

    return 0;
}
