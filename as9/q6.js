//  Given first term (a), common difference (d) and a integer N of the Arithmetic Progression series, the task is to find Nth term of the series.

function series(a, d, N){
return (a + (N-1)*d);
}

console.log(series(2,5,5))