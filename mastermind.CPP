// master mind
// guys this is the base line program
//that i have prepared
//we need to edit text display
//and beautify//

//the scoring is done
//regards
//Amritha Anil


#include<cstdlib>
#include<time.h>
#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include<math.h>
#include <graphics.h>
#include<stdlib.h>


int main()
{
	//clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	getbkcolor();
	setbkcolor(4);
	int arr[5],i,j;
	char name[25];
	for(i=0;i<5;i++)
	{
		randomize();
		arr[i]=random(5)+1;
	}
	cout<<"\n##########################################################  WELCOME TO THE MASTER-BLASTER MIND GAME  ########################################################## ";
	cout<<"\n\t\t Dear User , Enter Your Name - ";
	gets(name);
	cout<<"\n\t\t\t\t ----* RULES *---- ";

	cout<<"\n\t 1. The Computer will set the 5-Digit Code For You Randomly using digits (1-5)";
	cout<<"\n\t 2. You will get 7 chances only to hack the code correctly.";
	cout<<"\n\t 3. You need to follow the indicators below to hack the code in quick attempts";
	cout<<"\n\t 4. '$'- means u got the correct no. at the right place";
	cout<<"\n\t 5. '*' - means u've guessed the no. but still u need to put it at the right place.";
	cout<<"\n\n\t\t\t\t ----* Best-Of-Luck *---- ";
	cout<<"\n\n\t\t\t  Lets begin !! ";
	int x=0;
	int a,b,score=0;
	int brr[5];
	for(i=0;i<7;i++)
	{
		cout<<"\n\n\t\t This is your attempt no-  "<<i+7<<endl;
		for(j=0;j<5;j++)
		{
			cin>>brr[j];
			cout<<endl;
		}
		cout<<endl;
		for(b=0;b<5;b++)
		{
			if (brr[b]==arr[0]||brr[b]==arr[1]||brr[b]==arr[2]||brr[b]==arr[3]||brr[b]==arr[4]||brr[b]==arr[5])
			{
				if (brr[b]==arr[b])
				{
					cout<<'$'<<"\t";
					x++;
					score+=5;
				}
				else
					cout<<'*'<<"\t";
					score+=2;
			}
			else continue;

		}
		cout<<endl;
		if(x==5)
		{
			cout<<"\n\n\t\t WOW!!!! Congratulations......You hacked the code....."<<endl;
			break;
		}
		else
		{
			cout<<"\n\n\t\t Hmmm........More to go......"<<endl;
			cout<<"\n\n\t\t your score is  "<<score<<endl;
		}
	}
	if(x!=5)
		cout<<"\n\n\t\t Oooopss.....you couldnt hack the code...............Better luck next time ..................."<<endl;
	puts(name);
	cout<<"  Thanks for playing"<<endl;
	getch();
	closegraph();
	return 0;

}

