// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlan, elasticPlan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlan, elasticPlan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticPlanAttributeResponseBody() = default ;
    DescribeElasticPlanAttributeResponseBody(const DescribeElasticPlanAttributeResponseBody &) = default ;
    DescribeElasticPlanAttributeResponseBody(DescribeElasticPlanAttributeResponseBody &&) = default ;
    DescribeElasticPlanAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanAttributeResponseBody() = default ;
    DescribeElasticPlanAttributeResponseBody& operator=(const DescribeElasticPlanAttributeResponseBody &) = default ;
    DescribeElasticPlanAttributeResponseBody& operator=(DescribeElasticPlanAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticPlan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticPlan& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ElasticPlan& obj) { 
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
      ElasticPlan() = default ;
      ElasticPlan(const ElasticPlan &) = default ;
      ElasticPlan(ElasticPlan &&) = default ;
      ElasticPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticPlan() = default ;
      ElasticPlan& operator=(const ElasticPlan &) = default ;
      ElasticPlan& operator=(ElasticPlan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoScale_ == nullptr
        && this->cronExpression_ == nullptr && this->elasticPlanName_ == nullptr && this->enabled_ == nullptr && this->endTime_ == nullptr && this->resourceGroupName_ == nullptr
        && this->startTime_ == nullptr && this->targetSize_ == nullptr && this->type_ == nullptr; };
      // autoScale Field Functions 
      bool hasAutoScale() const { return this->autoScale_ != nullptr;};
      void deleteAutoScale() { this->autoScale_ = nullptr;};
      inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
      inline ElasticPlan& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline ElasticPlan& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // elasticPlanName Field Functions 
      bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
      void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
      inline string getElasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
      inline ElasticPlan& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ElasticPlan& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ElasticPlan& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ElasticPlan& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ElasticPlan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // targetSize Field Functions 
      bool hasTargetSize() const { return this->targetSize_ != nullptr;};
      void deleteTargetSize() { this->targetSize_ = nullptr;};
      inline string getTargetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
      inline ElasticPlan& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ElasticPlan& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether **Default Proportional Scaling for EIUs** is enabled. Valid values: true: Default Proportional Scaling for EIUs is enabled. If you set this parameter to true, storage resources are scaled along with computing resources. false: Default Proportional Scaling for EIUs is not enabled.
      // 
      // >  You can enable Default Proportional Scaling for EIUs for only a single scaling plan of a cluster. After you enable a scaling plan of the Default Proportional Scaling for EIUs type, you cannot enable scaling plans of other types.
      shared_ptr<bool> autoScale_ {};
      // A CORN expression that indicates the scaling cycle and time for the scaling plan.
      shared_ptr<string> cronExpression_ {};
      // The name of the scaling plan.
      shared_ptr<string> elasticPlanName_ {};
      // Indicates whether the scaling plan is enabled.
      shared_ptr<bool> enabled_ {};
      // The end time of the scaling plan.
      // 
      // >  The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The name of the resource group used by the scaling plan.
      shared_ptr<string> resourceGroupName_ {};
      // The start time of the scaling plan.
      // 
      // >  The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The amount of elastic resources after scaling.
      shared_ptr<string> targetSize_ {};
      // The type of the scaling plan.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->elasticPlan_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticPlan Field Functions 
    bool hasElasticPlan() const { return this->elasticPlan_ != nullptr;};
    void deleteElasticPlan() { this->elasticPlan_ = nullptr;};
    inline const DescribeElasticPlanAttributeResponseBody::ElasticPlan & getElasticPlan() const { DARABONBA_PTR_GET_CONST(elasticPlan_, DescribeElasticPlanAttributeResponseBody::ElasticPlan) };
    inline DescribeElasticPlanAttributeResponseBody::ElasticPlan getElasticPlan() { DARABONBA_PTR_GET(elasticPlan_, DescribeElasticPlanAttributeResponseBody::ElasticPlan) };
    inline DescribeElasticPlanAttributeResponseBody& setElasticPlan(const DescribeElasticPlanAttributeResponseBody::ElasticPlan & elasticPlan) { DARABONBA_PTR_SET_VALUE(elasticPlan_, elasticPlan) };
    inline DescribeElasticPlanAttributeResponseBody& setElasticPlan(DescribeElasticPlanAttributeResponseBody::ElasticPlan && elasticPlan) { DARABONBA_PTR_SET_RVALUE(elasticPlan_, elasticPlan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried scaling plan.
    shared_ptr<DescribeElasticPlanAttributeResponseBody::ElasticPlan> elasticPlan_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
