// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIAGNOSTICREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIAGNOSTICREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteDiagnosticReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiagnosticReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiagnosticReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
    };
    DeleteDiagnosticReportsRequest() = default ;
    DeleteDiagnosticReportsRequest(const DeleteDiagnosticReportsRequest &) = default ;
    DeleteDiagnosticReportsRequest(DeleteDiagnosticReportsRequest &&) = default ;
    DeleteDiagnosticReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiagnosticReportsRequest() = default ;
    DeleteDiagnosticReportsRequest& operator=(const DeleteDiagnosticReportsRequest &) = default ;
    DeleteDiagnosticReportsRequest& operator=(DeleteDiagnosticReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->reportIds_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDiagnosticReportsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline const vector<string> & getReportIds() const { DARABONBA_PTR_GET_CONST(reportIds_, vector<string>) };
    inline vector<string> getReportIds() { DARABONBA_PTR_GET(reportIds_, vector<string>) };
    inline DeleteDiagnosticReportsRequest& setReportIds(const vector<string> & reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };
    inline DeleteDiagnosticReportsRequest& setReportIds(vector<string> && reportIds) { DARABONBA_PTR_SET_RVALUE(reportIds_, reportIds) };


  protected:
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of the diagnostic reports. You can specify up to 100 resource IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> reportIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
