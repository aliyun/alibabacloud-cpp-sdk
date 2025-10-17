// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODYELASTICPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODYELASTICPLAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanAttributeResponseBodyElasticPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanAttributeResponseBodyElasticPlan& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanAttributeResponseBodyElasticPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeElasticPlanAttributeResponseBodyElasticPlan() = default ;
    DescribeElasticPlanAttributeResponseBodyElasticPlan(const DescribeElasticPlanAttributeResponseBodyElasticPlan &) = default ;
    DescribeElasticPlanAttributeResponseBodyElasticPlan(DescribeElasticPlanAttributeResponseBodyElasticPlan &&) = default ;
    DescribeElasticPlanAttributeResponseBodyElasticPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanAttributeResponseBodyElasticPlan() = default ;
    DescribeElasticPlanAttributeResponseBodyElasticPlan& operator=(const DescribeElasticPlanAttributeResponseBodyElasticPlan &) = default ;
    DescribeElasticPlanAttributeResponseBodyElasticPlan& operator=(DescribeElasticPlanAttributeResponseBodyElasticPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScale_ == nullptr
        && return this->cronExpression_ == nullptr && return this->elasticPlanName_ == nullptr && return this->enabled_ == nullptr && return this->endTime_ == nullptr && return this->resourceGroupName_ == nullptr
        && return this->startTime_ == nullptr && return this->targetSize_ == nullptr && return this->type_ == nullptr; };
    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool autoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline string targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether **Default Proportional Scaling for EIUs** is enabled. Valid values: true: Default Proportional Scaling for EIUs is enabled. If you set this parameter to true, storage resources are scaled along with computing resources. false: Default Proportional Scaling for EIUs is not enabled.
    // 
    // >  You can enable Default Proportional Scaling for EIUs for only a single scaling plan of a cluster. After you enable a scaling plan of the Default Proportional Scaling for EIUs type, you cannot enable scaling plans of other types.
    std::shared_ptr<bool> autoScale_ = nullptr;
    // A CORN expression that indicates the scaling cycle and time for the scaling plan.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The name of the scaling plan.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // Indicates whether the scaling plan is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The end time of the scaling plan.
    // 
    // >  The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the resource group used by the scaling plan.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The start time of the scaling plan.
    // 
    // >  The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The amount of elastic resources after scaling.
    std::shared_ptr<string> targetSize_ = nullptr;
    // The type of the scaling plan.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
