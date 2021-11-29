#include <iostream>
using namespace std;

int main()
{
    char firstStr[1024], secondStr[1024];
    int begin;
    cout << "Enter first string\n";
    cin >> firstStr;

    cout << "Enter second string\n";
    cin >> secondStr;

    cout << "Enter position begin paste\n";
    int length_FirstStr = 0;
    for (;; length_FirstStr++)
    {
        if (firstStr[length_FirstStr] == '\0')
        {
            break;
        }
    }

    if ((cin >> begin))
    {
        if (begin <= 0)
        {
            int i = 0; 
            int j = 0;
            while (secondStr[i] != '\0')
            {
                for (j = length_FirstStr; j >= 0; j--)
                {
                    firstStr[j + 1 + i] = firstStr[j + i];
                }
                firstStr[i] = secondStr[i];
                i++;
            }
            cout << "String after paste\n String: " << firstStr;
        }
        else
        {
            if (begin>length_FirstStr)
            {
                int i = 0;
                while (secondStr[i] != '\0')
                {
                    firstStr[length_FirstStr + i] = secondStr[i]; 
                    i++;
                }
                firstStr[i + length_FirstStr] = '\0';
                cout << "String after paste\n String: " << firstStr;
            }
            else
            {
                int i = 0;
                int j = 0;
                while (secondStr[i] != '\0')
                {
                    for (j = length_FirstStr; j >= begin - 1; j--)
                    {
                        firstStr[j + 1 + i] = firstStr[j + i];
                    }
                }
                firstStr[begin - 1 + i] = secondStr[i];
                i++;
                firstStr[i + length_FirstStr] = '\0';
                cout << "String after paste\n String: " << firstStr;
            }
        }
    }

else
{
        cout << "You enter not number";
}
}