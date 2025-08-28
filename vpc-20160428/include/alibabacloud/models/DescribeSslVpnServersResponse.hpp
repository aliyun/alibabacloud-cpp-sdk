// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeSslVpnServersResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnServersResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnServersResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnServersResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeSslVpnServersResponse() = default ;
    DescribeSslVpnServersResponse(const DescribeSslVpnServersResponse &) = default ;
    DescribeSslVpnServersResponse(DescribeSslVpnServersResponse &&) = default ;
    DescribeSslVpnServersResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnServersResponse() = default ;
    DescribeSslVpnServersResponse& operator=(const DescribeSslVpnServersResponse &) = default ;
    DescribeSslVpnServersResponse& operator=(DescribeSslVpnServersResponse &&) = default ;
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
    inline DescribeSslVpnServersResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeSslVpnServersResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeSslVpnServersResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeSslVpnServersResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeSslVpnServersResponseBody) };
    inline DescribeSslVpnServersResponseBody body() { DARABONBA_PTR_GET(body_, DescribeSslVpnServersResponseBody) };
    inline DescribeSslVpnServersResponse& setBody(const DescribeSslVpnServersResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeSslVpnServersResponse& setBody(DescribeSslVpnServersResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeSslVpnServersResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
