// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODYCLUSTERRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODYCLUSTERRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterRuleResponseBodyClusterRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterRuleResponseBodyClusterRule& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterRuleResponseBodyClusterRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeHybridCloudClusterRuleResponseBodyClusterRule() = default ;
    DescribeHybridCloudClusterRuleResponseBodyClusterRule(const DescribeHybridCloudClusterRuleResponseBodyClusterRule &) = default ;
    DescribeHybridCloudClusterRuleResponseBodyClusterRule(DescribeHybridCloudClusterRuleResponseBodyClusterRule &&) = default ;
    DescribeHybridCloudClusterRuleResponseBodyClusterRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterRuleResponseBodyClusterRule() = default ;
    DescribeHybridCloudClusterRuleResponseBodyClusterRule& operator=(const DescribeHybridCloudClusterRuleResponseBodyClusterRule &) = default ;
    DescribeHybridCloudClusterRuleResponseBodyClusterRule& operator=(DescribeHybridCloudClusterRuleResponseBodyClusterRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterRuleResourceId_ != nullptr
        && this->ruleConfig_ != nullptr && this->ruleStatus_ != nullptr && this->ruleType_ != nullptr; };
    // clusterRuleResourceId Field Functions 
    bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
    void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
    inline string clusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
    inline DescribeHybridCloudClusterRuleResponseBodyClusterRule& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline DescribeHybridCloudClusterRuleResponseBodyClusterRule& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeHybridCloudClusterRuleResponseBodyClusterRule& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeHybridCloudClusterRuleResponseBodyClusterRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    std::shared_ptr<string> clusterRuleResourceId_ = nullptr;
    // The configuration of the rule.
    std::shared_ptr<string> ruleConfig_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **pullin**: The traffic redirection rule of the hybrid cloud cluster.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
