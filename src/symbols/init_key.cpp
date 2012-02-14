// Do not edit by hand, this file was automatically generated by ./gen_symbols.rb

#include "symbols/environment.hpp"
#include "symbols/namespace.hpp"
#include "symbols/symbol.hpp"

void init_environment_key(EnvironmentPtr env)
{
  {
    NamespacePtr ns = env->add_namespace("playstation");
    {
      SymbolPtr sym = ns->add_symbol("cross");
    }
    {
      SymbolPtr sym = ns->add_symbol("triangle");
    }
    {
      SymbolPtr sym = ns->add_symbol("square");
    }
    {
      SymbolPtr sym = ns->add_symbol("circle");
    }
    {
      SymbolPtr sym = ns->add_symbol("l1");
    }
    {
      SymbolPtr sym = ns->add_symbol("r1");
    }
    {
      SymbolPtr sym = ns->add_symbol("l2");
    }
    {
      SymbolPtr sym = ns->add_symbol("r2");
    }
    {
      SymbolPtr sym = ns->add_symbol("l3");
    }
    {
      SymbolPtr sym = ns->add_symbol("r3");
    }
    {
      SymbolPtr sym = ns->add_symbol("start");
    }
    {
      SymbolPtr sym = ns->add_symbol("select");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("xbox");
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("lb");
      ns->add_alias("white", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("rb");
      ns->add_alias("black", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("lt");
    }
    {
      SymbolPtr sym = ns->add_symbol("rt");
    }
    {
      SymbolPtr sym = ns->add_symbol("thumb_l");
      ns->add_alias("tl", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("thumb_r");
      ns->add_alias("tr", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("start");
    }
    {
      SymbolPtr sym = ns->add_symbol("back");
    }
    {
      SymbolPtr sym = ns->add_symbol("guide");
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_up");
      ns->add_alias("du", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_down");
      ns->add_alias("dd", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_left");
      ns->add_alias("dl", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_right");
      ns->add_alias("dr", sym);
    }
  }
  {
    NamespacePtr ns = env->add_namespace("nunchuk");
    {
      SymbolPtr sym = ns->add_symbol("c");
    }
    {
      SymbolPtr sym = ns->add_symbol("z");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("guitar");
    {
      SymbolPtr sym = ns->add_symbol("yellow");
    }
    {
      SymbolPtr sym = ns->add_symbol("blue");
    }
    {
      SymbolPtr sym = ns->add_symbol("red");
    }
    {
      SymbolPtr sym = ns->add_symbol("green");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("wiimote");
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("1");
    }
    {
      SymbolPtr sym = ns->add_symbol("2");
    }
    {
      SymbolPtr sym = ns->add_symbol("minus");
    }
    {
      SymbolPtr sym = ns->add_symbol("home");
    }
    {
      SymbolPtr sym = ns->add_symbol("plus");
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_up");
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_down");
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_left");
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_right");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("joystick");
    {
      SymbolPtr sym = ns->add_symbol("trigger");
    }
    {
      SymbolPtr sym = ns->add_symbol("thumb");
    }
    {
      SymbolPtr sym = ns->add_symbol("top");
      ns->add_alias("top1", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("top2");
    }
    {
      SymbolPtr sym = ns->add_symbol("pinkie");
    }
    {
      SymbolPtr sym = ns->add_symbol("base");
      ns->add_alias("base1", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("base2");
    }
    {
      SymbolPtr sym = ns->add_symbol("base3");
    }
    {
      SymbolPtr sym = ns->add_symbol("base4");
    }
    {
      SymbolPtr sym = ns->add_symbol("base5");
    }
    {
      SymbolPtr sym = ns->add_symbol("base6");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("hama-crux");
    {
      SymbolPtr sym = ns->add_symbol("crouch");
    }
    {
      SymbolPtr sym = ns->add_symbol("run");
    }
    {
      SymbolPtr sym = ns->add_symbol("talk");
    }
    {
      SymbolPtr sym = ns->add_symbol("escape");
    }
    {
      SymbolPtr sym = ns->add_symbol("pause");
    }
    {
      SymbolPtr sym = ns->add_symbol("option");
    }
    {
      SymbolPtr sym = ns->add_symbol("quickload");
    }
    {
      SymbolPtr sym = ns->add_symbol("quicksave");
    }
    {
      SymbolPtr sym = ns->add_symbol("print");
    }
    {
      SymbolPtr sym = ns->add_symbol("n1");
    }
    {
      SymbolPtr sym = ns->add_symbol("n2");
    }
    {
      SymbolPtr sym = ns->add_symbol("n3");
    }
    {
      SymbolPtr sym = ns->add_symbol("n4");
    }
    {
      SymbolPtr sym = ns->add_symbol("n5");
    }
    {
      SymbolPtr sym = ns->add_symbol("n6");
    }
    {
      SymbolPtr sym = ns->add_symbol("n7");
    }
    {
      SymbolPtr sym = ns->add_symbol("n8");
    }
    {
      SymbolPtr sym = ns->add_symbol("n9");
    }
    {
      SymbolPtr sym = ns->add_symbol("n10");
    }
    {
      SymbolPtr sym = ns->add_symbol("n11");
    }
    {
      SymbolPtr sym = ns->add_symbol("up");
    }
    {
      SymbolPtr sym = ns->add_symbol("down");
    }
    {
      SymbolPtr sym = ns->add_symbol("left");
    }
    {
      SymbolPtr sym = ns->add_symbol("right");
    }
    {
      SymbolPtr sym = ns->add_symbol("q");
    }
    {
      SymbolPtr sym = ns->add_symbol("e");
    }
    {
      SymbolPtr sym = ns->add_symbol("tab");
    }
    {
      SymbolPtr sym = ns->add_symbol("c1");
    }
    {
      SymbolPtr sym = ns->add_symbol("c2");
    }
    {
      SymbolPtr sym = ns->add_symbol("c3");
    }
    {
      SymbolPtr sym = ns->add_symbol("c4");
      ns->add_alias("g", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("reload");
      ns->add_alias("r", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("use");
      ns->add_alias("f", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("c8");
      ns->add_alias("y", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("p2");
    }
    {
      SymbolPtr sym = ns->add_symbol("n");
    }
    {
      SymbolPtr sym = ns->add_symbol("c5");
    }
    {
      SymbolPtr sym = ns->add_symbol("c6");
      ns->add_alias("b", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("c7");
    }
    {
      SymbolPtr sym = ns->add_symbol("p1");
    }
    {
      SymbolPtr sym = ns->add_symbol("jump");
      ns->add_alias("space", sym);
    }
  }
  {
    NamespacePtr ns = env->add_namespace("classic");
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("minus");
    }
    {
      SymbolPtr sym = ns->add_symbol("home");
    }
    {
      SymbolPtr sym = ns->add_symbol("plus");
    }
    {
      SymbolPtr sym = ns->add_symbol("zl");
    }
    {
      SymbolPtr sym = ns->add_symbol("zr");
    }
    {
      SymbolPtr sym = ns->add_symbol("l");
    }
    {
      SymbolPtr sym = ns->add_symbol("r");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("gamepad");
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("c");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("z");
    }
    {
      SymbolPtr sym = ns->add_symbol("start");
    }
    {
      SymbolPtr sym = ns->add_symbol("select");
    }
    {
      SymbolPtr sym = ns->add_symbol("guide");
    }
    {
      SymbolPtr sym = ns->add_symbol("l1");
      ns->add_alias("lb", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("r1");
      ns->add_alias("rb", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("l2");
      ns->add_alias("lt", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("r2");
      ns->add_alias("rt", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("thumb_l");
      ns->add_alias("tl", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("thumb_r");
      ns->add_alias("tr", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_up");
      ns->add_alias("du", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_down");
      ns->add_alias("dd", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_left");
      ns->add_alias("dl", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("dpad_right");
      ns->add_alias("dr", sym);
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("playstation");
    {
      SymbolPtr sym = ns->lookup("cross");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("triangle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("square");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("circle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("l1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l1"));
    }
    {
      SymbolPtr sym = ns->lookup("r1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r1"));
    }
    {
      SymbolPtr sym = ns->lookup("l2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l2"));
    }
    {
      SymbolPtr sym = ns->lookup("r2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r2"));
    }
    {
      SymbolPtr sym = ns->lookup("l3");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "thumb_l"));
    }
    {
      SymbolPtr sym = ns->lookup("r3");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "thumb_r"));
    }
    {
      SymbolPtr sym = ns->lookup("start");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "start"));
    }
    {
      SymbolPtr sym = ns->lookup("select");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "select"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("xbox");
    {
      SymbolPtr sym = ns->lookup("a");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("y");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("x");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("b");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("lb");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lb"));
    }
    {
      SymbolPtr sym = ns->lookup("rb");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rb"));
    }
    {
      SymbolPtr sym = ns->lookup("lt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lt"));
    }
    {
      SymbolPtr sym = ns->lookup("rt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rt"));
    }
    {
      SymbolPtr sym = ns->lookup("thumb_l");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "thumb_l"));
    }
    {
      SymbolPtr sym = ns->lookup("thumb_r");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "thumb_r"));
    }
    {
      SymbolPtr sym = ns->lookup("start");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "start"));
    }
    {
      SymbolPtr sym = ns->lookup("back");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "select"));
    }
    {
      SymbolPtr sym = ns->lookup("guide");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "guide"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("nunchuk");
    {
      SymbolPtr sym = ns->lookup("c");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l1"));
    }
    {
      SymbolPtr sym = ns->lookup("z");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("guitar");
    {
      SymbolPtr sym = ns->lookup("yellow");
      assert(sym);
      sym->add_provides(env->lookup_symbol("xbox", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("blue");
      assert(sym);
      sym->add_provides(env->lookup_symbol("xbox", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("red");
      assert(sym);
      sym->add_provides(env->lookup_symbol("xbox", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("green");
      assert(sym);
      sym->add_provides(env->lookup_symbol("xbox", "a"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("wiimote");
    {
      SymbolPtr sym = ns->lookup("a");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("b");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("minus");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "select"));
    }
    {
      SymbolPtr sym = ns->lookup("home");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "guide"));
    }
    {
      SymbolPtr sym = ns->lookup("plus");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "start"));
    }
    {
      SymbolPtr sym = ns->lookup("dpad_up");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "dpad_up"));
    }
    {
      SymbolPtr sym = ns->lookup("dpad_down");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "dpad_down"));
    }
    {
      SymbolPtr sym = ns->lookup("dpad_left");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "dpad_left"));
    }
    {
      SymbolPtr sym = ns->lookup("dpad_right");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "dpad_right"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("joystick");
  }
  {
    NamespacePtr ns = env->lookup_namespace("hama-crux");
  }
  {
    NamespacePtr ns = env->lookup_namespace("classic");
    {
      SymbolPtr sym = ns->lookup("a");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("b");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("x");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("y");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("minus");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "select"));
    }
    {
      SymbolPtr sym = ns->lookup("home");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "guide"));
    }
    {
      SymbolPtr sym = ns->lookup("plus");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "start"));
    }
    {
      SymbolPtr sym = ns->lookup("zl");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r1"));
    }
    {
      SymbolPtr sym = ns->lookup("zr");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r1"));
    }
    {
      SymbolPtr sym = ns->lookup("l");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l2"));
    }
    {
      SymbolPtr sym = ns->lookup("r");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("gamepad");
  }
}

/* EOF */