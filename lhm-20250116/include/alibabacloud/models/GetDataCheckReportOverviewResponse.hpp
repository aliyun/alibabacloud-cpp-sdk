// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKREPORTOVERVIEWRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKREPORTOVERVIEWRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDataCheckReportOverviewResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckReportOverviewResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckReportOverviewResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckReportOverviewResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDataCheckReportOverviewResponse() = default ;
    GetDataCheckReportOverviewResponse(const GetDataCheckReportOverviewResponse &) = default ;
    GetDataCheckReportOverviewResponse(GetDataCheckReportOverviewResponse &&) = default ;
    GetDataCheckReportOverviewResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckReportOverviewResponse() = default ;
    GetDataCheckReportOverviewResponse& operator=(const GetDataCheckReportOverviewResponse &) = default ;
    GetDataCheckReportOverviewResponse& operator=(GetDataCheckReportOverviewResponse &&) = default ;
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
    inline GetDataCheckReportOverviewResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDataCheckReportOverviewResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDataCheckReportOverviewResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDataCheckReportOverviewResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetDataCheckReportOverviewResponseBody) };
    inline GetDataCheckReportOverviewResponseBody getBody() { DARABONBA_PTR_GET(body_, GetDataCheckReportOverviewResponseBody) };
    inline GetDataCheckReportOverviewResponse& setBody(const GetDataCheckReportOverviewResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDataCheckReportOverviewResponse& setBody(GetDataCheckReportOverviewResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetDataCheckReportOverviewResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
