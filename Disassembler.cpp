#include<iostream>

using namespace std;

void checkpoints(string *b, int cp[], int max){

    int j = 0;
    int count = 0;

    while(b[j] != "-1"){

        string a = b[j];

        int arr[32];

        for(int i = 0; i < 8; i++){

            if(a[i] == '0'){

                arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
            }

            else if(a[i] == '1'){

                arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
            }        
            
            else if(a[i] == '2'){

                arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
            }        
            
            else if(a[i] == '3'){

                arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
            }        
            
            else if(a[i] == '4'){

                arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
            }

            else if(a[i] == '5'){

                arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
            }

            else if(a[i] == '6'){

                arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
            }

            else if(a[i] == '7'){

                arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
            }

            else if(a[i] == '8'){

                arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
            }

            else if(a[i] == '9'){

                arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
            }        
            
            else if(a[i] == 'a'){

                arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
            }        
            
            else if(a[i] == 'b'){

                arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
            }        
            
            else if(a[i] == 'c'){

                arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
            }

            else if(a[i] == 'd'){

                arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
            }

            else if(a[i] == 'e'){

                arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
            }

            else if(a[i] == 'f'){

                arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
            }

        }

        if((a[6] == '6' || a[6] == 'e') && a[7] == '3'){

            int PC =j;

            int imm = 4096*arr[0] + 2048*arr[24] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23];

            if(arr[0] == 1){

                imm = imm - 8192;
            }

            if(4*PC + imm <= 0 || PC*4 + imm > max*4){

                continue;
            }

            int point = imm/4 + PC;
            cp[count] = point;
            count = count + 1;
        }

        else if(a[7] == 'f'){

            int PC = j;

            int imm = 1048576*arr[0] + 524288*arr[12] + 262144*arr[13] + 131072*arr[14] + 65536*arr[15] + 32768*arr[16] + 16384*arr[17] + 8192*arr[18] + 4096*arr[19] + 2048*arr[11] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10];

            if(arr[0] == 1){

                imm = imm - 2097152;
            }

            if(4*PC + imm <= 0 || PC*4 + imm > max*4){

                continue;
            }
            int point = imm/4 + PC;
            cp[count] =  point;
            count = count + 1;
        }

        j = j + 1;
    }
}

string dth(int n){

    int q = 0;

    if (n <0){

        q = 1;
        n = -1*n;
    }
    

    string a = "";

    if(n == 0){

        a = "0";
        return a;
    }

    while(n != 0){

        if(n%16 == 0){

            a = "0"+a;
        }

        if(n%16 == 1){

            a = "1" + a;
        }
        if(n%16 == 2){

            a = "2" + a;
        }
        if(n%16 == 3){

            a = "3" + a;
        }
        if(n%16 == 4){

            a = "4" + a;
        }
        if(n%16 == 5){

            a = "5" + a;
        }
        if(n%16 == 6){

            a = "6" + a;
        }
        if(n%16 == 7){

            a = "7" + a;
        }
        if(n%16 == 8){

            a = "8" + a;
        }
        if(n%16 == 9){

            a = "9" + a;
        }
        if(n%16 == 10){

            a = "a" + a;
        }
        if(n%16 == 11){

            a = "b" + a;
        }
        if(n%16 == 12){

            a = "c" + a;
        }
        if(n%16 == 13){

            a = "d" + a;
        }
        if(n%16 == 14){

            a = "e" + a;
        }
        if(n%16 == 15){

            a = "f" + a;
        }

        n = n/16;
    }

    if(q == 1){

        a = "-" + a;
    }

    return a;
}

