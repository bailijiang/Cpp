//
//  Screen.h
//  test01
//
//  Created by Bryan.bai on 12/13/17.
//  Copyright (c) 2017 home. All rights reserved.
//

#ifndef test01_Screen_h
#define test01_Screen_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class Windows_mgr {
public:
  using ScreenIndex = vector<Screen>::size_type;
  inline void clear(ScreenIndex);
  inline ScreenIndex addScreen(const Screen &);

private:
  vector<Screen> screens;
};

class Screen {
  friend void Windows_mgr::clear(ScreenIndex);

public:
  using pos = string::size_type;

  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(" ") {}
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(wd * ht, c) {}

  char get() const { return contents[cursor]; }
  char get(pos r, pos c) const { return contents[r * width + c]; }

  inline Screen &move(pos r, pos c);
  inline Screen &set(char c);
  inline Screen &set(pos r, pos c, char ch);

  const Screen &display(ostream &os) const {
    os << contents;
    return *this;
  }
  Screen &display(ostream &os) {
    os << contents;
    return *this;
  }

private:
  void do_display(ostream &os) const { os << contents; }

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  string contents;
};

inline void Windows_mgr::clear(ScreenIndex i) {
  if (i > screens.size())
    return;
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}

inline Windows_mgr::ScreenIndex Windows_mgr::addScreen(const Screen &s) {
  screens.push_back(s);
  return screens.size() - 1;
}

inline Screen &Screen::move(pos r, pos c) {
  cursor = r * width + c;
  return *this;
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch) {
  contents[r * width + c] = ch;
  return *this;
}

#endif
