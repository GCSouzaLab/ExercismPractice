PLANT_TYPES = {"G": "Grass", "C": "Clover", "R": "Radishes", "V": "Violets"}

class Garden:
    def __init__(self, diagram, students = []):
        if (not students):
            students = ["Alice", "Bob", "Charlie", "David", "Eve", "Fred", "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"]
        else:
            students.sort()
        self.student_plant_map = {}
        seeds = diagram.split('\n')
        list1 = seeds[0] # window
        list2 = seeds[1]
        for student in students:
            if (not list1 or not list2): 
                break
            seed1, seed2, *list1 = list1
            seed3, seed4, *list2 = list2
            self.student_plant_map[student] = [seed1, seed2, seed3, seed4]

    def plants(self, student_name):
        seeds = self.student_plant_map.get(student_name, [])
        return [PLANT_TYPES[seed] for seed in seeds]