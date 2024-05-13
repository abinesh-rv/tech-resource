// interface

interface user {
    username:string,
    age:number,
    single:boolean
}

interface user1 extends user{
    userID:number
}

const member:user1 = {
    userID:1,
    username:"jicwnc",
    age:10,
    single:false
}
