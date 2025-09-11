// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateElasticRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateElasticRuleRequest() = default ;
    CreateElasticRuleRequest(const CreateElasticRuleRequest &) = default ;
    CreateElasticRuleRequest(CreateElasticRuleRequest &&) = default ;
    CreateElasticRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticRuleRequest() = default ;
    CreateElasticRuleRequest& operator=(const CreateElasticRuleRequest &) = default ;
    CreateElasticRuleRequest& operator=(CreateElasticRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterClass_ != nullptr
        && this->clusterId_ != nullptr && this->dbInstanceId_ != nullptr && this->elasticRuleStartTime_ != nullptr && this->executionPeriod_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // clusterClass Field Functions 
    bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
    void deleteClusterClass() { this->clusterClass_ = nullptr;};
    inline string clusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
    inline CreateElasticRuleRequest& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateElasticRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateElasticRuleRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // elasticRuleStartTime Field Functions 
    bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
    void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
    inline string elasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
    inline CreateElasticRuleRequest& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


    // executionPeriod Field Functions 
    bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
    void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
    inline string executionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
    inline CreateElasticRuleRequest& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateElasticRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateElasticRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The rule for computing resources of the required cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterClass_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The time when you want to execute the scheduled scaling rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticRuleStartTime_ = nullptr;
    // The execution cycle.
    // 
    // Valid value:
    // 
    // *   Day
    // 
    // This parameter is required.
    std::shared_ptr<string> executionPeriod_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
