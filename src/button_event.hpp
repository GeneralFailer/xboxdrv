/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2010 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_XBOXDRV_BUTTON_EVENT_HPP
#define HEADER_XBOXDRV_BUTTON_EVENT_HPP

#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>

#include "button_filter.hpp"
#include "uinput_deviceid.hpp"

class uInput;
class ButtonEvent;

typedef boost::shared_ptr<ButtonEvent> ButtonEventPtr;

class ButtonEvent
{
public:
  static const int MAX_MODIFIER = 4;

  static ButtonEventPtr invalid();
  static ButtonEventPtr create_key(int code);
  static ButtonEventPtr create_key();
  static ButtonEventPtr create_abs(int code);
  static ButtonEventPtr create_rel(int code);
  static ButtonEventPtr from_string(const std::string& str);

private:
  ButtonEvent();

public: 
  void init(uInput& uinput) const;
  void send(uInput& uinput, bool value) const;

  void set_filters(const std::vector<ButtonFilterPtr>& filters);

  std::string str() const;

private:
  /** EV_KEY, EV_ABS, EV_REL */
  int m_type;

  union {
    struct {
      UIEvent code;
      int  value;
      int  repeat;
    } rel;

    struct {
      UIEvent code;
      int value;
    } abs;

    struct {
      // Array is terminated by !is_valid()
      UIEvent codes[MAX_MODIFIER+1];
    } key;
  };

  std::vector<ButtonFilterPtr> m_filters;
};

#endif

/* EOF */
