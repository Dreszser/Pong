int ball_x(int x, int speed) { return (x + speed); }

int ball_y(int y, int speed) { return (y + speed); }

int get_speed_x(int x, int y, int sp, int racket1, int racket2) {
    if (x == 3) {
        if (y == racket1 || y == racket1 - 2 || y == racket1 + 2) {
            sp = 1;
        }
    } else if (x == 76) {
        if (y == racket2 || y == racket2 - 2 || y == racket2 + 2) {
            sp = -1;
        }
    }
    return sp;
}

int get_speed_y(int y, int sp) {
    if (y == 1) {
        sp = 1;
    } else if (y == 23) {
        sp = -1;
    }
    return sp;
}