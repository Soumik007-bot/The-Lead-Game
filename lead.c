#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int max_lead = 0, winner = 0;
    int total_p1 = 0, total_p2 = 0;
    
    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);
        
        total_p1 += S;
        total_p2 += T;
        
        int current_lead = total_p1 - total_p2;
        
        if (current_lead < 0) {
            current_lead = -current_lead;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 2;
            }
        } else {
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 1;
            }
        }
    }
    
    printf("%d %d\n", winner, max_lead);
    return 0;
}
