// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeDefenseRuleResponseBody() = default ;
    DescribeDefenseRuleResponseBody(const DescribeDefenseRuleResponseBody &) = default ;
    DescribeDefenseRuleResponseBody(DescribeDefenseRuleResponseBody &&) = default ;
    DescribeDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleResponseBody() = default ;
    DescribeDefenseRuleResponseBody& operator=(const DescribeDefenseRuleResponseBody &) = default ;
    DescribeDefenseRuleResponseBody& operator=(DescribeDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rule& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(DefenseOrigin, defenseOrigin_);
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Rule& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(DefenseOrigin, defenseOrigin_);
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Rule() = default ;
      Rule(const Rule &) = default ;
      Rule(Rule &&) = default ;
      Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rule() = default ;
      Rule& operator=(const Rule &) = default ;
      Rule& operator=(Rule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->defenseOrigin_ == nullptr && this->defenseScene_ == nullptr && this->defenseType_ == nullptr && this->gmtModified_ == nullptr && this->resource_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Rule& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // defenseOrigin Field Functions 
      bool hasDefenseOrigin() const { return this->defenseOrigin_ != nullptr;};
      void deleteDefenseOrigin() { this->defenseOrigin_ = nullptr;};
      inline string getDefenseOrigin() const { DARABONBA_PTR_GET_DEFAULT(defenseOrigin_, "") };
      inline Rule& setDefenseOrigin(string defenseOrigin) { DARABONBA_PTR_SET_VALUE(defenseOrigin_, defenseOrigin) };


      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Rule& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // defenseType Field Functions 
      bool hasDefenseType() const { return this->defenseType_ != nullptr;};
      void deleteDefenseType() { this->defenseType_ = nullptr;};
      inline string getDefenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
      inline Rule& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Rule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Rule& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Rule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Rule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Rule& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The details of the protection rule. The value is a JSON string that contains multiple parameters. For more information, see the "**Protection rule parameters**" section of the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> config_ {};
      // The origin of the protection rule. Valid values:
      // 
      // *   **custom:** The protection rule is created by the user.
      // *   **system:** The protection rule is automatically generated by the system.
      shared_ptr<string> defenseOrigin_ {};
      // The scenario in which the protection rule is used. For more information, see the description of **DefenseScene** in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> defenseScene_ {};
      shared_ptr<string> defenseType_ {};
      // The most recent time when the protection rule was modified.
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> resource_ {};
      // The ID of the protection rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the protection rule.
      shared_ptr<string> ruleName_ {};
      // The status of the protection rule. Valid values:
      // 
      // *   **0:** disabled.
      // *   **1:** enabled.
      shared_ptr<int32_t> status_ {};
      // The ID of the protection rule template.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const DescribeDefenseRuleResponseBody::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, DescribeDefenseRuleResponseBody::Rule) };
    inline DescribeDefenseRuleResponseBody::Rule getRule() { DARABONBA_PTR_GET(rule_, DescribeDefenseRuleResponseBody::Rule) };
    inline DescribeDefenseRuleResponseBody& setRule(const DescribeDefenseRuleResponseBody::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeDefenseRuleResponseBody& setRule(DescribeDefenseRuleResponseBody::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The configurations of the protection rule. The value is a JSON string that contains multiple parameters.
    shared_ptr<DescribeDefenseRuleResponseBody::Rule> rule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
