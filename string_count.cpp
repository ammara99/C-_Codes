#include<iostream>
using namespace std;
main()
{
	string s;
	int i=0,c=0;
	cout<<"\n Enter a string : ";
	getline(cin,s);
	while(s[i]!='\0')
	{
		switch(s[i])
		{
			case 'a':
			case 'A':
				case 'E':
				case 'e':
					case 'I':
					case 'i':
						case 'O':
						case 'o':
							case 'U':
							case 'u':
			c++;
		}
		i++;
	}
	cout<<"\n The String have Vowels : "<<c;
	return 0;
}

