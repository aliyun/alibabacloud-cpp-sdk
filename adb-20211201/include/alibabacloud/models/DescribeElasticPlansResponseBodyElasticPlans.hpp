// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODYELASTICPLANS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODYELASTICPLANS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlansResponseBodyElasticPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlansResponseBodyElasticPlans& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlansResponseBodyElasticPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeElasticPlansResponseBodyElasticPlans() = default ;
    DescribeElasticPlansResponseBodyElasticPlans(const DescribeElasticPlansResponseBodyElasticPlans &) = default ;
    DescribeElasticPlansResponseBodyElasticPlans(DescribeElasticPlansResponseBodyElasticPlans &&) = default ;
    DescribeElasticPlansResponseBodyElasticPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlansResponseBodyElasticPlans() = default ;
    DescribeElasticPlansResponseBodyElasticPlans& operator=(const DescribeElasticPlansResponseBodyElasticPlans &) = default ;
    DescribeElasticPlansResponseBodyElasticPlans& operator=(DescribeElasticPlansResponseBodyElasticPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoScale_ != nullptr
        && this->elasticPlanName_ != nullptr && this->enabled_ != nullptr && this->nextScheduleTime_ != nullptr && this->resourceGroupName_ != nullptr && this->targetSize_ != nullptr
        && this->type_ != nullptr; };
    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool autoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline DescribeElasticPlansResponseBodyElasticPlans& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DescribeElasticPlansResponseBodyElasticPlans& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeElasticPlansResponseBodyElasticPlans& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nextScheduleTime Field Functions 
    bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
    void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
    inline string nextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, "") };
    inline DescribeElasticPlansResponseBodyElasticPlans& setNextScheduleTime(string nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeElasticPlansResponseBodyElasticPlans& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline string targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
    inline DescribeElasticPlansResponseBodyElasticPlans& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeElasticPlansResponseBodyElasticPlans& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether **Proportional Default Scaling for EIUs** is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoScale_ = nullptr;
    // The name of the scaling plan.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // Indicates whether the scaling plan is immediately enabled after the plan is created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time when the next scheduling is performed.
    // 
    // > The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> nextScheduleTime_ = nullptr;
    // The name of the resource group.
    // 
    // > You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the name of a resource group within a cluster.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The amount of elastic resources after scaling.
    std::shared_ptr<string> targetSize_ = nullptr;
    // The type of the scaling plan. Valid values:
    // 
    // *   **EXECUTOR**: the interactive resource group type, which specifies the computing resource type.
    // *   **WORKER**: the EIU type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
