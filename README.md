# chaRm

[![GitHub release](https://img.shields.io/badge/Latest%20Release-v1.0.0-blue.svg)](https://github.com/RedEcho/chaRm/releases/tag/v1.0.0)

chaRm is a **clean**, **stylish** and **modern-looking** Rainmeter skin that aims to be as **plug and play** as possible. It essentially adds some basic but functional info as widgets on your desktop, and adapts to your wallpaper and screen resolution.
More info about Rainmeter on their [website](https://www.rainmeter.net/) or the [GitHub of the project](https://github.com/rainmeter/rainmeter).

![This is chaRm](./doc/pic/ThisIschaRm.jpg)

#### Why?

My work on chaRm started after a few colleagues and friends showed interest in my old Rainmeter skin. It was a PITA to adapt my skin to each of their individual setups, so I set out to create a skin that would adapt itself.
As for the name, this skin is both CHARMing and a CHAMeleon. And yes, at the beginning, I thought it was very clever.

---

## Key Features

### chaRm adapts to your wallpaper

Using the [chameleon 3rd party plugin by SoxTheFox](https://github.com/socks-the-fox/Chameleon), chaRm can detect the highlight colors of your wallpaper and adapt to it. It does that in real time, which means you can run a slideshow as your wallpaper, and let chaRm adapt the colors of each skins. It will even make some nice fading transitions!

[![chaRm adapts to your wallpaper](./doc/pic/Adapt_to_wallpapers_thumb.jpg)](https://youtu.be/V18R5t-GSxM)

### chaRm adapts to your screen resolution

Thanks to a clever use of variables throughout the theme, chaRm will sense changes in your screen resolution and adapt to it in real time. That way, whatever your screen resolution, you get the best chaRm experience !

_Due to hardware limitations, this is only tested from 800x600 up to 19020x1080. See [Current Limitaions](#current-limitations) for more information_

[![chaRm adapts to your screen resolution](./doc/pic/Adapt_to_resolution_thumb.jpg)](https://youtu.be/6fpFxJLBbmI)

### chaRm is interactive

[![chaRm is interactive](./doc/pic/Interactivity_thumb.jpg)](https://youtu.be/hW2kuEdvV7w)

Using both tooltips and mouse actions, chaRm packs more useful information and features at your fingertips than it looks at first sight. Discover them below!

#### Storage

The `STORAGE` skin can display more information about each drive in a tootip b hovering above the relevant bar. There, you can see the name of your drive, as well as détails about its filling state. You can also left click of the bar to directly open a File Explorer window, located on the relevant drive.

Also, using [flyingrax's DriveList 3rd patry plugin](https://github.com/FlyingHyrax/rm-drivelist-plugin), the list of connected drive is kept up to date in real time, and the skin will show drives accordingly up to 9 drives (support for more drive can be added quite easily)

![STORAGE Tooltips](./doc/pic/Tooltips.jpg)

![STORAGE DriveList](./doc/pic/HDD.jpg)

#### RecycleBin

The `RECYCLE_BIN` skin will inform you of the state of the bin. Left clicking on it will open the File Explorer in the relevant place. You can also double left click the skin to empty your recycle bin.

![RECYCLE_BIN Interactivity](./doc/pic/RecycleBin.gif)

#### Alerts

When some of the data under watch is going too high, chaRm will change the color of the skin to alert you. If the data is critical (like ping for example), it will choose a high impact color (default is red) to catch your attention.

![Alert](./doc/pic/Alert2.jpg)

![Critical alert](./doc/pic/Alert.jpg)

---

## Current Limitations

- chaRm is only tested on 4:3 up to 16:9 **aspect ratio**, and on 800x600 up to 1920x1080 **resolution** screens. I'm not equipped to test 21:9, 1440p or 4K
- Some **wallpapers** might not work as well as others. Usually if the general place is dark while the rest of the picture is really bright (and conversely), the text won't be readable. Some part of the skins may not be visible if the main highlight color of your wallpaper is right behind the skin. I'd say that with random wallpapers, it works out of the box more than 90% of the time. 
- **Optimization** is quite poor currently. I'm still working on it, but this theme usually takes around 8% of my i5-2500k. I'm still working on it, but in the meantime I suggest you disable the theme manually when running hardcore apps.

## Instructions

_TODO:UPDATE THIS SECTION_

First install the [chameleon plugin](https://software.socksthefox.net/chameleon/), then [install chaRm just as any Rainmeter skin](https://docs.rainmeter.net/manual/installing-skins/)
Refresh All, as well as the layout file, choose your wallpaper, and you're set. I recommand to choose a neutral colour for your Windows.
Recyclebin Windows remove
