//week08-5bubble-ballon
void setup(){
  size(400, 400);//大小
 }
int x,y,s;//氣球的座標和氣球的大小
void draw(){
  background(255);//白色的背景
  ellipse(x,y-s/2,s*0.7, s);
  if(mousePressed) s++;
  else{
    if(y>s)y-=2;
  }
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
  s=1;
}
