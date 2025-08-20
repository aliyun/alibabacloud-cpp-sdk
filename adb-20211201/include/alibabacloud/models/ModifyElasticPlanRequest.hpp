// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
    };
    ModifyElasticPlanRequest() = default ;
    ModifyElasticPlanRequest(const ModifyElasticPlanRequest &) = default ;
    ModifyElasticPlanRequest(ModifyElasticPlanRequest &&) = default ;
    ModifyElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticPlanRequest() = default ;
    ModifyElasticPlanRequest& operator=(const ModifyElasticPlanRequest &) = default ;
    ModifyElasticPlanRequest& operator=(ModifyElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cronExpression_ != nullptr
        && this->DBClusterId_ != nullptr && this->elasticPlanName_ != nullptr && this->endTime_ != nullptr && this->startTime_ != nullptr && this->targetSize_ != nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyElasticPlanRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyElasticPlanRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline ModifyElasticPlanRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyElasticPlanRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyElasticPlanRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline string targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
    inline ModifyElasticPlanRequest& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


  protected:
    // A CORN expression that specifies the scaling cycle and time for the scaling plan.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the scaling plan.
    // 
    // >  You can call the [DescribeElasticPlans](https://help.aliyun.com/document_detail/601334.html) operation to query the names of scaling plans.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // The end time of the scaling plan.
    // 
    // >  Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
