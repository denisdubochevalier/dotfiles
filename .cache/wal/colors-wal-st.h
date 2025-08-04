const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030303", /* black   */
  [1] = "#4c4c4c", /* red     */
  [2] = "#5c5c5c", /* green   */
  [3] = "#7c7c7c", /* yellow  */
  [4] = "#949494", /* blue    */
  [5] = "#a8a8a8", /* magenta */
  [6] = "#bcbcbc", /* cyan    */
  [7] = "#a0a0a0", /* white   */

  /* 8 bright colors */
  [8]  = "#414141",  /* black   */
  [9]  = "#4c4c4c",  /* red     */
  [10] = "#5c5c5c", /* green   */
  [11] = "#7c7c7c", /* yellow  */
  [12] = "#949494", /* blue    */
  [13] = "#a8a8a8", /* magenta */
  [14] = "#bcbcbc", /* cyan    */
  [15] = "#a0a0a0", /* white   */

  /* special colors */
  [256] = "#030303", /* background */
  [257] = "#a0a0a0", /* foreground */
  [258] = "#a0a0a0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
