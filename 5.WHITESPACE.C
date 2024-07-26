#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int whitespace_count = 0;
    int newline_count = 0;
    int consecutive_newlines = 0;

    printf("Enter text (Double Enter to end input):\n");

    while (consecutive_newlines < 2) {
        ch = getchar();
        if (ch == '\n') {
            newline_count++;
            consecutive_newlines++;
        } else {
            if (isspace(ch)) {
                whitespace_count++;
            }
            consecutive_newlines = 0; 
        }
    }

    
    newline_count -= 2; 
    whitespace_count -= 2; 

    printf("Number of whitespace characters: %d\n", whitespace_count);
    printf("Number of newline characters: %d\n", newline_count);

    return 0;
}