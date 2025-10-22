#include "pangram.h"
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence) {
    if (!sentence) {
        return false;
    }
    bool valuesFound[25] = {false};

    int len = (int) strlen(sentence);
    for (int i = 0; i < len; i++) {
        char word = tolower(sentence[i]);
         if (word >= 'a' && word <= 'z') {
             valuesFound[word - 'a'] = true;
         }
    }
    for (int i = 0; i < 26; i++) {
        if (!valuesFound[i]) return false;
    }
    return true;
}