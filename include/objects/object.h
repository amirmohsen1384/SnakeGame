#pragma once

#include "core/graphics.h"
#include "core/point.h"

class Object {
    public:
        Object(Point const &pos);

        virtual void draw();
        virtual void erase();

        Point CurrentPoint() const;
        void SetCurrentPoint(Point const &value);

    protected:
        virtual std::string GetSkin() const = 0;
        virtual Graphics::Color GetForeground() const = 0;
        virtual Graphics::Color GetBackground() const = 0;

        std::string GetSpaces() const;

    protected:
        Point _current;
};