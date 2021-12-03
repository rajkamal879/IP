string tournamentWinner(vector<vector<string>> competitions,vector<int> results) {
    unordered_map<string, int> scoretable;
    for(int i = 0; i < competitions.size(); i++){
        if(results[i] == 1){
            scoretable[competitions[i][0]] += 3;
        } else {
            scoretable[competitions[i][1]] += 3;
        }
    }

    string winner;
    int maxScore = 0;
    for(pair<string, int> p : scoretable){
        if(p.second > maxScore){
            winner = p.first;
            maxScore = p.second;
        }
    }
    return winner;
}