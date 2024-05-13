const content = document.querySelector(".value")
const btns = document.querySelectorAll(".btn")

let count = 0;

btns.forEach((btn) => {
   btn.addEventListener("click",(i) => {
       const styles = i.currentTarget.classList;
       if(styles.contains("dec")){
        count--;
       }
       else if(styles.contains("inc")){
        count++;
       }
       else{
        count = 0;
       }
       if(count>0){
        content.style.color="#0A890C";
       }
       else if(count<0){
        content.style.color="red";
       }
       else{
        content.style.color="black";
       }

        content.textContent=count;
   });
});


