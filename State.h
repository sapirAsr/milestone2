//
// Created by michal on 19/01/2020.
//

#ifndef MILESTONE2_STATE_H
#define MILESTONE2_STATE_H


template <typename T> class State {
private:
    T state;
    double  cost = 0;
    double distance = 0;
    State<T>* cameFrom = nullptr;
    bool visited = false;
    double h = 0;

public:
    State(T s): state(s) {
        this->state = s;
    }
    /**
    bool equals (T* s);
    void setCost(double c);
    double getCost();
    void setFather(T f);
    T getState();
    void setVisit();
    bool getVisit();
    State<T>* getFather();
    void setDistance(double dis);
    double getDistance();
    void setH(double he);
    double getH();
    bool & operator == (State<T>* s);
     */
    void setCost(double c) {
        this->cost = c;
    }

    void setFather(State<T>* f) {
        this->cameFrom = f;
    }

    T getState() {
        return this->state;
    }

    State<T>* getFather() {
        return this->cameFrom;
    }
    bool getVisit() {
        return this->visited;
    }

    void setVisit() {
        this->visited = true;
    }

    double getCost() {
        return this->cost;
    }
    void setDistance(double dis) {
        this->distance = dis;
    }
    double getDistance() {
        return this->distance;
    }
    void setH(double he) {
        this->h = he;
    }
    double getH() {
        return this->h;
    }
    bool equals(State<T>* s) {
        return this->state.equals(s->state);
    }
};



#endif //MILESTONE2_STATE_H
