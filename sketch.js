const data = [];

function setup() {
  createCanvas(windowWidth, windowHeight);

  for (let i = 0; i < 100; i++) {
    data.push(random(100) | 0);
  }
}

function draw() {
  background(0);

  for (let i = 0; i < data.length; i++) {
    const d = data[i];
    const w = width / data.length;
    const h = height * d / max(data);
    const x = i * w;
    const y = height - h;
    rect(x, y, w, h);
  }
}

function windowResized() {
  resizeCanvas(windowWidth, windowHeight);
}
