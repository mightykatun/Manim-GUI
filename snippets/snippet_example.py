# this snippet was made by: <snippet_creator>
# <snippet_description>

class CreateSquare(Scene):
    def construct(self):
        square = Square(side_length=2.0)
        square.move_to(ORIGIN)
        self.add(square)