void Add(int rs1,int rs2, int rd){

    cout<<"add  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Sub(int rs1,int rs2, int rd){

    cout<<"sub  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Xor(int rs1,int rs2, int rd){

    cout<<"xor  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Or(int rs1,int rs2, int rd){

    cout<<"or   x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void And(int rs1,int rs2, int rd){

    cout<<"and  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Sll(int rs1,int rs2, int rd){

    cout<<"sll  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Srl(int rs1,int rs2, int rd){

    cout<<"srl  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}

void Sra(int rs1,int rs2, int rd){

    cout<<"sra  x"<<rd<<", x"<<rs1<<", x"<<rs2<<"\n";
    return;
}



void rtype(string a, int arr[], int PC, int cp[]){

    int rs1,rs2,rd,funct3;
    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    rs2 = 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];
    funct3 = 4*arr[17] + 2*arr[18] + arr[19];

    int i = 0;

    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    if(a[0] == '0'){

        if(funct3 == 0){

            Add(rs1,rs2,rd);
        }

        else if(funct3 == 4){

            Xor(rs1,rs2,rd);
        }

        else if(funct3 == 6){

            Or(rs1,rs2,rd);
        }

        else if(funct3 == 7){

            And(rs1,rs2,rd);
        }

        else if(funct3 == 1){

            Sll(rs1,rs2,rd);
        }

        else if(funct3 == 5){

            Srl(rs1,rs2,rd);
        }
        
    }

    else if(a[0] == '4'){

        if(funct3 == 0){

            Sub(rs1,rs2,rd);
        }

        else if(funct3 == 5){

            Sra(rs1,rs2,rd);
        }
    }

    return;
}

void Addi(int rs1, int rd, int imm){

    cout<<"addi x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Xori(int rs1, int rd, int imm){

    cout<<"xori x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Ori(int rs1, int rd, int imm){

    cout<<"ori  x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Andi(int rs1, int rd, int imm){

    cout<<"andi x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Slli(int rs1, int rd, int imm){

    cout<<"slli x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Srli(int rs1, int rd, int imm){

    cout<<"srli x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void Srai(int rs1, int rd, int imm){

    cout<<"srai x"<<rd<<", x"<<rs1<<", "<<imm<<"\n";
    return;
}

void itype1(string a, int arr[], int PC, int cp[]){

    int imm,rs1,rd,funct3;

    imm = 2048*arr[0] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    if(arr[0] == 1){

        imm = imm - 4096;
    }
    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];
    funct3 = 4*arr[17] + 2*arr[18] + arr[19];

    int check = 32*arr[5] + 16*arr[4] + 8*arr[3] + 4*arr[2] + 2*arr[1] + arr[0];

    int i = 0;
    
    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    if(funct3 == 0){

        Addi(rs1,rd,imm);
    }

    else if(funct3 == 4){

        Xori(rs1,rd,imm);
    }

    else if(funct3 == 6){

        Ori(rs1,rd,imm);
    }

    else if(funct3 == 7){

        Andi(rs1,rd,imm);
    }

    else if(funct3 == 1){

        Slli(rs1,rd,imm);
    }

    else if(funct3 == 5){

        imm = 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];

        if(check == 0){

            Srli(rs1,rd,imm);        
        }

        else if(check == 2){

            Srai(rs1,rd,imm);            
        }

        else{
            cout<<"Error!\n";
            return;
        }
    }

    return;
}

void Lb(int rs1, int rd, int imm){

    cout<<"lb   x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Lh(int rs1, int rd, int imm){

    cout<<"lh   x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Lw(int rs1, int rd, int imm){

    cout<<"lw   x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Ld(int rs1, int rd, int imm){

    cout<<"ld   x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Lbu(int rs1, int rd, int imm){

    cout<<"lbu  x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Lhu(int rs1, int rd, int imm){

    cout<<"lhu  x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void Lwu(int rs1, int rd, int imm){

    cout<<"lwu  x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void itype2(string a, int arr[], int PC, int cp[]){

    int imm,rs1,rd,funct3;

    imm = 2048*arr[0] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    if(arr[0] == 1){

        imm = imm - 4096;
    }
    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];
    funct3 = 4*arr[17] + 2*arr[18] + arr[19];

    int i = 0;
    
    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    if(funct3 == 0){

        Lb(rs1,rd,imm);
    }

    else if(funct3 == 1){

        Lh(rs1,rd,imm);        
    }

    else if(funct3 == 2){

        Lw(rs1,rd,imm);        
    }

    else if(funct3 == 3){

        Ld(rs1,rd,imm);        
    }

    else if(funct3 == 4){

        Lbu(rs1,rd,imm);        
    }

    else if(funct3 == 5){

        Lhu(rs1,rd,imm);
    }

    else if(funct3 == 6){

        Lwu(rs1,rd,imm);        
    }

    return;
}

void Sb(int rs1, int rs2, int imm){

    cout<<"sb   x"<<rs2<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}
void Sh(int rs1, int rs2, int imm){

    cout<<"sh   x"<<rs2<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}
