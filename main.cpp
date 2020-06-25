#include <iostream>

using namespace std;

int main()
{
    char arr1[]="LISTEN",arr2[]="SILENT",ch='y';
    int i,j,flag2=0,counter=0;
    while(ch!='n')
    {
        for(i=0; arr1[i]!='\0'; i++)
        {
            counter++;
        }
        for(i=0; i<counter; i++)
        {
            for(j=0; j<counter; j++)
            {

                if(arr1[i]==arr2[j])
                {
                    flag2 +=1;
                    break;
                }
            }
        }
        if(flag2==counter)
            cout<<"\nIt is an anagram";
        else
            cout<<"\nIt is not an anagram";
        cout<<"\nDo you want to continue?";
        cin>>ch;

    }
    return 0;
}
