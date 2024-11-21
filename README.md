Simple snake game written with C, with the SDL library.
.
.
.
To compile you will need to install the following:

- https://github.com/libsdl-org/SDL/releases/tag/release-2.30.9

for mac you will also need the framework image:

- https://github.com/libsdl-org/SDL_image/releases

for mac drag both files to /library/frameworks folder.
.
.
.

to compile add the following to your command:

`sdl2-config --cflags --libs`

should look something like this line:

gcc -o <filename> game.c `sdl2-config --cflags --libs`

