//
//  Audio.hpp
//  MyFruit
//
//  Created by student on 16/2/25.
//
//

#ifndef Audio_hpp
#define Audio_hpp

#include <iostream>

class Audio{
public:
    static Audio* getInstance();
    
    void playPop();
    void prepare();
    void playCombo(int size);
    
    void playWelcome();
    void playSplatter();
    void playStart();
    void playThrow();
    void playBoom();
    Audio();
private:
    static Audio* m_instance;
};

#endif /* Audio_hpp */
