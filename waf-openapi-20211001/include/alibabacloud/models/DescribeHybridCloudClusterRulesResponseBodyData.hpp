// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeHybridCloudClusterRulesResponseBodyData() = default ;
    DescribeHybridCloudClusterRulesResponseBodyData(const DescribeHybridCloudClusterRulesResponseBodyData &) = default ;
    DescribeHybridCloudClusterRulesResponseBodyData(DescribeHybridCloudClusterRulesResponseBodyData &&) = default ;
    DescribeHybridCloudClusterRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterRulesResponseBodyData() = default ;
    DescribeHybridCloudClusterRulesResponseBodyData& operator=(const DescribeHybridCloudClusterRulesResponseBodyData &) = default ;
    DescribeHybridCloudClusterRulesResponseBodyData& operator=(DescribeHybridCloudClusterRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterRuleResourceId_ != nullptr && this->ruleConfig_ != nullptr && this->ruleType_ != nullptr && this->status_ != nullptr && this->version_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterRuleResourceId Field Functions 
    bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
    void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
    inline string clusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeHybridCloudClusterRulesResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> clusterId_ = nullptr;
    std::shared_ptr<string> clusterRuleResourceId_ = nullptr;
    std::shared_ptr<string> ruleConfig_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
