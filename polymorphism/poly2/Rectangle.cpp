void Canvas::Draw(Figure& figure, DisplayResolution& displayResolution){
    vector<DrawPoint> listOfPoint = figure.Draw();
    for (DrawPoint p:listOfPoint){
        //draw a point p on screen
        cout << "point(" << p.GetX() << "," << p.GetY() << ") has been drawn on screen" << endl;
    }
}