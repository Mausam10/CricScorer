#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include <time.h>
int main()
{
int score=0,bscore=0;
int sel,sele;
//sel=selected option for type of score
//sele=selected option for type of extra
int num;
char option[5];
//num=selected option for toss winner
//option=selected option for batsman or bowler
char host[10],visitor[10],date[20],t_winner[20],t_lose[20];
char toss;
int choice,a,c,i,j,over,run=0,dot;
int wplayer[20],lplayer[20];
int b;
char wplaynam[5][20],lplaynam[5][20];
int wide,nb,lb,by,extra;
int wide1,nb1,lb1,by1,extra1;
printf("\n\n\n\n\n\n\n\n");
{
printf("\n\t\t\t|-------------------------------------------------------------------------------|");
printf("\n\t\t\t|------------------------->|\tMain menu\t|<------------------------------|");
printf("\n\t\t\t|-------------------------------------------------------------------------------|");
printf("\n\t\t\t|\t\t\t[1]|\tNew game\t|\t\t\t\t|");
printf("\n\t\t\t|\t\t\t[2]|\tHistory \t|\t\t\t\t|");
printf("\n\t\t\t|\t\t\t[3]|\tExit    \t|\t\t\t\t|");
printf("\n\t\t\t|-------------------------------------------------------------------------------|");
printf("\n\t\t\t\tEnter your choice:");
scanf("\%d",&choice);
}
system("cls");
for(i=5;i>0;i--)
{
printf("\t\tLoading in.........%d",i);
sleep(1);
system("cls");
}
switch (choice)
	{
		case 1:
		{
		printf("\nDetail of the new game");
		printf("\nEnter the date:");
		scanf("%s",date);
		printf("\nEnter the name of host team:");
		scanf("%s",host);
		printf("\nEnter the name of visitor team:");
		scanf("%s",visitor);
		printf("\nEnter the number of over:");
		scanf("%d",&over);
		printf("enter the name of toss winner\n");
		printf("[1]%s\n[2]%s\n",host,visitor);
		scanf("%d",&num);
		if (num==1)
		{
		strcpy(t_winner,host);
		strcpy(t_lose,visitor);
		}
		else if(num==2) 
		{
			strcpy(t_winner,visitor);
			strcpy(t_lose,host);
		}
		printf("\nEnter the choice maide by the toss winner(striker/bowler)");
		printf("\nPress 'b' for batting \n");
		printf("Press 'bw' for bowling \n ");
		scanf("%s",option);
		if (strcmp(option,"b")==0)
	{
	printf("\n%s team's batting score caluclation\n",t_winner);
	}
	else if ((strcmp(option,"bw")==0))
	{
printf("\n%s team's bowling score caluclation\n",t_winner);
	}
		//printf("\n%s team's bowling score caluclation\n",t_lose);	
		for(i=1;i<=5;i++)
		{
		printf("[%d]Enter the name of %s's player:",i,t_winner);
		scanf("%s",wplaynam[i]);
		}
		system("cls");
		for(b=1;b<=over;b++)
		{
			//count of over
			for(c=1;c<=6;c++)
			{
			fflush(stdin);
			printf("\nEnter the player number to play\n");
			scanf("%d",&a);
			printf("Enter the type of run\n");
			printf("[1]Normal delivery\n");
			printf("[2]Extra\n");
			printf("[3]Wicket\n");
			scanf("%d",&sel);
			//sel is select option for type of run
			if(sel==3)
			{
				printf("[%d] player is out",a);
			}
			else if(sel==2)
			{
			printf("[1].Wide\n");
			printf("[2].No ball\n");
			printf("[3].Legbyes\n");
			printf("[4].Byes\n");
			printf("enter the your choice:");
			scanf("%d",&sele);
			if (sele==1)
				{
				score=score+1;
					wplayer[a]=wplayer[a]+1;
					c--;
					printf("\t%d vs %d\n",score,bscore);
					wide++;
					printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
					continue;
				}
			else if (sele==2 )
			{
				score=score+1;
				c--;
				printf("\t%d vs %d\n",score,bscore);
				sele++;
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				continue;
			}
			else if(sele==3)
			{
				printf("\nEnter the score:\t");
				scanf("%d",&run);
				score=score+run;
				printf("\t%d vs %d\n",score,bscore);
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				lb=lb+run;
				continue;
			}
			else if(sele==4)
			{
				printf("\nEnter the score:\t");
				scanf("%d",&run);
				score=score+run;
				printf("\t%d vs %d\n",score,bscore);
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				by=by+run;
				continue;
			}}
			else if (sel==1)
			{
				//each over contains 6 balls
			printf("\nEnter the score:\t");
			scanf("%d",&run);
			if (run==1)
			 	{
			 		score++;
			 		wplayer[a]++;
				}
			else if (run==2)
				{
				 score=score+2;
				 wplayer[a]=wplayer[a]+2;
				}
			else if (run==3)
				{
					score=score+3;
					wplayer[a]=wplayer[a]+3;
				}
			else if (run==4)
				{
					score=score+4;
					wplayer[a]=wplayer[a]+4;
				}
			else if (run==6)
				{
					score=score+6;
					wplayer[a]=wplayer[a]+6;
				}
			else if  (run==0)
				{
					dot++;
				}
				else 
				{
					printf("\ninvalid entry\n");
					c--;
				}
			printf("\t%d vs %d\n",score,bscore);
			printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
			printf("\n----------Next ball!------------\n");
			 }}
			 printf("\n---------Change of over---------\n");
			 extra=wide+nb+lb+by;
		}
		printf("1st inning completed");
		system("cls");
		for(i=5;i>0;i--)
		{
			printf("\t\tLoading in.........%d",i);
			sleep(1);
			system("cls");
		}
		if (strcmp(option,"b")==0)
	{
	printf("\n%s team's batting score caluclation\n",t_lose);
	}
	else if ((strcmp(option,"bw")==0))
	{
printf("\n%s team's bowling score caluclation\n",t_lose);
	}
		for(i=1;i<=5;i++)
		{
		printf("[%d]enter the name of %s's player:",i,t_lose);
		scanf("%s",lplaynam[i]);
		}
		system("cls");
		for(b=1;b<=over;b++)
		{
			//count of over
			for(c=1;c<=6;c++)	
			{
			fflush(stdin);
			printf("\nEnter the player number to play\n");
			scanf("%d",&a);
			printf("Enter the type of run\n");
			printf("[1]Normal delivery\n");
			printf("[2]Extra\n");
			printf("[3]Wicket\n");
			scanf("%d",&sel);
			//sel is select option for type of run
			if(sel==3)
			{
					printf("[%d] player is out",a);
			}
			else if(sel==2)
			{
			printf("[1].Wide\n");
			printf("[2].No ball\n");
			printf("[3].Legbyes\n");
			printf("[4].Byes\n");
			printf("enter the your choice:");
			scanf("%d",&sele);
			if (sele==1)
				{
				bscore=bscore+1;
					lplayer[a]=lplayer[a]+1;
					c--;
					printf("\t%d vs %d\n",score,bscore);
					wide1++;
					printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
					continue;
				}
			else if (sele==2 )
			{
				bscore=bscore+1;
				c--;
				printf("\t%d vs %d\n",score,bscore);
				nb1++;
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				continue;
			}
			else if(sele==3)
			{
				printf("\nEnter the score:\t");
				scanf("%d",&run);
				bscore=bscore+run;
				printf("\t%d vs %d\n",score,bscore);
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				lb1=lb1+run;
				continue;
			}
			else if(sele==4)
			{
				printf("\nEnter the score:\t");
				scanf("%d",&run);
				bscore=bscore+run;
				printf("\t%d vs %d\n",score,bscore);
				printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
				by1=by1+run;
				continue;
			}}
			else if (sel==1)
			{
			printf("\nEnter the score:\t");
			scanf("%d",&run);
			if (run==1)
			 	{
			 		bscore++;
			 		lplayer[a]++;
				}
			else if (run==2)
				{
				 bscore=bscore+2;
				 lplayer[a]=lplayer[a]+2;
				}
			else if (run==3)
				{
					bscore=bscore+3;
					lplayer[a]=lplayer[a]+3;
				}
			else if (run==4)
				{
					bscore=bscore+4;
					lplayer[a]=lplayer[a]+4;
				}
			else if (run==6)
				{
					bscore=bscore+6;
					lplayer[a]=lplayer[a]+6;
				}
			
			else if  (run==0)
				{
					dot++;
				}
				else 
				{
					printf("\ninvalid entry\n");
					c--;
				}
				printf("\t%d vs %d\n",score,bscore);
			printf("Ball:0.%d\t",c);printf("\tOver:%d.0",b);
			printf("\n---------Next ball!-----------\n");
			 }}
			extra1=wide1+nb1+lb1+by1;
			printf("\n-------------Change of over-----------\n");
			}
		system("cls");
		printf("-----------------------------------------------------------------\n");
		printf("|Number of overs:%d\t\t\t\t\t\t|",over);
		printf("\n|\t\t\t\t\t\t\t\t|\n");
		
		//make the team name of 5 exact 
		printf("|Host team name :%s\t\t\t\t\t\t|\n",host);
		
		printf("|\t\t\t\t\t\t\t\t|\n");
		printf("|Visitor team name :%s\t\t\t\t\t|",visitor);
		printf("\n|\t\t\t\t\t\t\t\t|");
	printf("\n|toss winner:%s\t\t\t\t\t\t|",t_winner);
	if (strcmp(option,"b")==0)
	{
	printf("\n|%s chose striking\t\t\t\t\t\t|",t_winner);
	}
	else if ((strcmp(option,"bw")==0))
	{
	printf("\n|%s chose bowling\t\t\t\t\t\t|",t_winner);
	}
	printf("\n|Total score by %s team is %d\t\t\t\t\t|",t_winner,score);
	printf("\n|Total score by %s team is %d\t\t\t\t\t|\n",t_lose,bscore);
	printf("|%s's score\t\t\t\t\t\t\t\n",t_winner);
	printf("|Player number \t\t\t|Score\t\t\t\t\t\t|\n");
	for(a=1;a<=5;a++)
	{
		fflush(stdin);
		printf("|[%d].%s\t\t\t\t|%d\t\t\t|\n",a,wplaynam[a],wplayer[a]);
	}
	printf("|extra:%d [%d wide,%d nb,%d lb,%d by ]\n",extra,wide,nb,lb,by);	
	printf("|%s's score\t\t\t\t\t\t\t|\n",t_lose);
	printf("|Player number\t\t\t|Score\t\t\t\t\t\t|\n");
	for(a=1;a<=5;a++)
	{
		fflush(stdin);
		printf("|[%d].%s\t\t\t\t|%d\t\t\t|\n",a,lplaynam[a],lplayer[a]);
	}
	printf("|extra:%d [%d wide,%d nb,%d lb,%d by ]\n",extra1,wide1,nb1,lb1,by1);	
	printf("\n|\t\t\t\t\t\t\t\t|\n");
	for(i=0;i<10;i++)
	{
		printf("|\t\t\t\t\t\t\t\t|\n");
	}
			for(j=0;j<65;j++)
			{
				printf("-");	
			}
	break;
	}
		case 2:
		{
		printf("History\n");
		break;
		}
		case 3:
		{
		printf("\nYou have successfully exited the application\n");
		break;
		}
		default:
	printf("\nInvalid entry!Please try again\n");
		}	
return 0;
}


	

