#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// int t; cin>>t;
	// while(t--){
	//     char a[3][3];
	//     int cx=0, co=0,winx=0, wino=0, c_=0;
	//     for(int i=0; i<3; i++){
	//         for(int j=0; j<3; j++){
	//             cin>>a[i][j];
	//             if(a[i][j] == 'X') cx++;
	//             else if(a[i][j]=='O') co++;
	//             else if(a[i][j]=='_') c_++;
	//         }
	//     }
	//     for(int i=0; i<3; i++){
	//         if(a[i][0]==a[i][1] && a[i][2] == a[i][1]){
	//             if(a[i][0]=='X') winx++;
	//             else if(a[i][0] == 'O') wino++;
	//         }
	//     }
	//     for(int i=0; i<3; i++){
	//         if(a[0][i]==a[1][i] && a[2][i] == a[1][i]){
	//             if(a[0][i] == 'X') winx++;
	//             else if(a[0][i] == 'O') wino++;
	//         }
	//     }
	//     if(a[0][0] == a[1][1] && a[2][2] == a[1][1]){
	//         if(a[1][1] =='X') winx++;
	//         else if(a[1][1]=='O') wino++;
	//     }
	//     if(a[0][2]=a[1][1] && a[2][0] == a[1][1]){
	//         if(a[1][1] =='X') winx++;
	//         else if(a[1][1]=='O') wino++;
	//     }
	    
	    
	//     if(co>cx) cout<<3<<endl;
	//     else if(cx-co>1) cout<<3<<endl;
	//     else if((cx>co) && winx==1 && wino==0) cout<<1<<endl;
	//     else if((cx==co) && wino==1 && winx==0) cout<<1<<endl;
	//     else if(c_ == 0 && (winx+wino == 0)) cout<<1<<endl;
	//     else if(c_ ==0 && winx == 2) cout<<2<<endl;
	//     else if(c_>0 && (winx+wino) == 0) cout<<2<<endl;
	//     else cout<<3<<endl;
	// }

	int t;
	cin>>t;
	for(int h=0; h<t; h++){
		char ttt[3][3];
		int i, j, ans =0, n=0, cx=0, co=0, winx=0, wino=0;
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				cin>>ttt[i][j];
				if(ttt[i][j] == '_') n=1;
				else if(ttt[i][j] =='X') cx++;
				else co++;
			}
		}
		char g='_';
		for(i=0; i<3; i++){
			if((ttt[i][0] == ttt[i][1]) && (ttt[i][0] == ttt[i][2]) && (ttt[i][0]!='_')){
				ans++;
				if(ttt[i][0] =='X') winx++;
				else wino++;
			}
		}
		for(i=0; i<3; i++){
			if((ttt[0][i] == ttt[i][1]) && (ttt[0][i] == ttt[2][i]) && (ttt[0][i] != '_')){
				ans++;
				if(ttt[0][i] == 'X') winx++;
				else wino++;
			}
		}
		for(i=0; i<3; i++){
			if((ttt[0][2] == ttt[i][1]) && (ttt[0][2] == ttt[2][0]) && (ttt[2][0] !='_')){
				if(ttt[2][0]=='X') winx++;
				else wino++;

			ans++;
		}
		}
			
		if((cx - co !=0) && (cx-co !=1)) cout<<"3"<<endl;
		else if(winx&&wino) cout<<"3"<<endl;
		else if(winx && (cx==co)) cout<<"3"<<endl;
		else if(wino && (cx>co)) cout<<"3"<<endl;
		else if((n==0) || (ans)) cout<<"1"<<endl;
		else cout<<"2"<<endl;
	}

	// int T;
	// cin>>T;
	// while(T--){
	//     string a,b,c;
	//     cin>>a>>b>>c;
	//     int cx=0, co=0, c_=0;
	//     int wx=0, wo=0;
	//     for(int i=0; i<3; i++){
	//        if(a[i]=='X'||b[i]=='X'||c[i]=='X'){++cx;}
	//        if(a[i]=='O'||b[i]=='O'||c[i]=='O'){++co;}
	//        if(a[i]=='_'||b[i]=='_'||c[i]=='_'){++c_;}
	//        //NOW CHECKING FOR MATCH CASES
	//        //first we check if DIAGONALS MATCH
	//        if(a[0]=='X' && b[1]=='X' && c[2]=='X'){wx=1;}//right diagonal
	//        if(a[2]=='X' && b[1]=='X' && c[0]=='X'){wx=1;}//left diagonal
	       
	//        //second we check for VERTICAL MATCH
	//        if((a[i]==b[i] && b[i]==c[i])){
	//             if(a[i]=='X'){wx=1;}
	//             if(a[i]=='O'){wo=1;}
	//        }     

	//        //third we check for ROW MATCH
	//        if(a[i]==a[i+1] && a[i+1]==a[i+2]){
	//            if(a[i]=='X'){wx=1;}
	//            if(a[i]=='O'){wo=1;}
	//        }
	//        if(b[i]==b[i+1] && b[i+1]==b[i+2]){
	//            if(b[i]=='X'){wx=1;}
	//            if(b[i]=='O'){wo=1;}
	//        }
	//        if(c[i]==c[i+1] && c[i+1]==c[i+2]){
	//            if(c[i]=='X'){wx=1;}
	//            if(c[i]=='O'){wo=1;}
	//        }
      
	//     }
	    
	//     //NOW WE NEED TO CHECK FOR THE CONDITIONS TO OUTPUT 1/2/3
	//     if((wx==1 && wo==1) || ((cx-co)<0) || ((cx-co)>1)){cout<<3<<endl;}
	//     else if(cx==0 && co==0 && c_==9){cout<<2<<endl;}
	//     else if(wx==1 && wo==0 && cx>co){cout<<1<<endl;}
	//     else if(wx==0 && wo==1 && cx==co){cout<<1<<endl;}
	//     else if(wx==0 && wo==0 && c_==0){cout<<1<<endl;}
	//     else if(wx==0 && wo==0 && c_>0){cout<<2<<endl;}
	//     else{cout<<3<<endl;}
	// }

	return 0;
}
