// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionRuleDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionRuleDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionRuleDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetInterceptionRuleDetailRequest() = default ;
    GetInterceptionRuleDetailRequest(const GetInterceptionRuleDetailRequest &) = default ;
    GetInterceptionRuleDetailRequest(GetInterceptionRuleDetailRequest &&) = default ;
    GetInterceptionRuleDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionRuleDetailRequest() = default ;
    GetInterceptionRuleDetailRequest& operator=(const GetInterceptionRuleDetailRequest &) = default ;
    GetInterceptionRuleDetailRequest& operator=(GetInterceptionRuleDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->ruleId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetInterceptionRuleDetailRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetInterceptionRuleDetailRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The ID of the rule.
    // 
    // > You can call the [ListInterceptionRulePage](~~ListInterceptionRulePage~~) operation to query the IDs of rules.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
