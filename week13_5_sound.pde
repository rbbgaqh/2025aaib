//week13_5_sound
///要先安裝 sketch-library-manage libraries...
///找sound下載sound的函式 點 install 安裝完
import processing.sound.*;//使用聲音外掛
SoundFile mySound;//宣告變數 mySound他是SoundFile
void setup(){
   size(400,400);//視窗大小 400*400
   mySound = new SoundFile(this, "Intro Song_Final.mp3");
   mySound.play();//再撥放剛剛讀入的聲音檔
  }
  void draw(){
  }//裡面是空的畫圖 要寫他
