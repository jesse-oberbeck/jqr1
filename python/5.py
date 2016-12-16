import sys
def printAThing():
    print "A thing."

def printInput(thing):
    print thing

printAThing()
theThing = sys.argv[1]
printInput(theThing)
