//
// Created by hoond on 2024-01-17.
//

#include "Scores.h"
Scores::Scores(int maxEnt) { // 생성자
    maxEntries = maxEnt; // 최대 크기를 저장
    entries = new GameEntry[maxEntries]; // 배열 공간 할당
    numEntries = 0; // 처음에는 원소 없음
}

Scores::~Scores() {
    delete[] entries; // 소멸자
}

void Scores::add(const int &e) { // 게임 엔트리 추가
    int newScore = e.getScore(); // 추가될 점수
    if (numEntries == maxEntries){ // 배열이 꽉 찼음
        if (newScore <= entries[maxEntries-1].getScore())
            return; //충분히 크지 않다 - 무시하기
    } else numEntries++; // 꽉 차있지 않다면, 엔트리 추가

    int i = numEntries-2; // 마지막 엔트리 옆에서 시작하기
    while (i >= 0 && newScore > entries[i].getScore() ){
        entries[i+1] = entries[i]; // 만약 작다면 오른쪽 이동
        i--;
    }
    entries[i+1] = e; // 빈 공간에 e 넣기
}

GameEntry Scores::remove(int i) throw(IndexOutOfBounds) {
    if ((i<0) || (i>=numEntries)) // 부적절한 색인
        throw IndexOutOfBounds("Invalid index");
    GameEntry e = entries[i]; // 제거 객체 저장
    for (int j=i+1;  j<numEntries; j++)
        entries[j-1] = entries[j]; // 엔트리 왼쪽 이동
    numEntries--; // 엔트리 수 줄이기
    return e; // 제거된 객체 반환
}