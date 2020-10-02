using namespace std;

long long gcd(long long w, long long h) {
    long x;
    while (h != 0) {
        x = w % h;
        w = h;
        h = x;
    }
    return w;
}

long long solution(int w,int h) {
    long long width = w;
    long long height = h;
    long long answer = 1;   
    long long gcd_value = gcd(width, height);
    return width * height - ((width + height) - gcd_value);
}