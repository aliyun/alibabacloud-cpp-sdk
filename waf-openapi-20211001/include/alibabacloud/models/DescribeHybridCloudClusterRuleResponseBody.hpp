// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRule, clusterRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRule, clusterRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudClusterRuleResponseBody() = default ;
    DescribeHybridCloudClusterRuleResponseBody(const DescribeHybridCloudClusterRuleResponseBody &) = default ;
    DescribeHybridCloudClusterRuleResponseBody(DescribeHybridCloudClusterRuleResponseBody &&) = default ;
    DescribeHybridCloudClusterRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterRuleResponseBody() = default ;
    DescribeHybridCloudClusterRuleResponseBody& operator=(const DescribeHybridCloudClusterRuleResponseBody &) = default ;
    DescribeHybridCloudClusterRuleResponseBody& operator=(DescribeHybridCloudClusterRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterRule& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
        DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
        DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterRule& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
        DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
        DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      };
      ClusterRule() = default ;
      ClusterRule(const ClusterRule &) = default ;
      ClusterRule(ClusterRule &&) = default ;
      ClusterRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterRule() = default ;
      ClusterRule& operator=(const ClusterRule &) = default ;
      ClusterRule& operator=(ClusterRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterRuleResourceId_ == nullptr
        && this->ruleConfig_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr; };
      // clusterRuleResourceId Field Functions 
      bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
      void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
      inline string getClusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
      inline ClusterRule& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


      // ruleConfig Field Functions 
      bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
      void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
      inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
      inline ClusterRule& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
      inline ClusterRule& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline ClusterRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      shared_ptr<string> clusterRuleResourceId_ {};
      // The configuration of the rule.
      shared_ptr<string> ruleConfig_ {};
      // The status of the rule. Valid values:
      // 
      // *   **on**: enabled.
      // *   **off**: disabled.
      shared_ptr<string> ruleStatus_ {};
      // The type of the rule. Valid values:
      // 
      // *   **pullin**: The traffic redirection rule of the hybrid cloud cluster.
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->clusterRule_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterRule Field Functions 
    bool hasClusterRule() const { return this->clusterRule_ != nullptr;};
    void deleteClusterRule() { this->clusterRule_ = nullptr;};
    inline const DescribeHybridCloudClusterRuleResponseBody::ClusterRule & getClusterRule() const { DARABONBA_PTR_GET_CONST(clusterRule_, DescribeHybridCloudClusterRuleResponseBody::ClusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBody::ClusterRule getClusterRule() { DARABONBA_PTR_GET(clusterRule_, DescribeHybridCloudClusterRuleResponseBody::ClusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBody& setClusterRule(const DescribeHybridCloudClusterRuleResponseBody::ClusterRule & clusterRule) { DARABONBA_PTR_SET_VALUE(clusterRule_, clusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBody& setClusterRule(DescribeHybridCloudClusterRuleResponseBody::ClusterRule && clusterRule) { DARABONBA_PTR_SET_RVALUE(clusterRule_, clusterRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClusterRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    shared_ptr<DescribeHybridCloudClusterRuleResponseBody::ClusterRule> clusterRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
