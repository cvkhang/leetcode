//https://leetcode.com/problems/valid-anagram/submissions/995191791/
//Time Complexity: O(n) ; Space Complexity: O(1)

bool isAnagram(char * s, char * t){

  if(strlen(s)!=strlen(t)){
    return false;
  };

  int i, count[27] = {0};

  for(i=0;i<strlen(s);i++){
      count[*(s+i)-97]+=1;
      count[*(t+i)-97]-=1;
  };
  for(i=0;i<strlen(s);i++){
      if(count[*(s+i)-97]!=0){
        return false;
      };
  };
  return true;

}
