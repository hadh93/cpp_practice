//
// Created by hoond on 2024-01-17.
//

#ifndef CPP_PRACTICE_2_GAMEENTRY_H
#define CPP_PRACTICE_2_GAMEENTRY_H


class GameEntry { // 게임 점수 엔트리
public:
    GameEntry(const string& n="", int s=0); // 생성자
    string getName() const; // 선수 이름 가져오기
    int getScore() const; // 점수 가져오기
private:
    string name; // 선수 이름
    int score; // 선수의 점수
};


#endif //CPP_PRACTICE_2_GAMEENTRY_H
