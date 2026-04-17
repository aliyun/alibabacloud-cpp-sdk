// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICREPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDiagnosticReportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticReportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalOptions, additionalOptionsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticReportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalOptions, additionalOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateDiagnosticReportShrinkRequest() = default ;
    CreateDiagnosticReportShrinkRequest(const CreateDiagnosticReportShrinkRequest &) = default ;
    CreateDiagnosticReportShrinkRequest(CreateDiagnosticReportShrinkRequest &&) = default ;
    CreateDiagnosticReportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticReportShrinkRequest() = default ;
    CreateDiagnosticReportShrinkRequest& operator=(const CreateDiagnosticReportShrinkRequest &) = default ;
    CreateDiagnosticReportShrinkRequest& operator=(CreateDiagnosticReportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalOptionsShrink_ == nullptr
        && this->endTime_ == nullptr && this->metricSetId_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->startTime_ == nullptr; };
    // additionalOptionsShrink Field Functions 
    bool hasAdditionalOptionsShrink() const { return this->additionalOptionsShrink_ != nullptr;};
    void deleteAdditionalOptionsShrink() { this->additionalOptionsShrink_ = nullptr;};
    inline string getAdditionalOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(additionalOptionsShrink_, "") };
    inline CreateDiagnosticReportShrinkRequest& setAdditionalOptionsShrink(string additionalOptionsShrink) { DARABONBA_PTR_SET_VALUE(additionalOptionsShrink_, additionalOptionsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateDiagnosticReportShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string getMetricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline CreateDiagnosticReportShrinkRequest& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiagnosticReportShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateDiagnosticReportShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateDiagnosticReportShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> additionalOptionsShrink_ {};
    // The end time. This parameter takes effect only for diagnostic metrics that do not need to be assessed by running Cloud Assistant commands in guest operating systems.
    shared_ptr<string> endTime_ {};
    // The ID of the diagnostic metric set. If this parameter is left empty, the dms-instancedefault set is used, which is the default diagnostic metric set provided for Elastic Compute Service (ECS) instances.
    shared_ptr<string> metricSetId_ {};
    // The region ID of the security group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of resource N.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The start time. This parameter takes effect only for diagnostic metrics that do not need to be assessed by running Cloud Assistant commands in guest operating systems.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
