Hey Future @asellitt
================================

You're probably looking at this because you've forgotten how to compile *"this damned firmware"*. Yep, it's OK, I know.

Don't worry mate! It's really simple:

```bash
$> cd tmk_keyboard/keyboard/ergodox
$> make -f Makefile.lufa clean
$> make -f Makefile.lufa asellitt
```

Then (if you've remembered to open Teensy, you probably will though because you're such a clever fellow), just reboot the keyboard and it will automatically push the new firmware.

Hakky happing!

Your best bud, 
Past @asellitt

**Oh, PS:** You will find the rest of README here: <http://github.com/tmk/tmk_keyboard>

**OH! PPS:** Thanks for taking care of that for me, I always know I can count on you to get stuff done :D
