
[openSUSE doc](https://doc.opensuse.org/documentation/leap/tuning/html/book.sle.tuning/cha.tuning.systemtap.html)

1. enable `debuginfo repo` in yast
1. install systemtp and kernel debuginfo
```
zypper install systemtap systemtap-server
zypper install kernel kernel-default kernel-default-base kernel-default-debuginfo kernel-source # will use 5.5GiB
```
1. run hello word, will take 15 seconds
```
# time stap helloworld.stp
hello world
10.46user 1.23system 0:12.03elapsed 97%CPU (0avgtext+0avgdata 100040maxresident)k
24inputs+12368outputs (2major+843059minor)pagefaults 0swaps
```
