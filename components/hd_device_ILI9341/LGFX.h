#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.h>

#define TFT_WIDTH1 320
#define TFT_HEIGHT1 240

namespace esphome {
namespace hd_device {

class LGFX : public lgfx::LGFX_Device
{

  lgfx::Panel_ILI9341 _panel_instance;
  lgfx::Bus_SPI       _bus_instance;
  lgfx::Light_PWM     _light_instance;
  lgfx::Touch_XPT2046 _touch_instance;

  //lgfx::Panel_ST7796 _panel_instance;
  //lgfx::Bus_Parallel8 _bus_instance;
  //lgfx::Light_PWM _light_instance;
  //lgfx::Touch_FT5x06 _touch_instance;

public:
  LGFX(void);
};

}  // namespace ha_deck
}  // namespace esphome
