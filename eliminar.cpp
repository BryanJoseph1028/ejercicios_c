void salidaTam(ifstream &v1, string p1,string p2){
    string linea;
    ofstream fsalida1;
    fsalida1.open(p2.c_str(), ofstream::app);
    while(!v1.eof()){
        getline(v1,linea);
        if (p1=="a"){
            if (linea.substr(0,1)!="c"){
                fsalida1<<linea<<endl; // esta linea la guardo en un txt pero tambien es la que quiero eliminar del archivo original
            }
        }
        if (p1=="b"){
            if (linea.substr(0,1)!="m"){
                fsalida1<<linea<<endl;// esta linea la guardo en un txt pero tambien es la que quiero eliminar del archivo original
            }
        }
        if (p1=="c"){
            if (linea.substr(0,1)!="g"){
                fsalida1<<linea<<endl;// esta linea la guardo en un txt pero tambien es la que quiero eliminar del archivo original
            }
        }
    }
    fsalida1.close();
}
