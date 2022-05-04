#define abs(x) x > 0 ? x : x * -1

void hash(char *dest,char *str) {
    char _x[1024 * 4];; 
    
    for (int i = 0; i < strlen(str); i++) {
        char c = abs(str[i] + (str[i] + 128)); 
        if (c < 0) c *= -1; 
        if (c < 30) c += 30;\
        if (c == ' ') c += 65;
        _x[i] = c; 
    } 
    //printf("Hashing %s -> %s\n", str, _x);
    strcpy(dest, _x);  
} 
