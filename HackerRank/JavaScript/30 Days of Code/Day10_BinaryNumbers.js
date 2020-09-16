"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map((str) => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

function main() {
  const n = parseInt(readLine(), 10);
  let result = 0;

  const temp = n
    .toString(2)
    .split("")
    .reduce((target, num) => {
      let value = Number(num) > 0 ? Number(target) + Number(num) : ((result = target > result ? target : result), 0);
      console.log(value);
      return value;
    }, 0);

  console.log(result - temp > 0 ? result : temp);
}
main();
