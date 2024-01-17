//
// Created by hoond on 2024-01-17.
//

#include "GameEntry.h"
GameEntry::GameEntry(const int &n, int s) // 생성자
    : name(n), score(s) {}
string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }
