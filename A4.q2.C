#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 11
Struct Player {
    Char name[50];
    Int runs_scored;
};

Int main() {
    Struct Player team[MAX_PLAYERS];
    Int num_players, total_runs = 0;
    Printf(“Enter number of players (max %d): “, MAX_PLAYERS);
    Scanf(“%d”, &num_players);
    For (int I = 0; I < num_players; i++) {
        Printf(“Enter name of player %d: “, i+1);
        Scanf(“%s”, team[i].name);

        Printf(“Enter runs scored by %s: “, team[i].name);
        Scanf(“%d”, &team[i].runs_scored);

        Total_runs += team[i].runs_scored;
    }
    Printf(“\nTotal runs scored by the team: %d\n”, total_runs);

    Return 0;
}

