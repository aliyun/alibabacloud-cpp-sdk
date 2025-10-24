// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODYRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODYRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleResponseBodyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleResponseBodyRule& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleResponseBodyRule& obj) { 
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
    DescribeDefenseRuleResponseBodyRule() = default ;
    DescribeDefenseRuleResponseBodyRule(const DescribeDefenseRuleResponseBodyRule &) = default ;
    DescribeDefenseRuleResponseBodyRule(DescribeDefenseRuleResponseBodyRule &&) = default ;
    DescribeDefenseRuleResponseBodyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleResponseBodyRule() = default ;
    DescribeDefenseRuleResponseBodyRule& operator=(const DescribeDefenseRuleResponseBodyRule &) = default ;
    DescribeDefenseRuleResponseBodyRule& operator=(DescribeDefenseRuleResponseBodyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->defenseOrigin_ == nullptr && return this->defenseScene_ == nullptr && return this->defenseType_ == nullptr && return this->gmtModified_ == nullptr && return this->resource_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->status_ == nullptr && return this->templateId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // defenseOrigin Field Functions 
    bool hasDefenseOrigin() const { return this->defenseOrigin_ != nullptr;};
    void deleteDefenseOrigin() { this->defenseOrigin_ = nullptr;};
    inline string defenseOrigin() const { DARABONBA_PTR_GET_DEFAULT(defenseOrigin_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setDefenseOrigin(string defenseOrigin) { DARABONBA_PTR_SET_VALUE(defenseOrigin_, defenseOrigin) };


    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string defenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDefenseRuleResponseBodyRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDefenseRuleResponseBodyRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDefenseRuleResponseBodyRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDefenseRuleResponseBodyRule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseRuleResponseBodyRule& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The details of the protection rule. The value is a JSON string that contains multiple parameters. For more information, see the "**Protection rule parameters**" section of the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> config_ = nullptr;
    // The origin of the protection rule. Valid values:
    // 
    // *   **custom:** The protection rule is created by the user.
    // *   **system:** The protection rule is automatically generated by the system.
    std::shared_ptr<string> defenseOrigin_ = nullptr;
    // The scenario in which the protection rule is used. For more information, see the description of **DefenseScene** in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> defenseScene_ = nullptr;
    std::shared_ptr<string> defenseType_ = nullptr;
    // The most recent time when the protection rule was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the protection rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the protection rule.
    std::shared_ptr<string> ruleName_ = nullptr;
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
