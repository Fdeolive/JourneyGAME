cmake_minimum_required(VERSION 3.25)
project(M2OEP_fdeolive)

set(CMAKE_CXX_STANDARD 14)

add_executable(JourneyGAME_fdeolive
        GameCharacter.cpp
        GameCharacter.h
        main.cpp
        DrGoodMan.h
        SallySue.cpp
        SallySue.h
        JimmyJay.cpp
        JimmyJay.h
        TimothyTimerberland.cpp
        TimothyTimerberland.h
        JourneyGame.cpp
        JourneyGame.h
        CharacterTasks.cpp
        CharacterTasks.h
        CharacterTasks.h
        Bridge.cpp
        Bridge.h
        Snakes.cpp
        Snakes.h DanceBattle.cpp DanceBattle.h Sword.cpp Sword.h ForeignTest.cpp ForeignTest.h  DrGoodMan.cpp)


add_executable(JourneyGAME_fdeoliveTest
        GameCharacter.cpp
        GameCharacter.h  DrGoodMan.h SallySue.cpp SallySue.h JimmyJay.cpp JimmyJay.h TimothyTimerberland.cpp TimothyTimerberland.h JourneyGame.cpp JourneyGame.h CharacterTasks.cpp CharacterTasks.h CharacterTasks.h Bridge.cpp Bridge.h Snakes.cpp Snakes.h DanceBattle.cpp DanceBattle.h Sword.cpp Sword.h ForeignTest.cpp ForeignTest.h Testing.cpp Testing.cpp DrGoodMan.cpp)


