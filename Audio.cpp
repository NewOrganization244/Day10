//
//  Audio.cpp
//  MyFruit
//
//  Created by student on 16/2/25.
//
//

#include "Audio.h"
#include "SimpleAudioEngine.h"
using namespace CocosDenshion;
Audio* Audio::m_instance = nullptr;
Audio* Audio::getInstance(){
    if (m_instance == nullptr){
        m_instance = new Audio();
    }
    return m_instance;
}

Audio::Audio(){
    Audio::prepare();
}

void Audio::prepare(){
//    SimpleAudioEngine::getInstance()->preloadBackgroundMusic("Music/music.ogg");
//    SimpleAudioEngine::getInstance()->preloadEffect("Music/readygo.ogg");
    SimpleAudioEngine::getInstance()->preloadEffect("Music/pop.ogg");
//    SimpleAudioEngine::getInstance()->preloadEffect("Music/combo_1.ogg");
//    SimpleAudioEngine::getInstance()->preloadEffect("Music/combo_2.ogg");
//    SimpleAudioEngine::getInstance()->preloadEffect("Music/combo_3.ogg");
}

void Audio::playCombo(int size){
    if (size < 5) {
        return;
    }
//    if(size >= 10){
//        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("Music/combo_3.ogg",false);
//    }else if(size >= 7){
//        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("Music/combo_2.ogg",false);
//    }else {
//        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("Music/combo_1.ogg",false);
//    }
}

void Audio::playWelcome(){
    SimpleAudioEngine::getInstance()->playEffect("sounds/menu.mp3",true);
}

void Audio::playSplatter(){
    SimpleAudioEngine::getInstance()->playBackgroundMusic("sounds/splatter.mp3",false);
}

void Audio::playStart(){
    SimpleAudioEngine::getInstance()->playEffect("sounds/start.mp3",false);
}

void Audio::playThrow(){
    SimpleAudioEngine::getInstance()->playEffect("sounds/throw.mp3",false);
}

void Audio::playBoom(){
    SimpleAudioEngine::getInstance()->playEffect("sounds/boom.mp3",false);
}

