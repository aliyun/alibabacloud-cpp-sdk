// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DeleteDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DeleteDiagnoseReportRequest() = default ;
    DeleteDiagnoseReportRequest(const DeleteDiagnoseReportRequest &) = default ;
    DeleteDiagnoseReportRequest(DeleteDiagnoseReportRequest &&) = default ;
    DeleteDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiagnoseReportRequest() = default ;
    DeleteDiagnoseReportRequest& operator=(const DeleteDiagnoseReportRequest &) = default ;
    DeleteDiagnoseReportRequest& operator=(DeleteDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->reportId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDiagnoseReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DeleteDiagnoseReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The region ID
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the diagnostic report.
    // 
    // This parameter is required.
    shared_ptr<string> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
