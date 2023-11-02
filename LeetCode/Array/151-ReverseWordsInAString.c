//reverse array function
char* reverse(char* s, int sentence_len){
    char temp;
    for(int i = 0; i < sentence_len/2; i++){
        temp = s[i];
        s[i] = s[sentence_len - 1 - i];
        s[sentence_len - 1 - i] = temp;
    }
    return s;
}

char* reverseWords(char* s) {
    int i;
    char* new_s = (char*) malloc(strlen(s) + 1);

//clean redundant spaces first
    int space_count = 0;
    int index = 0;
    int len_s = strlen(s);
    //clean leading spaces
    while(s[len_s - 1] == ' '){
        len_s = len_s - 1;
    }
    //clean trailing spaces
    while(s[0] == ' '){
        s = s + 1;
        len_s = len_s - 1;
    }
    //clean repeated spaces
    for(i=0; i < len_s; i++){
        if(s[i] == ' '){
            if(space_count == 0){
                *(new_s + index) = s[i];
                space_count = space_count + 1;
                index = index + 1;
            }
            else if(space_count != 0){
                continue;
            }
        }
        else{
            *(new_s + index) = s[i];
            index = index + 1;
            space_count = 0;
        }
    }
    new_s[index] = '\0';
    
//reverse the entire sentence
    reverse(new_s,strlen(new_s));
    //"the sky is blue" -> "eulb si yks eht"

//reverse each word in the sentence
    int letter_count = 0;
    for(i = 0; i < strlen(new_s); i++){
        if(new_s[i] == ' '){
            reverse(new_s + i - letter_count, letter_count);
            letter_count = 0;
        }
        else if(i == strlen(new_s) - 1){
            reverse(new_s + i - letter_count , letter_count + 1);
            letter_count = 0;
        }
        else{
            letter_count = letter_count + 1;
        }
    }
    return new_s;
}
