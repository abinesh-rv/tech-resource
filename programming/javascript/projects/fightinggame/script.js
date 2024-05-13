const p1name = document.getElementById("p1Name");
const p2name = document.getElementById("p2Name");
const p1health = document.getElementById("p1Health");
const p2health = document.getElementById("p2Health");
const play = document.getElementById("play");
const reset = document.getElementById("reset");
const result = document.getElementById("result");
const sound1 = document.getElementById("p1attack");
const sound2 = document.getElementById("p1heal");
const sound3 = document.getElementById("p2attack");
const sound4 = document.getElementById("p2heal");
const sound5 = document.getElementById("victory");

class player {
  constructor(name, attack, heal, totalhealth) {
    this.name = name;
    this.attackpower = attack;
    this.healpower = heal;
    this.totalhealth = totalhealth;
    this.health = this.totalhealth;
  }
  attackedbyoppo(attackstrength) {
    this.health -= attackstrength;
    return this.health;
  }
  healed() {
    this.health += this.healpower;
    return this.health;
  }
}

const eren = new player("eren", 10, 10, 100);
const issei = new player("issei", 20, 5, 100);

p1name.innerText = eren.name;
p2name.innerText = issei.name;
p1health.innerText = eren.health;
p2health.innerText = issei.health;

document.addEventListener("keydown", function (value) {
  if (value.key == "q") {
    p2health.innerText = issei.attackedbyoppo(eren.attackpower);
    sound2.play();
    if (issei.health <= 0) {
      result.innerText = `${eren.name} is won`;
      sound5.play();
    }
  } else if (value.key == "a") {
    if (eren.health < 100) {
      p1health.innerText = eren.healed();
      sound1.play();
    }
  } else if (value.key == "p") {
    p1health.innerText = eren.attackedbyoppo(issei.attackpower);
    sound4.play();
    if (eren.health <= 0) {
      result.innerText = `${issei.name} is won`;
      sound5.play();
    }
  } else if (value.key == "l") {
    if (issei.health < 100) {
      p2health.innerText = issei.healed();
      sound3.play();
    }
  } else {
  }
});

play.onclick = () => {
  const isover = false;
  while (isover == false) {
    const a = Math.floor(Math.random() * 2);
    if (a == 0) {
      p1health.innerText = 0;
      result.innerText = `${issei.name} is won`;
      sound5.play();
      isover = true;
    } else {
      p2health.innerText = 0;
      result.innerText = `${eren.name} is won`;
      sound5.play();
      isover = true;
    }
  }
};

reset.onclick = () => {
  eren.health = eren.totalhealth;
  issei.health = issei.totalhealth;
  p1health.innerText = eren.health;
  p2health.innerText = issei.health;
  result.innerText = "";
};
