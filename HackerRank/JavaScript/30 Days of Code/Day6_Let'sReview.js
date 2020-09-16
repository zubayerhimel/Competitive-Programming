function processData(input) {
  //Enter your code here
  input = input.split("\n");
  for (let i = 1; i < input.length; i++) {
    let splittedWord = input[i].split("");
    let evenString = "";
    let oddString = "";

    for (let j = 0; j < splittedWord.length; j++) {
      if (j % 2 == 0) {
        evenString += splittedWord[j];
      } else {
        oddString += splittedWord[j];
      }
    }
    console.log(evenString + " " + oddString);
  }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
  _input += input;
});

process.stdin.on("end", function () {
  processData(_input);
});
