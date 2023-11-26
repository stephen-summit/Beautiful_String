#include <stdio.h>
#include <string.h>

int isDivine(char *word, char *beautifulChars) {
	int i;
  for (i = 0; i < strlen(word); i++) {
    if (strchr(beautifulChars, word[i]) == NULL) {
      return 0;
    }
  }
  return 1;
}

int main() {
	int i;
  char beautifulChars[26];
  scanf("%s", beautifulChars);

  int nWords;
  scanf("%d", &nWords);

  char words[nWords][12];
  for (i = 0; i < nWords; i++) {
    scanf("%s", words[i]);
  }

  for (i = 0; i < nWords; i++) {
    if (isDivine(words[i], beautifulChars)) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  return 0;
}

