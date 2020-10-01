#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{

    int N;
    cin >> N; //enter number of test cases

    for (int i = 0; i < N; i++) 
	{
        string str;
        cin >> str; //enter a string

        for (int j = 0; j < str.length(); j++) 
		{
            if (j % 2 == 0)
            {
            	cout << str[j];
			}
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) 
		{
            if (j % 2 != 0)
            {
            	cout << str[j]; //will divide the string into 2 parts, odd and even. odd characters will be in one place and even charaters in another.
			}
        }

        cout << endl;
    }

    return 0;
}
