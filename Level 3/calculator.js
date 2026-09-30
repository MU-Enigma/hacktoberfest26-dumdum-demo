
// just pasted code from google ;) 


while (true) {
    let input1 = prompt("Number 1 (or press Cancel to quit):");
    if (input1 === null) {
        alert("Goodbye!");
        break;
    }

    let input2 = prompt("Number 2:");
    if (input2 === null) {
        alert("Goodbye!");
        break;
    }

    let num1 = Number(input1);
    let num2 = Number(input2);

    let op = prompt("Enter operator (+, -, *, /) or 'q' to quit:");

    if (op === null || op.toLowerCase() === 'q') {
        alert("Goodbye!");
        break;
    }

    if (op === '+') {
        alert(`Result: ${num1 + num2}`);
    } else if (op === '-') {
        alert(`Result: ${num1 - num2}`);
    } else if (op === '*') {
        alert(`Result: ${num1 * num2}`);
    } else if (op === '/') {
        if (num2 !== 0) {
            alert(`Result: ${num1 / num2}`);
        } else {
            alert("Error: Cannot divide by zero!");
        }
    } else {
        alert("Invalid operator!");
    }
}