// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryMonthlySlaListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryMonthlySlaListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonthlySlaListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonthlySlaListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryMonthlySlaListResponse() = default ;
    QueryMonthlySlaListResponse(const QueryMonthlySlaListResponse &) = default ;
    QueryMonthlySlaListResponse(QueryMonthlySlaListResponse &&) = default ;
    QueryMonthlySlaListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonthlySlaListResponse() = default ;
    QueryMonthlySlaListResponse& operator=(const QueryMonthlySlaListResponse &) = default ;
    QueryMonthlySlaListResponse& operator=(QueryMonthlySlaListResponse &&) = default ;
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
    inline QueryMonthlySlaListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryMonthlySlaListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryMonthlySlaListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryMonthlySlaListResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryMonthlySlaListResponseBody) };
    inline QueryMonthlySlaListResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryMonthlySlaListResponseBody) };
    inline QueryMonthlySlaListResponse& setBody(const QueryMonthlySlaListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryMonthlySlaListResponse& setBody(QueryMonthlySlaListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryMonthlySlaListResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
