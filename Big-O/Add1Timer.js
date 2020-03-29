const addUpto = n => {
  let total = 0;
  for (let i = 1; i <= n; i++) {
    total += i;
  }
  return total;
};

let time1 = performance.now();
addUpto(1000000000);
let time2 = performance.now();
console.log(`Time elapsed: ${(time2 - time1) / 1000} seconds`);
