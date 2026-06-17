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
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->defaultAlgo_ == nullptr && this->enable_ == nullptr && this->interfaceVersion_ == nullptr && this->maskingAlgo_ == nullptr && this->ruleConfig_ == nullptr
        && this->ruleName_ == nullptr && this->ruleNameList_ == nullptr && this->ruleVersion_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyMaskingRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // defaultAlgo Field Functions 
    bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
    void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
    inline string getDefaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
    inline ModifyMaskingRulesRequest& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ModifyMaskingRulesRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // interfaceVersion Field Functions 
    bool hasInterfaceVersion() const { return this->interfaceVersion_ != nullptr;};
    void deleteInterfaceVersion() { this->interfaceVersion_ = nullptr;};
    inline string getInterfaceVersion() const { DARABONBA_PTR_GET_DEFAULT(interfaceVersion_, "") };
    inline ModifyMaskingRulesRequest& setInterfaceVersion(string interfaceVersion) { DARABONBA_PTR_SET_VALUE(interfaceVersion_, interfaceVersion) };


    // maskingAlgo Field Functions 
    bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
    void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
    inline string getMaskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
    inline ModifyMaskingRulesRequest& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyMaskingRulesRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyMaskingRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleNameList Field Functions 
    bool hasRuleNameList() const { return this->ruleNameList_ != nullptr;};
    void deleteRuleNameList() { this->ruleNameList_ = nullptr;};
    inline string getRuleNameList() const { DARABONBA_PTR_GET_DEFAULT(ruleNameList_, "") };
    inline ModifyMaskingRulesRequest& setRuleNameList(string ruleNameList) { DARABONBA_PTR_SET_VALUE(ruleNameList_, ruleNameList) };


    // ruleVersion Field Functions 
    bool hasRuleVersion() const { return this->ruleVersion_ != nullptr;};
    void deleteRuleVersion() { this->ruleVersion_ = nullptr;};
    inline string getRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(ruleVersion_, "") };
    inline ModifyMaskingRulesRequest& setRuleVersion(string ruleVersion) { DARABONBA_PTR_SET_VALUE(ruleVersion_, ruleVersion) };


  protected:
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters in your account, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The default algorithm.
    // 
    // > You must specify either MaskingAlgo or DefaultAIgo.
    shared_ptr<string> defaultAlgo_ {};
    // Enables or disables the specified data masking rules. Valid values:
    // 
    // - **true**: enables the specified rules.
    // 
    // - **false**: disables the specified rules.
    // 
    // > This parameter applies only when the `RuleNameList` parameter is specified.
    shared_ptr<string> enable_ {};
    // The type of rule to modify. Valid values:
    // 
    // v1: Modifies a data masking rule.
    // v2: Modifies an encryption rule.
    shared_ptr<string> interfaceVersion_ {};
    // The masking algorithm. Specify one or more algorithms and their parameters. Format: `[{ "name": "algorithm_name", "params": {"key": "value"} }]`
    shared_ptr<string> maskingAlgo_ {};
    // A JSON string that specifies the rule configuration. Example: `{"auto": {"databases": ["db1"], "tables": ["tb1"], "columns": ["c1,c2"] }, "description": "This rule will be applied to the columns c1 and c2 in table t1", "enabled": true, "applies_to": ["user"]}`. The JSON string includes the following fields:
    // 
    // - `"auto"`: Required. The object that contains the configuration for the dynamic data masking algorithm.
    // 
    // - `"databases"`: Optional. The databases to which the rule applies. Separate multiple database names with a comma (,). If this parameter is omitted, the rule applies to all databases in the cluster.
    // 
    // - `"tables"`: Optional. The tables to which the rule applies. Separate multiple table names with a comma (,). If this parameter is omitted, the rule applies to all tables in the cluster.
    // 
    // - `"columns"`: Required. The columns to which the rule applies. Separate multiple column names with a comma (,).
    // 
    // - `"description"`: Optional. The rule description, up to 64 characters in length.
    // 
    // - `"enabled"`: Required. Specifies whether the data masking rule is enabled. Valid values: **true** (enabled) and **false** (disabled).
    // 
    // - `"applies_to"`: The database accounts to which the rule applies. Separate multiple account names with a comma (,).
    // 
    // - `"exempted"`: The database accounts that are exempt from the rule. Separate multiple account names with a comma (,).
    // 
    // > * If you specify the `RuleName` parameter, you must also specify the `RuleConfig` parameter.
    // >
    // > * You must specify either `"applies_to"` or `"exempted"`.
    shared_ptr<string> ruleConfig_ {};
    // The name of the data masking rule. You can specify only one rule name at a time.
    // 
    // > - You can call the [DescribeMaskingRules](https://help.aliyun.com/document_detail/212573.html) operation to query the details of all data masking rules in the target cluster, including rule names.
    // >
    // > - If a rule with the specified name does not exist, the system creates a new one based on the provided `RuleConfig`.
    shared_ptr<string> ruleName_ {};
    // A comma-separated list of data masking rule names.
    // 
    // > You must specify either the `RuleName` or `RuleNameList` parameter.
    shared_ptr<string> ruleNameList_ {};
    // The version of the data masking rule. Valid values:
    // 
    // - v1 (default)
    // 
    // - v2
    shared_ptr<string> ruleVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