void Sw(int rs1, int rs2, int imm){

    cout<<"sw   x"<<rs2<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}
void Sd(int rs1, int rs2, int imm){

    cout<<"sd   x"<<rs2<<", "<<imm<<"(x"<<rs1<<")\n";
    return;
}

void stype(string a, int arr[], int PC, int cp[]){

    int imm, rs1,rs2,funct3;

    imm = 2048*arr[0] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];

    if(arr[0] == 1){

        imm = imm-4096;
    }

    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    rs2 = 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    funct3 = 4*arr[17] + 2*arr[18] + arr[19];

    int i = 0;

    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    if(funct3 == 0){

        Sb(rs1,rs2,imm);
    }
    else if(funct3 == 1){

        Sh(rs1,rs2,imm);
    }
    else if(funct3 == 2){

        Sw(rs1,rs2,imm);
    }
    else if(funct3 == 3){

        Sd(rs1,rs2,imm);
    }

    return;
}

void Beq(int rs1, int rs2, int i){

    cout<<"beq  x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void Bne(int rs1, int rs2, int i){

    cout<<"bne  x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void Blt(int rs1, int rs2, int i){

    cout<<"blt  x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void Bge(int rs1, int rs2, int i){

    cout<<"bge  x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void Bltu(int rs1, int rs2, int i){

    cout<<"bltu x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void Bgeu(int rs1, int rs2, int i){

    cout<<"bgeu x"<<rs1<<", x"<<rs2<<", L"<<i+1<<" \n";
    return;
}

void btype(string a, int arr[], int &PC, int &max, int cp[]){

    int imm,rs1,rs2,funct3;

    imm = 4096*arr[0] + 2048*arr[24] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23];

    if(arr[0] == 1){

        imm = imm - 8192;
    }

    rs2 = 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    funct3 = 4*arr[17] + 2*arr[18] + arr[19];

    if(4*PC + imm < 0 || PC*4 + imm > max*4){

        cout<<"Error!\n";
        return;
    }

    int i = 0;
    int k = 0;

    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    while(k<30){

        if(cp[k] == PC + imm/4){
            break;
        }

        k = k+1;
    }

    if(funct3 == 0){

        Beq(rs1,rs2,k);
    }
    if(funct3 == 1){

        Bne(rs1,rs2,k);
    }
    if(funct3 == 4){

        Blt(rs1,rs2,k);
    }
    if(funct3 == 5){

        Bge(rs1,rs2,k);
    }
    if(funct3 == 6){

        Bltu(rs1,rs2,k);
    }
    if(funct3 == 7){

        Bgeu(rs1,rs2,k);
    }

    return;
}

void Jal(int rd, int imm, int i){

    cout<<"jal  x"<<rd<<", L"<<i+1<<"\n";
    return;
}

void jtype(string a, int arr[], int&PC, int max, int cp[]){

    int imm, rd;

    imm = 1048576*arr[0] + 524288*arr[12] + 262144*arr[13] + 131072*arr[14] + 65536*arr[15] + 32768*arr[16] + 16384*arr[17] + 8192*arr[18] + 4096*arr[19] + 2048*arr[11] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10];

    if(arr[0] == 1){

        imm = imm - 2097152;
    }

    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];

    if(4*PC + imm < 0 || PC*4 + imm > max*4){

        cout<<"Error!\n";
        return;
    }

    int i = 0;
    int k = 0;

    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    while(k<30){

        if(cp[k] == PC + imm/4){
            break;
        }

        k = k+1;
    }
    Jal(rd,imm,k);

    return;
}

void Lui(int rd, int imm){

    cout<<"lui  x"<<rd<<", 0x"<<dth(imm)<<"\n";    
    return;
}

