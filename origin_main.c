int main(){
    char letter[3]={'c','f','j'};
    char target='a';
    char output;
    int n=sizeof(letter);
    int lo = 0, hi = n;
    while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (letter[mid] > target)     hi = mid;
            else    lo = mid + 1;                 //a[mid] <= x
        }
    output = letter[lo % n];
    printf("The smallest letter greater than target is: %c\n",output);
    return 0;
}
