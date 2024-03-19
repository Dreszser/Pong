int r_y2(int y, char input) {
    int err_y = y;
    if (input == 'k' || input == 'K') {
        if (y > 2) {
            err_y = y - 1;
        }
    } else if (input == 'm' || input == 'M') {
        if (y < 22) {
            err_y = y + 1;
        }
    }
    return err_y;
}

int r_y1(int y, char input) {
    int err_y = y;
    if (input == 'a' || input == 'A') {
        if (y > 2) {
            err_y = y - 1;
        }
    } else if (input == 'z' || input == 'Z') {
        if (y < 22) {
            err_y = y + 1;
        }
    }
    return err_y;
}

/* int racket_read(char input, int r1_y, int r2_y) {
    char temp;
    char newline;
    int output;
    scanf("%c%c", &temp, &newline);
    if((temp == 'a' || temp == 'A' || temp == 'z' || temp == 'Z') && newline == '\n') {
        output = r_y(r1_y, temp);
    } else if((temp == 'k' || temp == 'K' || temp == 'm' || temp == 'M') && newline == '\n') {
        output = r_y2(r2_y, temp);
    } 
    return output;
} */