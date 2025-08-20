// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIAGNOSTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIAGNOSTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DeleteDiagnosticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiagnosticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiagnosticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DeleteDiagnosticRequest() = default ;
    DeleteDiagnosticRequest(const DeleteDiagnosticRequest &) = default ;
    DeleteDiagnosticRequest(DeleteDiagnosticRequest &&) = default ;
    DeleteDiagnosticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiagnosticRequest() = default ;
    DeleteDiagnosticRequest& operator=(const DeleteDiagnosticRequest &) = default ;
    DeleteDiagnosticRequest& operator=(DeleteDiagnosticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DeleteDiagnosticRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The report ID. You can troubleshoot issues based on the report.
    std::shared_ptr<string> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
