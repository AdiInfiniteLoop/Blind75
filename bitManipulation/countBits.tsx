function numb1bits(x: number): number {
  let ans: number;
  ans = 0;
  while (x) {
    ans = ans + (x % 2);
    x = Math.floor(x / 2);
  }
  return ans;
}

function countBits(n: number): number[] {
  let ans = [];
  for (let i = 0; i <= n; ++i) {
    let x = numb1bits(i);
    ans.push(x);
  }
  return ans;
};
