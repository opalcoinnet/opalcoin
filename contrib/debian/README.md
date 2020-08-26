
Debian
====================
This directory contains files used to package opalcoind/opalcoin-qt
for Debian-based Linux systems. If you compile opalcoind/opalcoin-qt yourself, there are some useful files here.

## opalcoin: URI support ##


opalcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install opalcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your opalcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/opalcoin128.png` to `/usr/share/pixmaps`

opalcoin-qt.protocol (KDE)

