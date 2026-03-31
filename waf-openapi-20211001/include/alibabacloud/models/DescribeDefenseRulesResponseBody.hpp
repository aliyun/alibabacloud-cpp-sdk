// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseRulesResponseBody() = default ;
    DescribeDefenseRulesResponseBody(const DescribeDefenseRulesResponseBody &) = default ;
    DescribeDefenseRulesResponseBody(DescribeDefenseRulesResponseBody &&) = default ;
    DescribeDefenseRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRulesResponseBody() = default ;
    DescribeDefenseRulesResponseBody& operator=(const DescribeDefenseRulesResponseBody &) = default ;
    DescribeDefenseRulesResponseBody& operator=(DescribeDefenseRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
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
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionExternal_ == nullptr
        && this->config_ == nullptr && this->defenseOrigin_ == nullptr && this->defenseScene_ == nullptr && this->defenseType_ == nullptr && this->description_ == nullptr
        && this->detailRuleIds_ == nullptr && this->externalInfo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->resource_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr; };
      // actionExternal Field Functions 
      bool hasActionExternal() const { return this->actionExternal_ != nullptr;};
      void deleteActionExternal() { this->actionExternal_ = nullptr;};
      inline string getActionExternal() const { DARABONBA_PTR_GET_DEFAULT(actionExternal_, "") };
      inline Rules& setActionExternal(string actionExternal) { DARABONBA_PTR_SET_VALUE(actionExternal_, actionExternal) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Rules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // defenseOrigin Field Functions 
      bool hasDefenseOrigin() const { return this->defenseOrigin_ != nullptr;};
      void deleteDefenseOrigin() { this->defenseOrigin_ = nullptr;};
      inline string getDefenseOrigin() const { DARABONBA_PTR_GET_DEFAULT(defenseOrigin_, "") };
      inline Rules& setDefenseOrigin(string defenseOrigin) { DARABONBA_PTR_SET_VALUE(defenseOrigin_, defenseOrigin) };


      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Rules& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // defenseType Field Functions 
      bool hasDefenseType() const { return this->defenseType_ != nullptr;};
      void deleteDefenseType() { this->defenseType_ = nullptr;};
      inline string getDefenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
      inline Rules& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detailRuleIds Field Functions 
      bool hasDetailRuleIds() const { return this->detailRuleIds_ != nullptr;};
      void deleteDetailRuleIds() { this->detailRuleIds_ = nullptr;};
      inline string getDetailRuleIds() const { DARABONBA_PTR_GET_DEFAULT(detailRuleIds_, "") };
      inline Rules& setDetailRuleIds(string detailRuleIds) { DARABONBA_PTR_SET_VALUE(detailRuleIds_, detailRuleIds) };


      // externalInfo Field Functions 
      bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
      void deleteExternalInfo() { this->externalInfo_ = nullptr;};
      inline string getExternalInfo() const { DARABONBA_PTR_GET_DEFAULT(externalInfo_, "") };
      inline Rules& setExternalInfo(string externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Rules& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Rules& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Rules& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Rules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Rules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Rules& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> actionExternal_ {};
      // The details of the protection rule. The value is a string that contains multiple parameters in the JSON format. For more information, see the "**Rule parameters**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> config_ {};
      // The origin of the protection rule. Valid values:
      // 
      // *   **custom:** The protection rule is created by the user.
      // *   **system:** The protection rule is automatically generated by the system.
      shared_ptr<string> defenseOrigin_ {};
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
      shared_ptr<string> defenseScene_ {};
      shared_ptr<string> defenseType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> detailRuleIds_ {};
      shared_ptr<string> externalInfo_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      // The most recent time when the protection rule was modified.
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> resource_ {};
      // The ID of the protection rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the protection rule.
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> ruleType_ {};
      // The status of the protection rule. Valid values:
      // 
      // *   **0:** disabled.
      // *   **1:** enabled.
      shared_ptr<int32_t> status_ {};
      // The ID of the protection rule template.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeDefenseRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeDefenseRulesResponseBody::Rules>) };
    inline vector<DescribeDefenseRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeDefenseRulesResponseBody::Rules>) };
    inline DescribeDefenseRulesResponseBody& setRules(const vector<DescribeDefenseRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDefenseRulesResponseBody& setRules(vector<DescribeDefenseRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The protection rules.
    shared_ptr<vector<DescribeDefenseRulesResponseBody::Rules>> rules_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
