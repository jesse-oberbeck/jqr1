def printAThing():
    print "A thing."

def printInput(thing):
    if len(thing) < 7:
        print "need a longer thing"
        return
    print thing

def tryExcept(otherThing):
    try:
        otherThing = int(otherThing)
        print otherThing
    except:
        print "wrong thing."

printAThing()
theThing = raw_input("Gimme a thing: ")
printInput(theThing)
theOtherThing = raw_input("The other thing: ")
tryExcept(theOtherThing)
