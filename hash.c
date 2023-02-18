void hash(char *dest, char *str) {
    size_t size = strlen(str);
    char _x[size + 1]; 
    
    for (int i = 0; i < size; i++) {
        char c = abs(str[i] + (str[i] + 128)); 
        if (c < 0) c *= -1; 
        if (c < 30) c += 30;\
        if (c == ' ') c += 65;
        _x[i] = c; 
    } 
    //printf("Hashing %s -> %s\n", str, _x);
    strcpy(dest, _x);  
}
