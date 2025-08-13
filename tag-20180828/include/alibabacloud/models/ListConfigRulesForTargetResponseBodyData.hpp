// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListConfigRulesForTargetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesForTargetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Remediation, remediation_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesForTargetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListConfigRulesForTargetResponseBodyData() = default ;
    ListConfigRulesForTargetResponseBodyData(const ListConfigRulesForTargetResponseBodyData &) = default ;
    ListConfigRulesForTargetResponseBodyData(ListConfigRulesForTargetResponseBodyData &&) = default ;
    ListConfigRulesForTargetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesForTargetResponseBodyData() = default ;
    ListConfigRulesForTargetResponseBodyData& operator=(const ListConfigRulesForTargetResponseBodyData &) = default ;
    ListConfigRulesForTargetResponseBodyData& operator=(ListConfigRulesForTargetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregatorId_ != nullptr
        && this->configRuleId_ != nullptr && this->policyType_ != nullptr && this->remediation_ != nullptr && this->tagKey_ != nullptr && this->tagValue_ != nullptr
        && this->targetId_ != nullptr && this->targetType_ != nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // remediation Field Functions 
    bool hasRemediation() const { return this->remediation_ != nullptr;};
    void deleteRemediation() { this->remediation_ = nullptr;};
    inline bool remediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, false) };
    inline ListConfigRulesForTargetResponseBodyData& setRemediation(bool remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListConfigRulesForTargetResponseBodyData& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the account group.
    // 
    // You can use the ID to query the content of the related resource non-compliance report in Cloud Config.
    // 
    // >  This parameter is returned only if you use the Tag Policy feature in multi-account mode.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The use scenario of the tag policy. Valid values:
    // 
    // *   tags: enables tags with specified tag values to be added to resources.
    // *   rg_inherit: enables resources in a resource group to automatically inherit tags from the resource group.
    std::shared_ptr<string> policyType_ = nullptr;
    // Indicates whether automatic remediation is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> remediation_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value for automatic remediation.
    std::shared_ptr<string> tagValue_ = nullptr;
    // The ID of the object.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
