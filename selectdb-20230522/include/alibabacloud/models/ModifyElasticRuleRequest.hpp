// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifyElasticRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    ModifyElasticRuleRequest() = default ;
    ModifyElasticRuleRequest(const ModifyElasticRuleRequest &) = default ;
    ModifyElasticRuleRequest(ModifyElasticRuleRequest &&) = default ;
    ModifyElasticRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticRuleRequest() = default ;
    ModifyElasticRuleRequest& operator=(const ModifyElasticRuleRequest &) = default ;
    ModifyElasticRuleRequest& operator=(ModifyElasticRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterClass_ == nullptr
        && this->clusterId_ == nullptr && this->dbInstanceId_ == nullptr && this->elasticRuleStartTime_ == nullptr && this->executionPeriod_ == nullptr && this->product_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->ruleId_ == nullptr; };
    // clusterClass Field Functions 
    bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
    void deleteClusterClass() { this->clusterClass_ = nullptr;};
    inline string getClusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
    inline ModifyElasticRuleRequest& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyElasticRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyElasticRuleRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // elasticRuleStartTime Field Functions 
    bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
    void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
    inline string getElasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
    inline ModifyElasticRuleRequest& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


    // executionPeriod Field Functions 
    bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
    void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
    inline string getExecutionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
    inline ModifyElasticRuleRequest& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ModifyElasticRuleRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyElasticRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyElasticRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyElasticRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The rule for computing resources of the required cluster.
    shared_ptr<string> clusterClass_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> dbInstanceId_ {};
    // The time when you want to execute the scheduled scaling rule.
    shared_ptr<string> elasticRuleStartTime_ {};
    // The execution cycle.
    // 
    // Valid value:
    // 
    // *   Day
    shared_ptr<string> executionPeriod_ {};
    // The cloud service.
    shared_ptr<string> product_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
