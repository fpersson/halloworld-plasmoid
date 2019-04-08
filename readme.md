Read: [Development/Tutorials/Plasma5/QML2/Helloworld](https://techbase.kde.org/Development/Tutorials/Plasma5/QML2/Helloworld)

$ mkdir build
$ cd build
$ cmake -DCMAKE_INSTALL_PREFIX=`kf5-config --prefix` -DCMAKE_BUILD_TYPE=Release -DLIB_INSTALL_DIR=lib -DKDE_INSTALL_USE_QT_SYS_PATHS=ON ../
$ make
$ sudo make install

Testing:
$ kquitapp plasmashell
$ plasmashell &

and add the hello world plasmoid to your desktop