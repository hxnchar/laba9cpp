void swap(char* firstChar, char* secondChar) {
    *firstChar += *secondChar;
    *secondChar = *firstChar - *secondChar;
    *firstChar -= *secondChar;
}