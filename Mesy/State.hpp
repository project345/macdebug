#pragma once


//template class std::basic_string<char>;

namespace MESY {
    class State {
    public:
        virtual void HandleInput() = 0;
        virtual void Update(float dt) = 0;
        virtual void Draw(float dt) = 0;
    };
}
