#include <stdio.h>
struct Player{
char *name[10];
int runScore;
int wicket;
}cric[20], temp;

int main()
{
    printf("Enter player name:\n run score:\n wicket:\n for 20 players\n");
    for(int i=0; i<20; i++){
        scanf("%s", &cric[i].name);
        scanf("%d", &cric[i].runScore);
        scanf("%d", &cric[i].wicket);
    }

    for(int i=0; i<20; i++){
        for(int j=i+1; j<20; j++){
            if(cric[i].wicket<cric[j].wicket){
                    temp=cric[i];
                     cric[i]=cric[j];
                     cric[j]=temp;
            }
        }
    }

    for(int i=0; i<20; i++){
        printf("player%d's name: %s \t\t runScore: %d \t\t wicket: %d \n", i+1, cric[i].name, cric[i].runScore, cric[i].wicket);
    }
    return 0;
}
