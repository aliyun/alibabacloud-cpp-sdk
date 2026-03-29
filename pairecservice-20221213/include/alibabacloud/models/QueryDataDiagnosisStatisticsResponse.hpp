// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryDataDiagnosisStatisticsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryDataDiagnosisStatisticsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataDiagnosisStatisticsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataDiagnosisStatisticsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryDataDiagnosisStatisticsResponse() = default ;
    QueryDataDiagnosisStatisticsResponse(const QueryDataDiagnosisStatisticsResponse &) = default ;
    QueryDataDiagnosisStatisticsResponse(QueryDataDiagnosisStatisticsResponse &&) = default ;
    QueryDataDiagnosisStatisticsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataDiagnosisStatisticsResponse() = default ;
    QueryDataDiagnosisStatisticsResponse& operator=(const QueryDataDiagnosisStatisticsResponse &) = default ;
    QueryDataDiagnosisStatisticsResponse& operator=(QueryDataDiagnosisStatisticsResponse &&) = default ;
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
    inline QueryDataDiagnosisStatisticsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryDataDiagnosisStatisticsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryDataDiagnosisStatisticsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryDataDiagnosisStatisticsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryDataDiagnosisStatisticsResponseBody) };
    inline QueryDataDiagnosisStatisticsResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryDataDiagnosisStatisticsResponseBody) };
    inline QueryDataDiagnosisStatisticsResponse& setBody(const QueryDataDiagnosisStatisticsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryDataDiagnosisStatisticsResponse& setBody(QueryDataDiagnosisStatisticsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryDataDiagnosisStatisticsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
