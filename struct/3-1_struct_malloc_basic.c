#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    double score;
} Student;

int main(void) {
    // 1. 구조체 동적 할당 (힙 영역)
    Student *p = malloc(sizeof(Student));
    if (p == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    // 2. 구조체 값 초기화
    strncpy(p->name, "Alice", sizeof(p->name) - 1);
    p->name[sizeof(p->name) - 1] = '\0';
    p->age = 18;
    p->score = 95.5;

    // 3. 출력
    printf("이름: %s, 나이: %d, 점수: %.1f\n",
           p->name, p->age, p->score);

    // 4. 메모리 해제
    free(p);
    p = NULL; // dangling pointer 방지

    return 0;
}