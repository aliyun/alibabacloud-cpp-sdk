// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRealtimeConcurrencyReportResponseBodyReports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetRealtimeConcurrencyReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeConcurrencyReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeConcurrencyReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRealtimeConcurrencyReportResponseBody() = default ;
    GetRealtimeConcurrencyReportResponseBody(const GetRealtimeConcurrencyReportResponseBody &) = default ;
    GetRealtimeConcurrencyReportResponseBody(GetRealtimeConcurrencyReportResponseBody &&) = default ;
    GetRealtimeConcurrencyReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeConcurrencyReportResponseBody() = default ;
    GetRealtimeConcurrencyReportResponseBody& operator=(const GetRealtimeConcurrencyReportResponseBody &) = default ;
    GetRealtimeConcurrencyReportResponseBody& operator=(GetRealtimeConcurrencyReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->reportDate_ == nullptr && return this->reports_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRealtimeConcurrencyReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reportDate Field Functions 
    bool hasReportDate() const { return this->reportDate_ != nullptr;};
    void deleteReportDate() { this->reportDate_ = nullptr;};
    inline int64_t reportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBody& setReportDate(int64_t reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const GetRealtimeConcurrencyReportResponseBodyReports & reports() const { DARABONBA_PTR_GET_CONST(reports_, GetRealtimeConcurrencyReportResponseBodyReports) };
    inline GetRealtimeConcurrencyReportResponseBodyReports reports() { DARABONBA_PTR_GET(reports_, GetRealtimeConcurrencyReportResponseBodyReports) };
    inline GetRealtimeConcurrencyReportResponseBody& setReports(const GetRealtimeConcurrencyReportResponseBodyReports & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline GetRealtimeConcurrencyReportResponseBody& setReports(GetRealtimeConcurrencyReportResponseBodyReports && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRealtimeConcurrencyReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int64_t> reportDate_ = nullptr;
    std::shared_ptr<GetRealtimeConcurrencyReportResponseBodyReports> reports_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
