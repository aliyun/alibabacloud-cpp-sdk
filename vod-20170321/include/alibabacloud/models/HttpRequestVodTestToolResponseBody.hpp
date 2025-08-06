// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPREQUESTVODTESTTOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HTTPREQUESTVODTESTTOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class HttpRequestVodTestToolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRequestVodTestToolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRequestVodTestToolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    HttpRequestVodTestToolResponseBody() = default ;
    HttpRequestVodTestToolResponseBody(const HttpRequestVodTestToolResponseBody &) = default ;
    HttpRequestVodTestToolResponseBody(HttpRequestVodTestToolResponseBody &&) = default ;
    HttpRequestVodTestToolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRequestVodTestToolResponseBody() = default ;
    HttpRequestVodTestToolResponseBody& operator=(const HttpRequestVodTestToolResponseBody &) = default ;
    HttpRequestVodTestToolResponseBody& operator=(HttpRequestVodTestToolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->header_ != nullptr && this->requestId_ != nullptr && this->statusCode_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline HttpRequestVodTestToolResponseBody& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline string header() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
    inline HttpRequestVodTestToolResponseBody& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HttpRequestVodTestToolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline HttpRequestVodTestToolResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> header_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
