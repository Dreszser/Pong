#include <math.h>
#include <stdio.h>

#include "ball.h"
#include "field.h"
#include "rackets.h"

int main() {
    int curr_x = 20;
    int curr_y = 12;

    int speed_x = 1;
    int speed_y = 1;

    int racket1_y = 12;
    int racket2_y = 12;

    char temp, newline;

    int score_1 = 0;
    int score_2 = 0;

    int player;

    while (score_1 != 21 || score_2 != 21) {
        scanf("%c%c", &temp, &newline);
        if ((temp == 'a' || temp == 'A' || temp == 'z' || temp == 'Z') && newline == '\n') {
            racket2_y = r_y1(racket2_y, temp);

            speed_x = get_speed_x(curr_x, curr_y, speed_x, racket2_y, racket1_y);
            speed_y = get_speed_y(curr_y, speed_y);

            curr_x = ball_x(curr_x, speed_x);
            curr_y = ball_y(curr_y, speed_y);
            printf("\033[0d\033[2J");
            field(curr_x, curr_y, racket1_y, racket2_y);
            if (curr_x == 1) {
                score_1++;
                curr_x = 40;
                curr_y = 12;
                speed_x = 1;
            } else if (curr_x == 78) {
                score_2++;
                curr_x = 40;
                curr_y = 12;
                speed_x = -1;
            }
            printf("Player 1: %d\t\t\t\t\t\t     Player 2: %d\n", score_1, score_2);

        } else if ((temp == 'k' || temp == 'K' || temp == 'm' || temp == 'M') && newline == '\n') {
            racket1_y = r_y2(racket1_y, temp);

            speed_x = get_speed_x(curr_x, curr_y, speed_x, racket2_y, racket1_y);
            speed_y = get_speed_y(curr_y, speed_y);

            curr_x = ball_x(curr_x, speed_x);
            curr_y = ball_y(curr_y, speed_y);
            printf("\033[0d\033[2J");
            field(curr_x, curr_y, racket1_y, racket2_y);
            if (curr_x == 1) {
                score_1++;
                curr_x = 40;
                curr_y = 12;
                speed_x = 1;
            } else if (curr_x == 78) {
                score_2++;
                curr_x = 40;
                curr_y = 12;
                speed_x = -1;
            }
            printf("Player 1: %d\t\t\t\t\t\t     Player 2: %d\n", score_1, score_2);
        } else {
            speed_x = get_speed_x(curr_x, curr_y, speed_x, racket2_y, racket1_y);
            speed_y = get_speed_y(curr_y, speed_y);

            curr_x = ball_x(curr_x, speed_x);
            curr_y = ball_y(curr_y, speed_y);

            printf("\033[0d\033[2J");
            field(curr_x, curr_y, racket1_y, racket2_y);
            if (curr_x == 1) {
                score_1++;
                curr_x = 40;
                curr_y = 12;
                speed_x = 1;
            } else if (curr_x == 78) {
                score_2++;
                curr_x = 40;
                curr_y = 12;
                speed_x = -1;
            }
            printf("Player 1: %d\t\t\t\t\t\t     Player 2: %d\n", score_1, score_2);
        }
    }
    if (score_1 == 21) {
        player = 1;
    } 
    if(score_2 == 21) {
        player = 2;
    }
    printf("Player %d Won!", player);
    return 0;
}