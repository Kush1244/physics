import os


def RunRandomThoughts():
    quant_dir = "./src/quantities"
    os.system(r"g++ main.cpp {}/triple.cpp {}/angle.cpp {}/point.cpp {}/unit.cpp {}/vec_quantity.cpp -std=c++20".format(
        quant_dir, quant_dir, quant_dir, quant_dir, quant_dir))
    os.system("./a.out")


if __name__ == "__main__":
    RunRandomThoughts()
