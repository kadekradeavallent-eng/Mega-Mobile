#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Initial loading test only. Gameplay features are not implemented yet.
class $modify(MegaMobileMenuLayer, MenuLayer) {
    void onMoreGames(CCObject* sender) {
        FLAlertLayer::create(
            "Mega Mobile v0.1.0",
            "Mega Mobile Android 2.206 is loaded!\n\n"
            "This is an initial development shell, not the finished feature pack.\n"
            "Planned visual/practice tools include hitbox display, FPS/TPS HUD, "
            "practice helpers, trail options, and configurable controls.\n\n"
            "Online score/leaderboard manipulation and locked-content bypasses "
            "are not included.",
            "OK"
        )->show();
    }
};
