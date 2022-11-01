A.How to request data:
You can request data by using check = system("/checker_name value"); command.

B.How to recieve data:
Use check to recieve data. Check will be 0 if there are no errors with the data that was sent in.

C.UML diagram

            USER                         Device
            |                              |
            |                              |
    microservice.cpp                       |
            |  |                           |
            |  |          numberChecker() |  |
            |  |          --------------> |  |          
            |  |          <- - - - - - -  |  |
            |  |              return      |  |
            |  |                           |
            |  |                           |
            |  |          lightsError()   |  |
            |  |          --------------> |  |          
            |  |          <- - - - - - -  |  |
            |  |              return      |  |