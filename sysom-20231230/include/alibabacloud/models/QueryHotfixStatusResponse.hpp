// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTFIXSTATUSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTFIXSTATUSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryHotfixStatusResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class QueryHotfixStatusResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotfixStatusResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotfixStatusResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryHotfixStatusResponse() = default ;
    QueryHotfixStatusResponse(const QueryHotfixStatusResponse &) = default ;
    QueryHotfixStatusResponse(QueryHotfixStatusResponse &&) = default ;
    QueryHotfixStatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotfixStatusResponse() = default ;
    QueryHotfixStatusResponse& operator=(const QueryHotfixStatusResponse &) = default ;
    QueryHotfixStatusResponse& operator=(QueryHotfixStatusResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline QueryHotfixStatusResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryHotfixStatusResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryHotfixStatusResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryHotfixStatusResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryHotfixStatusResponseBody) };
    inline QueryHotfixStatusResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryHotfixStatusResponseBody) };
    inline QueryHotfixStatusResponse& setBody(const QueryHotfixStatusResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryHotfixStatusResponse& setBody(QueryHotfixStatusResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryHotfixStatusResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
