// as const

let a = ["aaa","bbbb","cccc"] as const

// omit

type a ={
    one:string;
    two:number;
}

type b = Omit<a,"one">

// as

type Buttoncolor = "red" | "blue" | "green"
// const previousButtonColor = localStorage. getItem("buttonColor") as Buttoncolor;
