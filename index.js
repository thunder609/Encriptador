const inputTexto=document.querySelector(".input-texto")
const inputTexto1=document.querySelector(".input-texto1")
const mensaje= document.querySelector(".mensaje")

function btnEncriptar(){
    const textoEncriptado=encriptar(inputTexto.value)
    inputTexto1.value=textoEncriptado
    inputTexto1.style.backgroundImage="none"
    inputTexto.value=""
}
function btnDesencriptar(){
    const textoDencriptado=dencriptar(inputTexto.value)
    inputTexto1.value=textoDencriptado
    inputTexto1style.backgroundImage="none"
    inputTexto.value=""
}
function encriptar(stringEncriptado){
 
    let mensajeencriptado=stringEncriptado.replace(/e/g,"enter").replace(/i/g,"imes").replace(/a/g,"ai").replace(/o/g,"ober").replace(/u/g,"ufat")

return mensajeencriptado

}
function dencriptar(stringDencriptado){
    let mensajeDencriptado=stringDencriptado.replace(/enter/g,"e").replace(/imes/g,"i").replace(/ai/g,"a").replace(/ober/g,"o").replace(/ufat/g,"u")
return mensajeDencriptado
}
function copiar(){
    inputTexto1.select()
    navigator.clipboard.writeText(inputTexto1.value)
    inputTexto1.value=""
    alert("Texto copiado")

}


