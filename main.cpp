#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
    if (a < b) {
        return a;
    }
    else if (b < a) {
        return b;
    }
}

template<>
char Min<char>(char a, char b) {
    printf("数字以外は代入できません\n");
    return 0;
}

int main(void) {

    printf("%d\n", Min<int>(114, 5));
    printf("%f\n", Min<float>(113.5f, 5.0f));
    printf("%lf\n",Min<double>(111, 5));
    Min<char>('a', 'b');

    return 0;
}