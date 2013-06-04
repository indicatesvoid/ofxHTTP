/*==============================================================================

 Copyright (c) 2013 - Christopher Baker <http://christopherbaker.net>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

 =============================================================================*/


#include "Put.h"


namespace ofx {
namespace HTTP {
namespace Request {


//------------------------------------------------------------------------------
Put::Put(const std::string& _url, const std::string& _httpVersion)
: BaseRequest(Poco::Net::HTTPRequest::HTTP_PUT,_url,_httpVersion)
{

}

//------------------------------------------------------------------------------
Put::Put(const Poco::URI& _uri, const std::string& _httpVersion)
: BaseRequest(Poco::Net::HTTPRequest::HTTP_PUT,_uri,_httpVersion)
{

}

//------------------------------------------------------------------------------
Put::~Put()
{

}

//------------------------------------------------------------------------------
void Put::prepareRequest(Poco::Net::HTTPRequest& request) const
{
    
}


} } }