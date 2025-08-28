// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryVirtualNumberResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVirtualNumberResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVirtualNumberResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVirtualNumberResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryVirtualNumberResponse() = default ;
    QueryVirtualNumberResponse(const QueryVirtualNumberResponse &) = default ;
    QueryVirtualNumberResponse(QueryVirtualNumberResponse &&) = default ;
    QueryVirtualNumberResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVirtualNumberResponse() = default ;
    QueryVirtualNumberResponse& operator=(const QueryVirtualNumberResponse &) = default ;
    QueryVirtualNumberResponse& operator=(QueryVirtualNumberResponse &&) = default ;
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
    inline QueryVirtualNumberResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryVirtualNumberResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryVirtualNumberResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryVirtualNumberResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, QueryVirtualNumberResponseBody) };
    inline QueryVirtualNumberResponseBody body() { DARABONBA_PTR_GET(body_, QueryVirtualNumberResponseBody) };
    inline QueryVirtualNumberResponse& setBody(const QueryVirtualNumberResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryVirtualNumberResponse& setBody(QueryVirtualNumberResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<QueryVirtualNumberResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
