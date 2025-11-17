// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryDashboardNl2sqlResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDashboardNl2sqlResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDashboardNl2sqlResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDashboardNl2sqlResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryDashboardNl2sqlResponse() = default ;
    QueryDashboardNl2sqlResponse(const QueryDashboardNl2sqlResponse &) = default ;
    QueryDashboardNl2sqlResponse(QueryDashboardNl2sqlResponse &&) = default ;
    QueryDashboardNl2sqlResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDashboardNl2sqlResponse() = default ;
    QueryDashboardNl2sqlResponse& operator=(const QueryDashboardNl2sqlResponse &) = default ;
    QueryDashboardNl2sqlResponse& operator=(QueryDashboardNl2sqlResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline QueryDashboardNl2sqlResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryDashboardNl2sqlResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryDashboardNl2sqlResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryDashboardNl2sqlResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, QueryDashboardNl2sqlResponseBody) };
    inline QueryDashboardNl2sqlResponseBody body() { DARABONBA_PTR_GET(body_, QueryDashboardNl2sqlResponseBody) };
    inline QueryDashboardNl2sqlResponse& setBody(const QueryDashboardNl2sqlResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryDashboardNl2sqlResponse& setBody(QueryDashboardNl2sqlResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<QueryDashboardNl2sqlResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
