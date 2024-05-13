//object

type usertype = {
    username:string,
    phone:number,
    single:boolean,
    job?:string,
    theme:"dark" | "light"
}

let user1:usertype = {
    username:"abi",
    phone:648231434,
    single:false,
    theme:"light"
}

// function

type funtype = (one:number,two:string) => string

let fun1:funtype = (a,b) => {
    return "njejd"
}

fun1(12,"mkemdc")
