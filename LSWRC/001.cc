/*
Longest Substring Without Repeating Characters:
Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
*/
#include "solution.h"

int
Solution::lengthOfLongestSubstring (string s)
{
  int len = 0;
  string ss;
  for (int i = 0; i < s.size (); i++)
    {
      int pos = ss.find (s[i]);
      if (pos != string::npos)
	ss = ss.substr (pos + 1);
      ss.push_back (s[i]);
      if (len < ss.size ())
	len = ss.size ();
    }
  return len;
}
