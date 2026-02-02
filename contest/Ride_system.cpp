class RideSharingSystem {
public:
    queue<int> drivers;
    queue<int> riders;
    unordered_set<int> activeRiders;

    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        riders.push(riderId);
        activeRiders.insert(riderId);
    }
    
    void addDriver(int driverId) {
        drivers.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        vector<int> matched;

        while(!riders.empty() && activeRiders.count(riders.front())==0){
            riders.pop();
        }

        if(drivers.empty() || riders.empty()){
             return {-1, -1};
        }

        int d = drivers.front(); drivers.pop();
        int r =  riders.front();  riders.pop();
        activeRiders.erase(r);

        return {d, r};

    }
    
    void cancelRider(int riderId) {
        activeRiders.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */