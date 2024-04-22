
#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "What result get in JavaScript 1+'1' : ",
        "The Capital City of Myanmar : ",
        "The Color of the apple : "
    };

    char options[][100] = {
        "A. 1", "B. 11", "C. Nan", "D. 2", "E. 0",
        "A. Mandalay", "B. Naypyitaw", "C. Yangon", "D. Bago", "E. Shan",
        "A. orange", "B. red", "C. yellow", "D. pink", "E. green"
    };

    char Answer[3] = {'B', 'B', 'B'};
    int score = 0; // Initialize score
    char guess;
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    printf("***Quiz Game***\n");
    for (int i = 0; i < numberOfQuestions; i++) {
        printf("--------------------------------\n");
        printf("%s\n", questions[i]);
        printf("--------------------------------\n");
        for (int j = i * 5; j < (i * 5) + 5; j++) { // Changed loop increment to 5
            printf("%s\n", options[j]);
        }
        printf("Guess : ");
        scanf(" %c", &guess); // Added space before %c to consume newline character
        getchar(); // Clear newline character from the buffer

        guess = toupper(guess);

        if (guess == Answer[i]) {
            printf("Correct !\n");
            score++;
        } else {
            printf("Wrong !\n"); // Added newline character
        }
    }
    printf("Final Score : %d/%d\n", score, numberOfQuestions); // Added newline character
    printf("*********************\n");

    return 0;
}
