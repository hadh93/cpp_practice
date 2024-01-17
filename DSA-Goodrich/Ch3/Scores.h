//
// Created by hoond on 2024-01-17.
//

#ifndef CPP_PRACTICE_2_SCORES_H
#define CPP_PRACTICE_2_SCORES_H


class Scores { // 게임의 높은 점수들을 저장한다.
public:
    Scores(int maxEnt=10); // 생성자
    ~Scores(); // 소멸자
    void add(const GameEntry& e); // 게임 엔트리 추가
    GameEntry remove(int i) // i번째 엔트리 삭제
        throw(IndexOutOfBounds);
private:
    int maxEntries; // 엔트리들의 최대 숫자
    int numEntries; // 엔트리들의 실제 숫자
    GameEntry* entries; // 게임 엔트리들의 배열
};


#endif //CPP_PRACTICE_2_SCORES_H
