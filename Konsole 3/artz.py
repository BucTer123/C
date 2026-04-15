from art import text2art
from colorama import Fore 


def main():
    print(text2art("W E L C O M E !"))

    trm_input1 = input(Fore.CYAN + "Write word/s :")
    trm_input2 = input(Fore.CYAN + "Write colors :")

    if trm_input1 == "":
        print(Fore.RED + "ERROR!:") 
    else:
        if trm_input2 == "CYAN":
            print(Fore.CYAN + text2art(trm_input1))
        elif trm_input2 == "RED":
            print(Fore.RED + text2art(trm_input1))
        elif trm_input2 == "BLUE":
            print(Fore.BLUE + text2art(trm_input1))
        elif trm_input2 == "GREEN":
            print(Fore.GREEN + text2art(trm_input1))
        elif trm_input2 == "WHITE":
            print(Fore.WHITE + text2art(trm_input1))
        elif trm_input2 == "YELLOW":
            print(Fore.YELLOW + text2art(trm_input1))
        elif trm_input2 == "ORANGE":
            print(Fore.ORANGE + text2art(trm_input1))

if __name__ == "__main__":
    main()