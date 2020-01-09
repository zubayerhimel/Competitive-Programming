const fizzBuzz = number => {
    for (let i = 1; i <= number; i++) {
        if (i % 3 == 0) {
            console.log('fizz')
        }
        else if (i % 5 == 0) {
            console.log('buzz')
        }
        else if (i % 3 == 0 && i % 5 == 0) {
            console.log('fizzbuzz')
        }
        else {
            console.log(i)
        }
    }
}

fizzBuzz(5)