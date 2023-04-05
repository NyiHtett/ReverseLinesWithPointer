#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char buffer[100];
    char* lines[10];
    for(int i = 0; i < 100; i++)
    {
        char ch;
        cin.get(ch);
        buffer[i] = ch;
    }
    lines[0] = &buffer[0];//point first character
    
    int count = 1;
    for(int i = 0; i < 100; i++)
    {
        if(buffer[i] == '\n')
        {
            buffer[i] = '\0';
            if(count < 10)
            {
                lines[count] = &buffer[i+1];
                count++;
            }
        }
    }
    
    cout << " This is reversed "<< endl;
    for(int i = --count; i >= 0 ; i--)
    {
        cout << lines[i] << endl;
    }
    cout << endl;
}
   


