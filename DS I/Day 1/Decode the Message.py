class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        rt={}
        mp=97
        for i in range(len(key)):
            if key[i] not in rt and key[i]!=" ":
                rt[key[i]]=chr(mp)
                mp+=1
        fin=""
        for i in range(len(message)):
            if message[i]==" ":
                fin+=" "
            else:
                fin+=rt[message[i]]
        return fin
        
