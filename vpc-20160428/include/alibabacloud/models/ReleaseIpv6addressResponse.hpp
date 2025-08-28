// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEIPV6ADDRESSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RELEASEIPV6ADDRESSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ReleaseIpv6AddressResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ReleaseIpv6AddressResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseIpv6AddressResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseIpv6AddressResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ReleaseIpv6AddressResponse() = default ;
    ReleaseIpv6AddressResponse(const ReleaseIpv6AddressResponse &) = default ;
    ReleaseIpv6AddressResponse(ReleaseIpv6AddressResponse &&) = default ;
    ReleaseIpv6AddressResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseIpv6AddressResponse() = default ;
    ReleaseIpv6AddressResponse& operator=(const ReleaseIpv6AddressResponse &) = default ;
    ReleaseIpv6AddressResponse& operator=(ReleaseIpv6AddressResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ReleaseIpv6AddressResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ReleaseIpv6AddressResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ReleaseIpv6AddressResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ReleaseIpv6AddressResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ReleaseIpv6AddressResponseBody) };
    inline ReleaseIpv6AddressResponseBody body() { DARABONBA_PTR_GET(body_, ReleaseIpv6AddressResponseBody) };
    inline ReleaseIpv6AddressResponse& setBody(const ReleaseIpv6AddressResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ReleaseIpv6AddressResponse& setBody(ReleaseIpv6AddressResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ReleaseIpv6AddressResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
