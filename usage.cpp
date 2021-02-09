#include "yfapi.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    yfapi::YahooFinanceAPI api; 

    // source: https://www.anthonymorast.com/blog/2020/10/09/retrieving-historical-stock-data-in-c/


    api.download_ticker_data("aapl", "2020-01-01", "2020-10-07");

    api.set_interval(MONTHLY);

    return 0;
}