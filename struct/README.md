# 구조체(Struct) 학습 루틴 by ChatGPT
## 📅 1. 구조체 기초
- struct 선언/정의 방법 이해하기  
- 구조체 변수 선언 (struct Student s;)  
- . 연산자로 멤버 접근 (s.age = 20;)  
- 구조체 배열 (struct Student arr[10];)  
- typedef를 이용해 구조체 별칭 만들기  
- 실습: 학생 이름/나이/점수를 저장하는 구조체 작성  
- 문제풀이: 구조체 배열로 3명의 학생 정보 입력받고 평균 점수 출력  
 
## 📅 2. 구조체와 함수
- 구조체를 함수 매개변수로 전달 (Call by value vs reference)  
- 구조체 반환 함수 작성  
- 구조체 포인터(->) 이해 및 활용  
- 실습: printStudent(struct Student s) 함수 작성  
- 실습: 포인터 버전 printStudent(struct Student *s) 작성  
- 문제풀이: 구조체 배열을 정렬 (예: 점수 기준 오름차순)  
 

## 📅 3. 구조체와 동적 메모리
- malloc, calloc, free로 구조체 동적 생성  
- 구조체 배열 동적 할당  
- typedef struct {...} Student; 패턴으로 타입 단순화  
- 실습: malloc으로 동적 구조체 생성 후 값 입력/출력  
- 실습: 구조체 배열 동적 할당 → 평균 점수 계산  
- 문제풀이: 동적 구조체 배열에서 최고 점수 학생 찾기  


## 📅 4. 구조체 응용
- 구조체 안에 포인터 멤버 넣기 (문자열, 동적 배열 포함)  
- 중첩 구조체 (struct Node { struct Node *next; })  
- 연결 리스트, 트리 등 자료구조 기초 구현  
- 함수 포인터와 구조체 결합 (struct Operation { char *name; int (*op)(int,int); })  
- 실습: 연결 리스트로 학생 관리 프로그램  
- 실습: struct 안에 문자열 포인터 넣고 malloc으로 관리  
- 문제풀이: 간단한 전화번호부(이름, 번호, 이메일) 구현  
