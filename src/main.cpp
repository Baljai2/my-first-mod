#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/CCKeyboardDispatcher.hpp>

using namespace geode::prelude;

bool g_noclipEnabled = true;

// 1. Listen for the 'T' Key
class $modify(CCKeyboardDispatcher) {
    bool dispatchKeyboardMSG(enumKeyCodes key, bool isPressed, bool isKeyRepeat) {
        if (key == enumKeyCodes::KEY_T && isPressed && !isKeyRepeat) {
            g_noclipEnabled = !g_noclipEnabled; 
            return true;
        }
        return CCKeyboardDispatcher::dispatchKeyboardMSG(key, isPressed, isKeyRepeat);
    }
};

// 2. Run the Noclip
class $modify(PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        if (g_noclipEnabled) return;
        PlayLayer::destroyPlayer(player, object);
    }
};
