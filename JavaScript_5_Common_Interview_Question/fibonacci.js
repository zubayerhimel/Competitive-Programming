const fibonacci = number => {
    let result = [0,1]
    for(let i = 2; i <= number; i++)
    {
        const number1 = result[i-1]
        const number2 = result[i-2]

        result.push(number1+number2)
    }

    return result[number]
}

console.log(fibonacci(3))