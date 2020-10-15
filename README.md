# RedStone MBP

## How it will work?
How Redstone achives scalablity via a sharded setup.
For our implementation of sharding, a transaction will be sentby a user, to the chain with the least amount of pending transactions. As miners can choose what chain to mine and so would neglect the smaller chains (less txns =  less reward) we will require merge mining, meaning the miners use the same resorces but mine on all the chains at once. There will be three chains because transactions will go through smoother and faster than with one, therefore reducing transaction times. 
Please note this is currently still a thesis and NOT a tested system, if you have any ideas or concerns please open an issue.

![rs](https://miro.medium.com/max/368/1*xP-zfedDLDzPgz6ER2XnAw.jpeg)

# License

##   GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
 Copyright © 2020 Toni Dumancic and RedStone developers

