// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_TO_JSON(ReportRegionId, reportRegionId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_FROM_JSON(ReportRegionId, reportRegionId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest(CreateInspectionTaskRequest &&) = default ;
    CreateInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest& operator=(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest& operator=(CreateInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->inspectionItems_ == nullptr && this->instanceIds_ == nullptr && this->regionId_ == nullptr && this->reportLanguage_ == nullptr && this->reportRegionId_ == nullptr
        && this->reportType_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateInspectionTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inspectionItems Field Functions 
    bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
    void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
    inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
    inline CreateInspectionTaskRequest& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline CreateInspectionTaskRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInspectionTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportLanguage Field Functions 
    bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
    void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
    inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
    inline CreateInspectionTaskRequest& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


    // reportRegionId Field Functions 
    bool hasReportRegionId() const { return this->reportRegionId_ != nullptr;};
    void deleteReportRegionId() { this->reportRegionId_ = nullptr;};
    inline string getReportRegionId() const { DARABONBA_PTR_GET_DEFAULT(reportRegionId_, "") };
    inline CreateInspectionTaskRequest& setReportRegionId(string reportRegionId) { DARABONBA_PTR_SET_VALUE(reportRegionId_, reportRegionId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline CreateInspectionTaskRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateInspectionTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the inspection task. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. By default, the time range of the task is the latest 24 hours.
    shared_ptr<string> endTime_ {};
    // The inspection items. Separates multiple items with commas (,). If this parameter is empty or not specified, all inspection items are executed.
    // 
    // ### [](#)Valid values:
    // 
    // *   instance_info
    // *   resource_usage
    // *   connection_session_management
    // *   performance_metrics
    // *   slow_query_analysis
    // *   error_log_analysis
    // *   lock_wait_deadlock_analysis
    // *   backup_recovery_analysis
    // *   high_availability_disaster_recovery_analysis
    // *   security_configuration_analysis
    // *   storage_engine_analysis
    // *   schema_object_analysis
    shared_ptr<string> inspectionItems_ {};
    // The instances covered by the task. Separates multiple instance IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> reportLanguage_ {};
    shared_ptr<string> reportRegionId_ {};
    shared_ptr<string> reportType_ {};
    // The start time of the inspection task. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. By default, the time range of the task is the latest 24 hours.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
