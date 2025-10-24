// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(ActionExternal, actionExternal_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DefenseOrigin, defenseOrigin_);
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetailRuleIds, detailRuleIds_);
      DARABONBA_PTR_TO_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionExternal, actionExternal_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DefenseOrigin, defenseOrigin_);
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetailRuleIds, detailRuleIds_);
      DARABONBA_PTR_FROM_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDefenseRulesResponseBodyRules() = default ;
    DescribeDefenseRulesResponseBodyRules(const DescribeDefenseRulesResponseBodyRules &) = default ;
    DescribeDefenseRulesResponseBodyRules(DescribeDefenseRulesResponseBodyRules &&) = default ;
    DescribeDefenseRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRulesResponseBodyRules() = default ;
    DescribeDefenseRulesResponseBodyRules& operator=(const DescribeDefenseRulesResponseBodyRules &) = default ;
    DescribeDefenseRulesResponseBodyRules& operator=(DescribeDefenseRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionExternal_ == nullptr
        && return this->config_ == nullptr && return this->defenseOrigin_ == nullptr && return this->defenseScene_ == nullptr && return this->defenseType_ == nullptr && return this->description_ == nullptr
        && return this->detailRuleIds_ == nullptr && return this->externalInfo_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->resource_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleType_ == nullptr && return this->status_ == nullptr && return this->templateId_ == nullptr; };
    // actionExternal Field Functions 
    bool hasActionExternal() const { return this->actionExternal_ != nullptr;};
    void deleteActionExternal() { this->actionExternal_ = nullptr;};
    inline string actionExternal() const { DARABONBA_PTR_GET_DEFAULT(actionExternal_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setActionExternal(string actionExternal) { DARABONBA_PTR_SET_VALUE(actionExternal_, actionExternal) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // defenseOrigin Field Functions 
    bool hasDefenseOrigin() const { return this->defenseOrigin_ != nullptr;};
    void deleteDefenseOrigin() { this->defenseOrigin_ = nullptr;};
    inline string defenseOrigin() const { DARABONBA_PTR_GET_DEFAULT(defenseOrigin_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setDefenseOrigin(string defenseOrigin) { DARABONBA_PTR_SET_VALUE(defenseOrigin_, defenseOrigin) };


    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string defenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailRuleIds Field Functions 
    bool hasDetailRuleIds() const { return this->detailRuleIds_ != nullptr;};
    void deleteDetailRuleIds() { this->detailRuleIds_ = nullptr;};
    inline string detailRuleIds() const { DARABONBA_PTR_GET_DEFAULT(detailRuleIds_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setDetailRuleIds(string detailRuleIds) { DARABONBA_PTR_SET_VALUE(detailRuleIds_, detailRuleIds) };


    // externalInfo Field Functions 
    bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
    void deleteExternalInfo() { this->externalInfo_ = nullptr;};
    inline string externalInfo() const { DARABONBA_PTR_GET_DEFAULT(externalInfo_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setExternalInfo(string externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDefenseRulesResponseBodyRules& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDefenseRulesResponseBodyRules& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDefenseRulesResponseBodyRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeDefenseRulesResponseBodyRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDefenseRulesResponseBodyRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseRulesResponseBodyRules& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> actionExternal_ = nullptr;
    // The details of the protection rule. The value is a string that contains multiple parameters in the JSON format. For more information, see the "**Rule parameters**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> config_ = nullptr;
    // The origin of the protection rule. Valid values:
    // 
    // *   **custom:** The protection rule is created by the user.
    // *   **system:** The protection rule is automatically generated by the system.
    std::shared_ptr<string> defenseOrigin_ = nullptr;
    // The protection module for which the protection rule is created. Valid values:
    // 
    // *   **waf_group**: the basic protection rule module.
    // *   **waf_base_compliance**: the protocol compliance feature of the basic protection rule module.
    // *   **waf_base_sema**: the semantic analysis feature of the basic protection rule module.
    // *   **cc**: the HTTP flood protection module.
    // *   **antiscan_dirscan**: the directory traversal blocking feature of the scan protection module.
    // *   **antiscan_highfreq**: the high-frequency scanning blocking feature of the scan protection module.
    // *   **antiscan_scantools**: the scanner blocking feature of the scan protection module.
    // *   **ip_blacklist**: the IP address blacklist module.
    // *   **custom_acl**: the custom rule module.
    // *   **region_block**: the region blacklist module.
    // *   **tamperproof**: the website tamper-proofing module.
    // *   **dlp**: the data leakage prevention module.
    // *   **custom_response_block**: the custom response module.
    std::shared_ptr<string> defenseScene_ = nullptr;
    std::shared_ptr<string> defenseType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> detailRuleIds_ = nullptr;
    std::shared_ptr<string> externalInfo_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The most recent time when the protection rule was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the protection rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the protection rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    // The status of the protection rule. Valid values:
    // 
    // *   **0:** disabled.
    // *   **1:** enabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the protection rule template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
