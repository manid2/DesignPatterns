folders=(
Prototype
Flyweight
TemplateMethod
Memento
Command
Adapter
Singleton
Strategy
AbstractFactory
SimpleFactory
Composite
Visitor
Iterator
FactoryMethod
Builder
Mediator
Bridge
Facade
Observer
State
ChainOfResponsibility
Decorator
Proxy
)

INC=inc
SRC=src
OBJ=obj
TEST=test

echo "### Creating inc, src, and test folders ###"
for folder in ${folders[@]}
do
        cd $folder;
	echo -e "\nEnter "$folder"\n";

        # 1. make inc folder
        if [ ! -d $INC ]; then
                mkdir $INC;
                echo -e "Created "$INC;
        fi

        # 2. make src folder
        if [ ! -d $SRC ]; then
                mkdir $SRC;
                echo -e "Created "$SRC;
        fi

        # 3. make obj folder
        if [ ! -d $OBJ ]; then
                mkdir $OBJ;
                echo -e "Created "$OBJ;
        fi

        # 4. make test folder
        if [ ! -d $TEST ]; then
                mkdir $TEST;
                echo -e "Created "$TEST;
        fi
   
	cd ../
	echo -e "\nLeave "$folder"\n";
done


