// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateElasticRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CreateElasticRuleResponseBodyData() = default ;
    CreateElasticRuleResponseBodyData(const CreateElasticRuleResponseBodyData &) = default ;
    CreateElasticRuleResponseBodyData(CreateElasticRuleResponseBodyData &&) = default ;
    CreateElasticRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticRuleResponseBodyData() = default ;
    CreateElasticRuleResponseBodyData& operator=(const CreateElasticRuleResponseBodyData &) = default ;
    CreateElasticRuleResponseBodyData& operator=(CreateElasticRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterClass_ != nullptr
        && this->clusterId_ != nullptr && this->dbInstanceId_ != nullptr && this->elasticRuleStartTime_ != nullptr && this->executionPeriod_ != nullptr && this->ruleId_ != nullptr; };
    // clusterClass Field Functions 
    bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
    void deleteClusterClass() { this->clusterClass_ = nullptr;};
    inline string clusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
    inline CreateElasticRuleResponseBodyData& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateElasticRuleResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateElasticRuleResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // elasticRuleStartTime Field Functions 
    bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
    void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
    inline string elasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
    inline CreateElasticRuleResponseBodyData& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


    // executionPeriod Field Functions 
    bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
    void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
    inline string executionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
    inline CreateElasticRuleResponseBodyData& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline CreateElasticRuleResponseBodyData& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The rule for computing resources of the required cluster.
    std::shared_ptr<string> clusterClass_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The time when the scheduled scaling rule is executed.
    std::shared_ptr<string> elasticRuleStartTime_ = nullptr;
    // The execution cycle.
    // 
    // Valid value:
    // 
    // *   Day
    std::shared_ptr<string> executionPeriod_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
