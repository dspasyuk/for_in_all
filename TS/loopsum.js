"use strict";
let VI = 0n; // Use BigInt for large sums
for (let i = 0n; i < 1000000000n; i++) {
    VI += i;
}
console.log(VI.toString());
