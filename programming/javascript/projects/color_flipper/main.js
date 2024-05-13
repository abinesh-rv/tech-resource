const colors = [
  'fuchsia',
  'teal',
  'bisque',
  'coral',
  'lightcyan',
  'slateblue',
  'tan',
  'yellowgreen',
  'violet',
  'skyblue',
  'salmon',
];
const Colorname = document.querySelector('.two');
const change = document.querySelector('.colorChanger');

change.addEventListener('click', () => {
  const getran = rangen();
  document.body.style.backgroundColor = colors[getran];
  Colorname.textContent = colors[getran];
});

function rangen() {
  return Math.floor(Math.random() * colors.length);
}
