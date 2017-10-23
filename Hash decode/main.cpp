//
//  main.cpp
//  Jared's problem
//
//  Created by Julian Kosanovic on 10/22/17.
//  Copyright © 2017 Julian Kosanovic. All rights reserved.
//

//wanna take a stab at a question: In a language of your choice, find a 9 letter string of characters that contains only letters from acdegilmnoprstuw such that the hash(the_string) is 910897038977002 if hash is defined by the following pseudo-code:
//
//Int64 hash (String s)
//{
//    Int64 h = 7, String letters = "acdegilmnoprstuw" // 15
//    for(Int32 i = 0; i < s.length; i++)
//    {
//        h = (h * 37 + letters.indexOf(s[i]))
//    }
//    return h
//}
//For example, if we were trying to find the 7 letter string where hash(the_string) was 680131659347, the answer would be "leepadg".

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// variables
// problem needs 910897038977002
string letters = "acdegilmnoprstuw", s = "";
long a = 1, i = 15, h = 0;

int main()
{
    
    cout << "What hash would you like to decrypt? ";
    cin >> h;

    do
    {
        if (a != 0 && i >= 0) // Runs if hash is not a whole number after different i values are tried
        {
            a = (h - i) % 37;
            cout << "Trying i = " << i << endl;
            --i;
        }
        else
        {
            if (i < 0)
            {
                i = i + 16;
            }
            cout << "Success! Letter at index " << i << " now being added to string s." << endl;
            if (s.length() == 0)
            {
                s.append(letters, i+1, 1);
            }
            else
            {
                s.append(letters, i, 1);
            }
                h = ((h - i) / 37) + 1;
            if (h == 8)
            {
                h = h - 1;
            }
            cout << "Hash is now: " << h << endl;
            cout << "s is now: " << s << endl;
            i = 15;
            a = 1;
        }
    } while (s.length() < 9);
    
    cout << "Reversing string s..." << endl;
    reverse(s.begin(), s.end());
    
    cout << "Complete s string is " << s << endl; // Should read asparagus
    return 0;
}