void utype(string a, int arr[], int PC, int cp[]){

    int imm, rd;

    imm = 524288*arr[0] + 262144*arr[1] + 131072*arr[2] + 65536*arr[3] + 32768*arr[4] + 16384*arr[5] + 8192*arr[6] + 4096*arr[7] + 2048*arr[8] + 1024*arr[9] + 512*arr[10] + 256*arr[11] + 128*arr[12] + 64*arr[13] + 32*arr[14] + 16*arr[15] + 8*arr[16] + 4*arr[17] + 2*arr[18] + arr[19];

    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];

    int i = 0;

    while(i<30){

        if(cp[i] == PC){
            //cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    Lui(rd, imm);

    return;
}

void Jalr(int rs1, int rd, int imm){

    cout<<"jalr x"<<rd<<", "<<imm<<"(x"<<rs1<<")\n";

    return;
}

void itype3(string a, int arr[], int &PC, int & max, int cp[]){

    int imm,rs1,rd,funct3;

    imm = 2048*arr[0] + 1024*arr[1] + 512*arr[2] + 256*arr[3] + 128*arr[4] + 64*arr[5] + 32*arr[6] + 16*arr[7] + 8*arr[8] + 4*arr[9] + 2*arr[10] + arr[11];
    if(arr[0] == 1){

        imm = imm - 4096;
    }
    rs1 = 16*arr[12] + 8*arr[13] + 4*arr[14] + 2*arr[15] + arr[16];
    rd = 16*arr[20] + 8*arr[21] + 4*arr[22] + 2*arr[23] + arr[24];

    int i = 0;

    while(i<30){

        if(cp[i] == PC){
            cout<<"(L"<<i+1<<"): ";
            break;
        }

        i = i + 1;
    }

    Jalr(rs1, rd, imm);


}

void disassemble(string *b, string a, int& PC, int max, int cp[]){

    int arr[32];

    for(int i = 0; i < 8; i++){

        if(a[i] == '0'){

            arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
        }

        else if(a[i] == '1'){

            arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
        }        
        
        else if(a[i] == '2'){

            arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
        }        
        
        else if(a[i] == '3'){

            arr[4*i] = 0; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
        }        
        
        else if(a[i] == '4'){

            arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
        }

        else if(a[i] == '5'){

            arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
        }

        else if(a[i] == '6'){

            arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
        }

        else if(a[i] == '7'){

            arr[4*i] = 0; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
        }

        else if(a[i] == '8'){

            arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
        }

        else if(a[i] == '9'){

            arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
        }        
        
        else if(a[i] == 'a'){

            arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
        }        
        
        else if(a[i] == 'b'){

            arr[4*i] = 1; arr[4*i + 1] = 0; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
        }        
        
        else if(a[i] == 'c'){

            arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 0;
        }

        else if(a[i] == 'd'){

            arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 0; arr[4*i + 3] = 1;
        }

        else if(a[i] == 'e'){

            arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 0;
        }

        else if(a[i] == 'f'){

            arr[4*i] = 1; arr[4*i + 1] = 1; arr[4*i + 2] = 1; arr[4*i + 3] = 1;
        }

    }

    if((a[6] == '3' || a[6] == 'b') && a[7] == '3'){

        rtype(a,arr,PC,cp);
        return;
    }

    else if((a[6] == '1' || a[6] == '9') && a[7] == '3'){

        itype1(a,arr,PC,cp);
        return;
    }

    else if((a[6] == '0' || a[6] == '8') && a[7] == '3'){

        itype2(a,arr,PC,cp);
        return;
    }

    else if((a[6] == '2' || a[6] == 'a') && a[7] == '3'){

        stype(a,arr,PC,cp);
        return;
    }
    else if((a[6] == '6' || a[6] == 'e') && a[7] == '3'){

        btype(a,arr, PC, max, cp);
        return;
    }
    else if(a[7] == 'f'){

        jtype(a,arr, PC, max, cp);
    }

    else if((a[6] == '3' || a[6] == 'b') && a[7] == '7'){

        utype(a,arr,PC,cp);
    }

    else if((a[6] == '6' || a[6] == 'e') && a[7] == '7'){

        itype3(a,arr,PC,max,cp);
    }
}



int main(){

    string a;
    string b[200];
    int cp[200];

    cout<<"Enter the text here: (End your code with a -1 at the end of the text in a new line.) \n";

    int i = 0;
    
    while(true){

        getline(cin,a);

        if(a[0] == '-'){

            b[i] = "-1";
            break;
        }

        else b[i] = a;

        i = i+1;
    }

    int max = i-1;

    i = 0;

    checkpoints(b,cp,max);   

    cout<<"\n\n disassembled code: \n\n";

    int count = 0;
    while(b[i] != "-1"){

        cout<<dth(4*i)<<": ";

        disassemble(b, b[i], i, max,cp);
        cout<<"\n";
        i = i+1;
    }

}