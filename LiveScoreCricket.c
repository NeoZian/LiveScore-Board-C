#include<stdio.h>

void main(){

    char team1[20],team2[20];
    int wickets;
    int i=0,j=1,k,m;
    int batter_runs[11];
    int total_runs=0;
    int wide_balls=0, no_balls=0, leg_byes=0, total_extras=0;

    int total_overs;
    int total_score = 0;

    double net_runrate;
    int wickets_inhand;
    int toss_winner;

    char player_name[11][20];

    while(1){

    int sw;
    printf("\n\t\t\t\t*===============================*\n");
    printf("\t\t\t\t");
    printf("||>>Cricket Live Score Board<<||");
    printf("\n\t\t\t\t*===============================*");


    printf("\n\t\t\t\t\t1. Update status:");
    printf("\n\t\t\t\t\t2. Live Score:");
    printf("\n\t\t\t\t\t3. Exit\n");

    scanf("%d",&sw);

    switch(sw){

            case 1:

                printf("\n\t\t\t\tMatch Between:\n");
                printf("\n\t\t\t\tTeam 1 name:");

                scanf("%s",team1);
                printf("\n\t\t\t\tTeam 2 name:");
                scanf("%s",team2);

                printf("\n\t\t\t\tWhich team is batting now? Team 1 or 2(put 1 or 2):");
                scanf("%d",&toss_winner);


                printf("\t\t\t\tHow many wickets are down?:");

                scanf("%d",&wickets);


                for(i;i<wickets;i++){

                    printf("\n\t\t\t\tBatsman %d name:",j);
                    scanf("%s",&player_name[i]);
                    j++;

                    printf("\t\t\t\tScore by the batsman %s:",player_name[i]);
                    scanf("%d",&batter_runs[i]);

                    total_runs = total_runs + batter_runs[i];

                        }
                if(i==wickets){

                    printf("\n\t\t\t\tOn strike player's name:");
                    scanf("%s",&player_name[i]);

                    printf("\t\t\t\tScore by the ON-Strike batsman:");
                    scanf("%d",&batter_runs[i]);
                    total_runs = total_runs + batter_runs[i];

                    i++;

                    printf("\n\t\t\t\tNon-strike player's name:");
                    scanf("%s",&player_name[i]);
                    printf("\t\t\t\tScore by the Non-Strike batsman:");
                    scanf("%d",&batter_runs[i]);
                    total_runs = total_runs + batter_runs[i];

                        }


                printf("\n\t\t\t\tTotal wide balls:");
                scanf("%d",&wide_balls);

                printf("\n\t\t\t\tTotal no balls:");
                scanf("%d",&no_balls);

                printf("\n\t\t\t\tTotal leg byes:");
                scanf("%d",&leg_byes);

                printf("\n\t\t\t\tTotal overs played:");
                scanf("%d",&total_overs);
                printf("\n\t\t\t\t1st Innings is over!");

                total_extras = wide_balls + no_balls + leg_byes;
                total_score = total_runs + total_extras;

                net_runrate = (float)total_score / total_overs;
                wickets_inhand = 10 - wickets;

                break;

            case 2:

                    printf("\n\t\t\t\t*****************************\n");
                    printf("\t\t\t\t");
                    printf("\t|LIVE ScoreBoard|");
                    printf("\n\t\t\t\t*****************************");

                if(total_score == 0){

                        printf("\n\t\t\t\t<Please update the Score Board first>");
                        break;

                    }

                    else{





                if(toss_winner==1){
                        printf("\n");
                        printf("\t\t\t\t %s on Batting!",team1);


                    }

                    else{
                        printf("\n");
                        printf("\t\t\t\t %s on Batting!",team2);
                    }


                    printf("\n\t\t\t\tBatsman:\t\tScore:");

                    k = wickets + 1;

                    for(m=0;m<=k;m++){


                        printf("\n\t\t\t\t%s",player_name[m]);
                        printf(".........................%d",batter_runs[m]);


                    }


                    printf("\n\t\t\t\tTotal extras:%d",total_extras);
                    printf("\n\t\t\t\tTotal Score:%d",total_score);
                    printf("\n\t\t\t\tTotal Overs:%d",total_overs);
                    printf("\n\t\t\t\tNet run rate:%.2lf",net_runrate);
                    printf("\t\tWickets in hand:%d",wickets_inhand);

                    break;

                    }




            case 3:

                exit(0);
                break;

            default:
                printf("\n\t\t\t\t(Warning!!)Please enter from the options!\n\n\n\n");
                exit(0);


    }
    }

}
