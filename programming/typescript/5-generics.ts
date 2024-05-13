// generics

interface gen1<T> {
   username:string,
   extra:T
}

let use1:gen1<number> = {
    username:"njcd",
    extra:1
}

interface gen2<T extends object>{
    username:string,
    extra:T[]
}
interface gen3{
    one:number
}

let use2:gen2<gen3> = {
    username:"njnw",
    extra:[{one:2}]
}