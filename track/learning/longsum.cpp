long rsum(long* start, long count) {
    if (count <= 0) {
        return 0;
    }
    return *start + rsum(start + 1, count - 1);
}

long a[2] = {1, 2};
int main() {
    rsum(a, 2);
    return 0;
}