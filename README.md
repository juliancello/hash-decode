# hash-decode

This contains a single program that was my solution to the following problem:
  In a language of your choice, find a 9 letter string of characters that contains only letters from acdegilmnoprstuw such 
  that the hash(the_string) is 910897038977002 if hash is defined by the following pseudo-code: Int64 hash (String s) { Int64 
  h = 7 String letters = "acdegilmnoprstuw" for(Int32 i = 0; i < s.length; i++) { h = (h * 37 + letters.indexOf(s[i])) } 
  return h } For example, if we were trying to find the 7 letter string where hash(the_string) was 680131659347, the answer 
  would be "leepadg".

You will need a compiler to run this program. If you do not have one, you can some below.
Links:
Windows - VisualStudio: https://www.visualstudio.com/downloads/
Mac - Xcode:https://developer.apple.com/xcode/downloads/
Linux - GCC: https://gcc.gnu.org/

Once the .cpp is compiled, it can accept only numbers in its current version. A version where the user can input a string to 
be converted into a hash is currently being developed.

When the program is running, simply enter the input 910897038977002 to discover the string (hint: it should be a vegetable).

Julian Kosanovic
