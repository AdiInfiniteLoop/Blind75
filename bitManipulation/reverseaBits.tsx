// function isBitSet(k:number, n:number):boolean {
//     return (1 <<(k - 1) & n) != 0;
// }
function reverseBits(n: number): number {
  let ans: number = 0;
  for (let i: number = 0; i < 32; ++i) {
    //Set the bit
    let bit = (n >> i) & 1;
    //Retrack the previous binaries
    ans |= (bit << 31 - i);
  }
  return ans >>> 0;   //to return as an unsigned integer
};
