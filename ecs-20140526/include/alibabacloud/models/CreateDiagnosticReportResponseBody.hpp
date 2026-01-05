// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDiagnosticReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDiagnosticReportResponseBody() = default ;
    CreateDiagnosticReportResponseBody(const CreateDiagnosticReportResponseBody &) = default ;
    CreateDiagnosticReportResponseBody(CreateDiagnosticReportResponseBody &&) = default ;
    CreateDiagnosticReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticReportResponseBody() = default ;
    CreateDiagnosticReportResponseBody& operator=(const CreateDiagnosticReportResponseBody &) = default ;
    CreateDiagnosticReportResponseBody& operator=(CreateDiagnosticReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr
        && this->requestId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline CreateDiagnosticReportResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDiagnosticReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique ID of the diagnostic report.
    shared_ptr<string> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
