print("Polymorphism ------- Duck Typing")
print("-----------------------------------")


class pycharm:
    def execute(self):
        print("it can compile")
        print("it can run any programme")



class laptop:
    def show(self,ide):
        ide.execute()

ide=pycharm()   # instead of taking this name we can take another name
lap1=laptop()
lap1.show(ide)
