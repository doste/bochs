
## info tss command for the Bochs's debugger.

The code I modified is only in the bx_debug folder but this repo contains all of the Bochs source code so you can just clone it and start using it.

Instructions:

1. Clone this repo
2. In the folder where you cloned it, open a terminal and execute:
      `./configure --enable-debugger --disable-docbook --enable-readline --prefix=$HOME/bochs/`
      `make`
      `make install`
3. That's it!

When you are executing some (most certainly kernel) code using Bochs to emulate a x86 machine, if you are using some of the utilities offered by Intel for the task managment, you may want to debug the state of the tasks.

What Bochs by default offers is the command `info tss` which shows the TSS that is currently loaded in the Task Register.

Example:

![alt text](https://github.com/doste/bochs/blob/master/screenshots/bochs_info_tss_old.png)

But, what if you wanted to view what's in the others TSSs?

The Bochs's debugger doesn't allow that. You would have to dump the memory corresponding to that segment:

![alt text](https://github.com/doste/bochs/blob/master/screenshots/bochs_info_tss_old_doesntwork.png)

So, with this little utility I added you now can!

`info tss` like always:
![alt text](https://github.com/doste/bochs/blob/master/screenshots/bochs_info_tss.png)

But now you debug another using the GDT index:
![alt text](https://github.com/doste/bochs/blob/master/screenshots/bochs_info_tss_idx.png)

And if you give it an invalid index it will tell you:
![alt text](https://github.com/doste/bochs/blob/master/screenshots/bochs_info_tss_notvalid.png)


Obviously all the credits go to the [Bochs](https://bochs.sourceforge.io/) developers, I only added a little debugging command.
