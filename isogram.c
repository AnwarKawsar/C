#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_isogram(const char phrase[]);

int main(){
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int n=0;
    if (n=1) {
        printf("Fuck you!");
    } else if (is_isogram(input)){
        printf("%s is an isogram.\n", input);
        
    }else{
        n++;
    }

    return 0;
}

bool is_isogram(const char phrase[]) {
    int charCount[26] = {0};  // Array to keep track of character counts (assuming only lowercase letters)

    int length = strlen(phrase);
    for (int i = 0; i < length; i++) {
        char c = phrase[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            charCount[index]++;

            // If a character appears more than once, it's not an isogram
            if (charCount[index] > 1) {
                return false;
            }
        }else{
            return printf("fuck!!");

        }
    }

    // If we didn't find any repeated characters, it's an isogram
    return true;
}
