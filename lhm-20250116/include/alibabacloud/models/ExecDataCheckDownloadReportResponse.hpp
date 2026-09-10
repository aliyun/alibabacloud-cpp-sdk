// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKDOWNLOADREPORTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKDOWNLOADREPORTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ExecDataCheckDownloadReportResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckDownloadReportResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckDownloadReportResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckDownloadReportResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ExecDataCheckDownloadReportResponse() = default ;
    ExecDataCheckDownloadReportResponse(const ExecDataCheckDownloadReportResponse &) = default ;
    ExecDataCheckDownloadReportResponse(ExecDataCheckDownloadReportResponse &&) = default ;
    ExecDataCheckDownloadReportResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckDownloadReportResponse() = default ;
    ExecDataCheckDownloadReportResponse& operator=(const ExecDataCheckDownloadReportResponse &) = default ;
    ExecDataCheckDownloadReportResponse& operator=(ExecDataCheckDownloadReportResponse &&) = default ;
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
    inline ExecDataCheckDownloadReportResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ExecDataCheckDownloadReportResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ExecDataCheckDownloadReportResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ExecDataCheckDownloadReportResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ExecDataCheckDownloadReportResponseBody) };
    inline ExecDataCheckDownloadReportResponseBody getBody() { DARABONBA_PTR_GET(body_, ExecDataCheckDownloadReportResponseBody) };
    inline ExecDataCheckDownloadReportResponse& setBody(const ExecDataCheckDownloadReportResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ExecDataCheckDownloadReportResponse& setBody(ExecDataCheckDownloadReportResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ExecDataCheckDownloadReportResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
