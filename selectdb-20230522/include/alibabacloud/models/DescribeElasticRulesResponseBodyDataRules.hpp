// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICRULESRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICRULESRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeElasticRulesResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
      DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeElasticRulesResponseBodyDataRules() = default ;
    DescribeElasticRulesResponseBodyDataRules(const DescribeElasticRulesResponseBodyDataRules &) = default ;
    DescribeElasticRulesResponseBodyDataRules(DescribeElasticRulesResponseBodyDataRules &&) = default ;
    DescribeElasticRulesResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticRulesResponseBodyDataRules() = default ;
    DescribeElasticRulesResponseBodyDataRules& operator=(const DescribeElasticRulesResponseBodyDataRules &) = default ;
    DescribeElasticRulesResponseBodyDataRules& operator=(DescribeElasticRulesResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterClass_ == nullptr
        && return this->elasticRuleStartTime_ == nullptr && return this->executionPeriod_ == nullptr && return this->ruleId_ == nullptr; };
    // clusterClass Field Functions 
    bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
    void deleteClusterClass() { this->clusterClass_ = nullptr;};
    inline string clusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
    inline DescribeElasticRulesResponseBodyDataRules& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


    // elasticRuleStartTime Field Functions 
    bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
    void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
    inline string elasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
    inline DescribeElasticRulesResponseBodyDataRules& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


    // executionPeriod Field Functions 
    bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
    void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
    inline string executionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
    inline DescribeElasticRulesResponseBodyDataRules& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeElasticRulesResponseBodyDataRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The rule for computing resources of the required cluster.
    std::shared_ptr<string> clusterClass_ = nullptr;
    // The time when you want to execute the scheduled scaling rule.
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
