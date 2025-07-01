#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool makes_the_sentence(const char *characters, size_t count, const char *sentence)
{
    int char_freq[256] = {0};  // For storing frequencies of available characters
    int sent_freq[256] = {0};  // For storing needed frequencies from the sentence

    // Count each character in the character array
    for (size_t i = 0; i < count; ++i) {
        char_freq[(unsigned char)characters[i]]++;
    }

    // Count each relevant character in the sentence (ignore whitespaces)
    for (size_t i = 0; sentence[i]; ++i) {
        unsigned char c = sentence[i];
        if (c != ' ') {
            sent_freq[c]++;
        }
    }

    // Compare if the sentence's character requirements can be fulfilled
    for (int i = 0; i < 256; ++i) {
        if (sent_freq[i] > char_freq[i]) {
            return false;
        }
    }

    return true;
}
