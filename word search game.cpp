#include<iostream>

using namespace std;
int main()
{
	
	cout<<"----------Wellcome To Hangman Search Game----------"<<endl;
	cout<<"-----This game is work as a guess the word-----"<<endl;
    cout<<"-----you have given hidden word which you have to guess-----"<<endl;
	char word[7];
	word[0]='*';
	word[1]='*';
	word[2]='*';
	word[3]='*';
	word[4]='*';
	word[5]='*';
	word[6]='*';
	
	

	
	cout<<"Guess the hidden Word : "<<word<<endl;
	cout<<word<<endl;
	int win=2,k=1,chance1=1;
	char guess,input;
	
	while(k==1)
	{
		
	
	cout<<"Please Guess  hidden  Alphabet word . you have 3 chances if you guess the correct alphabet then you can continues otherwise gameover : "<<endl;
		
	cin>>guess;
	 if(win==7)
	{
cout<<"CRICKET"<<endl<<endl;
		
		cout<<"you won "<<endl;
	break;
	}
	else if( guess=='K' || guess=='k'||guess=='E' || guess=='e'||guess=='I' || guess=='i'||guess=='R' || guess=='r'||guess=='C' || guess=='c'||guess=='T' || guess=='t')
	{
			
		if(guess=='C' || guess=='c')
		{		word[0]='C';
		        word[3]='C';
			win++;
			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;		
			
		}	
		
		else if(guess=='R' || guess=='r')
		{
			word[1]='R';
			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;		
			win++;
		}
		
		else if(guess=='i' || guess=='I')
		{
			word[2]='I';

			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;					win++;
		}
		
		else if(guess=='k' || guess=='K')
		{
			word[4]='K';
			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;		
			win++;
		}
		
		else if(guess=='e' || guess=='E')
		{
			word[5]='E';
			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;		
			win++;
		}
		
		else if(guess=='t' || guess=='T')
		{
			word[6]='T';
			for(int i=0;i<=6;i++)
			cout<<word[i];
		
		cout<<endl;		
			win++;
		}
		
	
	
	}
	
	
	else if(chance1<3)
	{
		cout<<"you guess Wroung Alphabet. please guess correct "<<endl;
	chance1++;
	}
	else{
		cout<<"you loose the game";
		
	break;	
		
	}
	
	
	
}
cout<<"want to play again y/n";
cin>>input;
if(input=='y'||input=='Y')
{
	    cout<<"-----you have given hidden word which you have to guess-----"<<endl;
	char word[8];
	word[0]='*';
	word[1]='*';
	word[2]='*';
	word[3]='*';
	word[4]='*';
	word[5]='*';
	word[6]='*';	
	word[7]='*';
	
	int win=2,k=1,chance1=1;
	

	
	cout<<"Guess the hidden Word : "<<endl;
	cout<<"********"<<endl;

	
	while(k==1)
	{
	cout<<"Please Guess  hidden  Alphabet word . you have 3 chances if you guess the correct alphabet then you can continues otherwise gameover : "<<endl;
		
	cin>>guess;
	
	 if(win==7)
	{
		cout<<"FOOTBALL"<<endl;

		cout<<"you won "<<endl;
	break;
	}
	else if( guess=='f' || guess=='F'||guess=='o' || guess=='O'||guess=='T' || guess=='t'||guess=='b' || guess=='B'||guess=='a' || guess=='A'||guess=='L' || guess=='l')
	{
			
		if(guess=='F' || guess=='f')
		{		word[0]='F';
			win++;
			for(int i=0;i<=7;i++)
			cout<<word[i];
		cout<<endl;
			
		}	
		
		else if(guess=='O' || guess=='o')
		{
			word[1]='O';
			
			word[2]='O';
			for(int i=0;i<=7;i++)
			cout<<word[i];
		
		cout<<endl;
			win++;
		}
		
		else if(guess=='t' || guess=='T')
		{
			word[3]='T';
			for(int i=0;i<=7;i++)
			cout<<word[i];
			win++;
			
		cout<<endl;
		}
		
		else if(guess=='B' || guess=='b')
		{
			word[4]='B';
			for(int i=0;i<=7;i++)
			cout<<word[i];
			win++;
			
		cout<<endl;
		}
		
		else if(guess=='A' || guess=='a')
		{
			word[5]='A';
			for(int i=0;i<=7;i++)
			cout<<word[i];
			win++;
			
		cout<<endl;
		}
		
		else if(guess=='l' || guess=='L')
		{
			word[6]='L';
			
			word[7]='L';
			for(int i=0;i<=7;i++)
			cout<<word[i];
			win++;
			
		cout<<endl;
		}
		
	
	
	}
	
	
	else if(chance1<3)
	{
		cout<<"you guess Wroung Alphabet. please guess correct "<<endl;
	chance1++;
	}
	else{
		cout<<"you loose the game";
		
	break;	
		
	}
	
	
	
}

}

	return 0;
}
