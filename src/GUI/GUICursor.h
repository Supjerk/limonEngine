//
// Created by engin on 14.06.2018.
//

#ifndef LIMONENGINE_CURSOR_H
#define LIMONENGINE_CURSOR_H


#include "GUIImageBase.h"

class GUICursor: public GUIImageBase {
    bool hidden=false;
public:
    GUICursor(GLHelper *glHelper, AssetManager *assetManager, const std::string &imageFile) : GUIImageBase(glHelper,
                                                                                                       assetManager,
                                                                                                       imageFile) {}

public:

    void render() override;


    bool isHidden() {
        return hidden;
    }

    void hide() {
        this->hidden = true;
    }

    void unhide() {
        this->hidden = false;
    }
};


#endif //LIMONENGINE_CURSOR_H
