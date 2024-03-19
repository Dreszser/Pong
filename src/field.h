void field(int x, int y, int racket1, int racket2) {
    int height = 25, width = 80;
    int w, h;
    int r1_x = width - 3;
    int r2_x = width - 78;
    for (h = 0; h < height; h++) {
        for (w = 0; w < width; w++) {
            if (h == 0 || h == height - 1) {
                printf("=");

            } else if (w == 0 || w == width - 1 || w == width - 40) {
                if ((x == w) && (y == h)) {
                    printf("*");
                } else {
                    printf("|");
                }
            } else {
                if (((r1_x == w && racket1 == h) || (r1_x == w && racket1 == h - 1) ||
                     (r1_x == w && racket1 == h + 1)) ||
                    ((r2_x == w && racket2 == h) || (r2_x == w && racket2 == h - 1) ||
                     (r2_x == w && racket2 == h + 1))) {
                    printf("#");
                } else if ((x == w) && (y == h)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            if (w == width - 1) {
                printf("\n");
            }
        }
    }
}