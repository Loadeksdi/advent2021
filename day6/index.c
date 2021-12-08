
unsigned long simulateLanternfishsEvolution (int days, char* fishes){
    unsigned long newFishes = 0;
    for (int i = 0; i < days; i++) {
        unsigned long cpt = 0;
        for (int j = 0; j < len(fishes); j++){
            if (fishes[j] == 0){
                cpt++;
            }
        }
        newFishes = cpt;
        for (unsigned long k = 0; k < len(fishes);k++){
            if (fishes[i] > 0){
                fishes[i]--;
            }
            else {
                fishes[i] = 6;
            }
        }
        if (newFishes > 0) {
            numbersLanternfishs.push(...new Array(newFishes).fill(8));
        }
    }
    return fishes;
}


int main(){
    char fishes[] = {2,1,2,1,5,1,5,1,2,2,1,1,5,1,4,4,4,3,1,2,2,3,4,1,1,5,1,1,4,2,5,5,5,1,1,4,5,4,1,1,4,2,1,4,1,2,2,5,1,1,5,1,1,3,4,4,1,2,3,1,5,5,4,1,4,1,2,1,5,1,1,1,3,4,1,1,5,1,5,1,1,5,1,1,4,3,2,4,1,4,1,5,3,3,1,5,1,3,1,1,4,1,4,5,2,3,1,1,1,1,3,1,2,1,5,1,1,5,1,1,1,1,4,1,4,3,1,5,1,1,5,4,4,2,1,4,5,1,1,3,3,1,1,4,2,5,5,2,4,1,4,5,4,5,3,1,4,1,5,2,4,5,3,1,3,2,4,5,4,4,1,5,1,5,1,2,2,1,4,1,1,4,2,2,2,4,1,1,5,3,1,1,5,4,4,1,5,1,3,1,3,2,2,1,1,4,1,4,1,2,2,1,1,3,5,1,2,1,3,1,4,5,1,3,4,1,1,1,1,4,3,3,4,5,1,1,1,1,1,2,4,5,3,4,2,1,1,1,3,3,1,4,1,1,4,2,1,5,1,1,2,3,4,2,5,1,1,1,5,1,1,4,1,2,4,1,1,2,4,3,4,2,3,1,1,2,1,5,4,2,3,5,1,2,3,1,2,2,1,4};
    simulateLanternfishsEvolution(80, fishes);
    return 0;
}