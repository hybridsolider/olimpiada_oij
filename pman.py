import settings as set
import sys, os


name = "default"

def test() -> None:
    global name
    end: str = ""
    if name == "default":
        name = input("enter name of input file (with no extention):\n")
    while end != "y":
        os.system(f"./bin/{name}")
        end = input("\nEnd? (y/n): ")


def compiler() -> None:
    global name
    if name == "default":
        name = input("enter name of input file (with no extention):\n")

    os.system(f"g++ -o {set.binary}/{name} {set.source}/{name}{set.extension}")
    choice = input("Compiled succesfully! Do you want to test your program now? (y/n): \n")
    if (choice == 'y'): 
        test()
    elif (choice == 'n'):
        return
    else:
        print(f"ERROR: there is no option {choice}.")
        return



def compile_all() -> None:
    for i in os.listdir(set.source):
        os.system(f"g++ -o {set.binary}/{i.replace(set.extension,"")} {set.source}/{i}")


def delete_all() -> None:
    for i in os.listdir(set.binary):
        os.remove(set.binary+"/"+i)

def main() -> None:
    if sys.argv[1] == "1":
        compiler()
    elif sys.argv[1] == "2":
        test()
    elif sys.argv[1] == "3":
        compile_all()
    elif sys.argv[1] == "4":
        delete_all()

if __name__ == '__main__':
    main()