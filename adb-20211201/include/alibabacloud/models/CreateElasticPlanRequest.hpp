// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateElasticPlanRequest() = default ;
    CreateElasticPlanRequest(const CreateElasticPlanRequest &) = default ;
    CreateElasticPlanRequest(CreateElasticPlanRequest &&) = default ;
    CreateElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticPlanRequest() = default ;
    CreateElasticPlanRequest& operator=(const CreateElasticPlanRequest &) = default ;
    CreateElasticPlanRequest& operator=(CreateElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScale_ == nullptr
        && return this->cronExpression_ == nullptr && return this->DBClusterId_ == nullptr && return this->elasticPlanName_ == nullptr && return this->enabled_ == nullptr && return this->endTime_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->startTime_ == nullptr && return this->targetSize_ == nullptr && return this->type_ == nullptr; };
    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool autoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline CreateElasticPlanRequest& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateElasticPlanRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateElasticPlanRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline CreateElasticPlanRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateElasticPlanRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateElasticPlanRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline CreateElasticPlanRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateElasticPlanRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline string targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
    inline CreateElasticPlanRequest& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateElasticPlanRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable **Default Proportional Scaling for EIUs**. Valid values:
    // 
    // *   true. In this case, storage resources are scaled along with computing resources, and the TargetSize and CronExpression parameters are not supported.
    // *   false
    // 
    // > 
    // 
    // *   This parameter must be specified when Type is set to WORKER. This parameter is not required when Type is set to EXECUTOR.
    // 
    // *   You can enable Default Proportional Scaling for EIUs for only a single scaling plan of a cluster.
    std::shared_ptr<bool> autoScale_ = nullptr;
    // A CORN expression that specifies the scaling cycle and time for the scaling plan.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the scaling plan.
    // 
    // >  The name must be 2 to 30 characters in length and can contain letters, digits, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // Specifies whether to immediately enable the scaling plan after the plan is created. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The end time of the scaling plan.
    // 
    // >  Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the resource group.
    // 
    // > 
    // 
    // *   If you want to create a scaling plan that uses interactive resource groups, you must specify this parameter. If you want to create a scaling plan that uses elastic I/O units (EIUs), you do not need to specify this parameter.
    // 
    // *   You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the resource group name for a cluster.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The start time of the scaling plan.
    // 
    // >  Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The desired specifications of elastic resources after scaling.
    // 
    // > 
    // 
    // *   If the scaling plan uses **EIUs** and **Default Proportional Scaling for EIUs** is enabled, you do not need to specify this parameter. In other cases, you must specify this parameter.
    // 
    // *   You can call the [DescribeElasticPlanSpecifications](https://help.aliyun.com/document_detail/601278.html) operation to query the specifications that are supported for scaling plans.
    std::shared_ptr<string> targetSize_ = nullptr;
    // The type of the scaling plan. Valid values:
    // 
    // *   EXECUTOR: the interactive resource group type, which indicates the computing resource type.
    // *   WORKER: the EIU type.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
