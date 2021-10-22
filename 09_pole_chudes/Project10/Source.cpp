#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool match(char*word, char*your_word, int n)
	{
		int a=0;
		int j=0;
		while (j<n)
		{
			if(your_word[j]==word[j])
			{
				a++;
				j++;
			}
			else
				j++;
		}
			return(a!=n);
	}
int main()
{
	char word[100];
	char your_word[100];
	cout<<"Enter your word ";
	cin>>word;
	std::cout<<"Guess your word\n";

	int n=strlen(word);
	for(int i=0; i<n; i++)
	{
		your_word[i]='_';
		cout<<your_word[i];
	}

	
	

	while(match(word, your_word, n))
	{
		string your_letter;
		char m_letter;
		cout<<"Enter one letter\n";
		cin>>your_letter;
		m_letter=your_letter[0];
		for(int k=0; k<n; k++)
		{
			if(word[k]==m_letter)
			{
				your_word[k]=m_letter;
			}
		}

		for(int i=0;i<n;i++)
		{
			cout<<your_word[i]<<"\n";
		}
	}
	cout<<"You guessed the word\n";
	return(0);
	
}
