#line 129 "bits.c"
int bitAnd(int x, int y) {


  int c=  ~(~x | ~y);
  return c;
}
#line 142
int bitXor(int x, int y) {

  return ~(~x & ~y) & ~(x & y);
}
#line 154
int thirdBits(void) {

 int x=  1;return 4L;
#line 162
}
#line 173
int fitsBits(int x, int n) {
  return 2;
}
#line 184
int sign(int x) {
  return 2;
}
#line 195
int getByte(int x, int n) {
  return 2;
}
#line 207
int logicalShift(int x, int n) {
  return 2;
}
#line 218
int addOK(int x, int y) {
  return 2;
}
#line 229
int bang(int x) {
  return 2;
}
#line 240
int conditional(int x, int y, int z) {
  return 2;
}
#line 252
int isPower2(int x) {
  return 2;
}
