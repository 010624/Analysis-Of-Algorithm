#include<stdio.h>
#include<string.h>

int match(char st[], char pat[]);

int main() {
    char st[100], pat[100];
    int status;
    printf("*** Naive String Matching Algorithm ***\n");
    printf("Enter the String:\n");
    fgets(st, sizeof(st), stdin);  // Safely read the input
    st[strcspn(st, "\n")] = 0;     // Remove the newline character

    printf("Enter the pattern to match:\n");
    fgets(pat, sizeof(pat), stdin);
    pat[strcspn(pat, "\n")] = 0;   // Remove the newline character

    status = match(st, pat);
    if (status == -1)
        printf("\nNo match found");
    else
        printf("Match has been found at position %d.", status + 1);  // Convert from 0-indexed to 1-indexed for display
    return 0;
}

int match(char st[], char pat[]) {
    int n = strlen(st);
    int m = strlen(pat);
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && st[i + j] == pat[j]) {
            j++;
        }
        if (j == m)
            return i;  // Return 0-indexed position
    }
    return -1;
}

