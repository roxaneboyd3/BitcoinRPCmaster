CPP Bitcoin RPC Client
-----------------------

This library provides a simple synchronous interface for interacting with Bitcoin's RPC server.


### Example ###

    boost::asio::io_service ios;
    bitcoin::client c( ios );
    c.connect( "localhost:8332", "user", "pass" );
    std::cerr<<"balance: "<<c.getbalance("*",0)<<std::endl;
The complete exposed API is found in bitcoin.hpp


I am facing a problem of connecting the boost library into my VS code.
The rest is working. 

So I am going to upload it to Github And I will also share the solution with it. 

https://levelup.gitconnected.com/the-definite-guide-on-compiling-and-linking-boost-c-libraries-for-visual-studio-projects-c79464d7282d

So If after this it didn't working, I will find another library for us to work with.


