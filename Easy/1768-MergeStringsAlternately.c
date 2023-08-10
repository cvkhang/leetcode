//Time Complexity: O(n)

char * mergeAlternately(char * word1, char * word2){
    char* merged;
    merged = (char*) malloc(strlen(word1)+strlen(word2)+1 * sizeof(char));
    merged[strlen(word1)+strlen(word2)] = '\0';
    int i,j=0;
    int k=0;

    for(i=0; i<strlen(word1)+strlen(word2); i++){
        if( (i%2==0 || k==strlen(word2)) && word1[i-k] >= 'a' && word1[i-k] <= 'z' && j < strlen(word1) ){
            merged[i]=word1[i-k];
            j=j+1;
        }
        else if( (i%2!=0 || j==strlen(word1)) && word2[i-j] >= 'a' && word2[i-j] <= 'z' && k < strlen(word2)){
            merged[i]=word2[i-j];
            k=k+1;
        }
    }
    return merged;
}
