#include "bitcoin.hpp"
#include <boost/exception/diagnostic_information.hpp>
#include <iostream>

int main( int argc, char** argv )
{
    try {
    boost::asio::io_service ios;
    bitcoin::client c( ios );
    c.connect( "localhost:8332", "user", "pass" );
    std::cerr<<"received by : "<<c.getreceivedbyaddress("Wallet_address",0)<<std::endl;
    std::cerr<<"balance: "<<c.getbalance("*",0)<<std::endl;
    std::cerr<<"account for address: "<<c.getaccount( "Wallet_address" )<<std::endl;
    std::cerr<<"address for account: "<<c.getaccountaddress( "Roxane" )<<std::endl;
    std::cerr<<"blockcount: "<<c.getblockcount()<<std::endl;
    std::cerr<<"blocknumber: "<<c.getblocknumber()<<std::endl;
    std::cerr<<"newaddress: "<<c.getnewaddress("newaddress")<<std::endl;
    bitcoin::address_info ai =c.validateaddress("Wallet_address");
    std::cerr<<"validate ismine: "<<ai.ismine<<std::endl;
    std::cerr<<"validate isvalid: "<<ai.isvalid<<std::endl;
    std::cerr<<"validate account: "<<ai.account<<std::endl;
    std::cerr<<"validate address: "<<ai.address<<std::endl;
    c.setaccount("Wallet_address","newname");
    c.setaccount("Wallet_address","Roxane");
    c.getaddressesbyaccount("Roxane");
    } 
    catch ( boost::exception& e )
    {
        std::cerr<< boost::diagnostic_information(e) << std::endl;
    }
}
