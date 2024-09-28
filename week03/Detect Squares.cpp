//TC=O(nlogn) n=number of points
//MC=O(n)
class DetectSquares {
public:
    map<vector<int>, int> points;
    DetectSquares() {
        points.clear();
    }

    void add(vector<int> point) {
        points[point]++;
    }

    int count(vector<int> qpoint) {
        int sqr_cnt=0;
        int x2,y2,x4,y4;
        x2= qpoint[0];
        y2= qpoint[1];

        for(auto &point : points){
            x4= point.first[0];
            y4= point.first[1];

        if(x2==x4 || abs(x2-x4)!=abs(y2-y4)) continue; //ignoring rectangles and zero area squares

        if(points.count({x4,y2}) && points.count({x2,y4})){
            sqr_cnt+= points[{x4,y2}] * points[{x2,y4}] * points[{x4,y4}];
        }
        }
        return sqr_cnt;
    }
};
