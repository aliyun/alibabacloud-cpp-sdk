// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMASKINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMASKINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyMaskingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMaskingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_TO_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleNameList, ruleNameList_);
      DARABONBA_PTR_TO_JSON(RuleVersion, ruleVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMaskingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(InterfaceVersion, interfaceVersion_);
      DARABONBA_PTR_FROM_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleNameList, ruleNameList_);
      DARABONBA_PTR_FROM_JSON(RuleVersion, ruleVersion_);
    };
    ModifyMaskingRulesRequest() = default ;
    ModifyMaskingRulesRequest(const ModifyMaskingRulesRequest &) = default ;
    ModifyMaskingRulesRequest(ModifyMaskingRulesRequest &&) = default ;
    ModifyMaskingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMaskingRulesRequest() = default ;
    ModifyMaskingRulesRequest& operator=(const ModifyMaskingRulesRequest &) = default ;
    ModifyMaskingRulesRequest& operator=(ModifyMaskingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->defaultAlgo_ != nullptr && this->enable_ != nullptr && this->interfaceVersion_ != nullptr && this->maskingAlgo_ != nullptr && this->ruleConfig_ != nullptr
        && this->ruleName_ != nullptr && this->ruleNameList_ != nullptr && this->ruleVersion_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyMaskingRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // defaultAlgo Field Functions 
    bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
    void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
    inline string defaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
    inline ModifyMaskingRulesRequest& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ModifyMaskingRulesRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // interfaceVersion Field Functions 
    bool hasInterfaceVersion() const { return this->interfaceVersion_ != nullptr;};
    void deleteInterfaceVersion() { this->interfaceVersion_ = nullptr;};
    inline string interfaceVersion() const { DARABONBA_PTR_GET_DEFAULT(interfaceVersion_, "") };
    inline ModifyMaskingRulesRequest& setInterfaceVersion(string interfaceVersion) { DARABONBA_PTR_SET_VALUE(interfaceVersion_, interfaceVersion) };


    // maskingAlgo Field Functions 
    bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
    void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
    inline string maskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
    inline ModifyMaskingRulesRequest& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyMaskingRulesRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyMaskingRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleNameList Field Functions 
    bool hasRuleNameList() const { return this->ruleNameList_ != nullptr;};
    void deleteRuleNameList() { this->ruleNameList_ = nullptr;};
    inline string ruleNameList() const { DARABONBA_PTR_GET_DEFAULT(ruleNameList_, "") };
    inline ModifyMaskingRulesRequest& setRuleNameList(string ruleNameList) { DARABONBA_PTR_SET_VALUE(ruleNameList_, ruleNameList) };


    // ruleVersion Field Functions 
    bool hasRuleVersion() const { return this->ruleVersion_ != nullptr;};
    void deleteRuleVersion() { this->ruleVersion_ = nullptr;};
    inline string ruleVersion() const { DARABONBA_PTR_GET_DEFAULT(ruleVersion_, "") };
    inline ModifyMaskingRulesRequest& setRuleVersion(string ruleVersion) { DARABONBA_PTR_SET_VALUE(ruleVersion_, ruleVersion) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of the clusters that belong to your Alibaba Cloud account, such as cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> defaultAlgo_ = nullptr;
    // Specifies whether to enable the specified masking rule. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > This parameter is valid only when the `RuleNameList` parameter is specfied.
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<string> interfaceVersion_ = nullptr;
    std::shared_ptr<string> maskingAlgo_ = nullptr;
    // The parameter that is used to specify the masking rule that you want to modify and the value in the JSON format. All parameter values are of the string type. Example: `{"auto": {"databases": ["db1"], "tables": ["tb1"], "columns": ["c1,c2"] }, "description": "This rule will be applied to the columns c1 and c2 in table t1", "enabled": true, "applies_to": ["user"]}`. Where,
    // 
    // *   `"auto"`: specifies that the dynamic masking algorithm is supported. This parameter is required.
    // *   `"databases"`: Optional. The names of databases to which the masking rule is applied. Separate the names with commas (,). If you leave this parameter empty, the masking rule applies to all databases in the cluster.
    // *   `"tables"`: Optional. The names of tables to which the masking rule is applied. Separate the names with commas (,). If you leave this parameter empty, the rule applies to all tables in the cluster.
    // *   `"columns"`: Required. The names of fields to which the masking rule is applied. Separate the names with commas (,).
    // *   `"description"`: Optional. The description of the masking rule. The description is up to 64 characters in length.
    // *   `"enabled"`: Required. Specifies whether to enable the masking rule. Valid values: **true** (enable) and **false** (disable).
    // *   `"applies_to"`: The names of database accounts to which the masking rule is applied. Separate the names with commas (,).
    // *   `"exempted"`: The names of database accounts to which the masking rule is not applied. Separate the names with commas (,).
    // 
    // > 
    // 
    // *   If you specify `RuleName`, `RuleConfig` parameter is required.
    // 
    // *   You need to select either `"applies_to"` or `"exempted"`.
    std::shared_ptr<string> ruleConfig_ = nullptr;
    // The name of the data masking rule. You can specify only one rule name at a time.
    // 
    // > 
    // 
    // *   You can call the [DescribeMaskingRules](https://help.aliyun.com/document_detail/212573.html) operation to query the details of all masking rules for a specified cluster, such as the names of the masking rules.
    // 
    // *   If the rule name does not exist in the cluster, the system automatically creates a masking rule based on the name and the value of `RuleConfig`.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The list of masking rule names. You can specify one or more masking rules at a time. Separate the masking rule names with commas (,).
    // 
    // > You must specify either the `RuleName` or `RuleNameList` parameter.
    std::shared_ptr<string> ruleNameList_ = nullptr;
    // The version of the masking rule. Default value: v1. Valid values:
    // 
    // *   v1
    // *   v2
    std::shared_ptr<string> ruleVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
