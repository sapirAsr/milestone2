//
// Created by michal on 14/01/2020.
//

#ifndef EX4_1_CACHEMANAGER_H
#define EX4_1_CACHEMANAGER_H
#include <string>
#include<iostream>
#include<string>
#include <map>
#include<iterator>
#include <bits/stdc++.h>
#include "fstream"

using namespace std;

class CacheManager {
public:
    bool virtual isResolved(string problem) = 0;
    string virtual popSolution(string problem) = 0;
    void virtual saveSolution(string problem, string solution) = 0;
};


#endif //EX4_1_CACHEMANAGER_H
