const limit = 10000000;

// Measure time for `for` loop
console.time("for loop");
let VI_for = 0;
for (let i = 0; i < limit; i++) {
    VI_for += i;
}
console.timeEnd("for loop");
console.log("for loop VI:", VI_for);

// Measure time for `while` loop
console.time("while loop");
let VI_while = 0;
let i = 0;
while (i < limit) {
    VI_while += i;
    i++;
}
console.timeEnd("while loop");
console.log("while loop VI:", VI_while);

// Measure time for `Array.from` with `map`
console.time("Array.from + map");
let VI_map = Array.from({ length: limit }, (_, i) => i).reduce((acc, val) => acc + val, 0);
console.timeEnd("Array.from + map");
console.log("Array.from + map VI:", VI_map);

// Measure time for `Array.prototype.forEach`
console.time("forEach");
let VI_forEach = 0;
Array.from({ length: limit }, (_, i) => i).forEach(val => {
    VI_forEach += val;
});
console.timeEnd("forEach");
console.log("forEach VI:", VI_forEach);
