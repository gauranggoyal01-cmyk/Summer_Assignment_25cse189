#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][100] = {
        "What is the size of int in C (in bytes)?",
        "Which keyword is used to define a constant?",
        "What does printf() do?",
        "Which symbol is used for single-line comment in C?",
        "What is the output of 5 % 2?"
    };
    char options[5][4][50] = {
        {"1", "2", "4", "8"},
        {"var", "const", "define", "let"},
        {"Takes input", "Prints output", "Defines function", "None"},
        {"//", "/*", "#", "%%"},
        {"0", "1", "2", "3"}
    };
    int answers[5] = {3, 2, 2, 1, 2};
    int score = 0, choice;
    printf("=== C Programming Quiz ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Q%d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < 4; j++) printf("  %d. %s\n", j + 1, options[i][j]);
        printf("Your answer: ");
        scanf("%d", &choice);
        if (choice == answers[i]) { printf("Correct!\n\n"); score++; }
        else printf("Wrong! Correct answer: %d\n\n", answers[i]);
    }
    printf("=== Quiz Over ===\n");
    printf("Your score: %d / 5\n", score);
    if (score == 5) printf("Excellent!\n");
    else if (score >= 3) printf("Good job!\n");
    else printf("Keep practicing!\n");
    return 0;
}
