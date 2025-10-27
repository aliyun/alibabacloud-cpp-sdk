// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERPLUGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERPLUGINRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerPluginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_TO_JSON(WhiteImages, whiteImages_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_FROM_JSON(WhiteImages, whiteImages_);
    };
    ModifyContainerPluginRuleRequest() = default ;
    ModifyContainerPluginRuleRequest(const ModifyContainerPluginRuleRequest &) = default ;
    ModifyContainerPluginRuleRequest(ModifyContainerPluginRuleRequest &&) = default ;
    ModifyContainerPluginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerPluginRuleRequest() = default ;
    ModifyContainerPluginRuleRequest& operator=(const ModifyContainerPluginRuleRequest &) = default ;
    ModifyContainerPluginRuleRequest& operator=(ModifyContainerPluginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->mode_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleType_ == nullptr && return this->selectedPolicy_ == nullptr
        && return this->whiteImages_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyContainerPluginRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline ModifyContainerPluginRuleRequest& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline ModifyContainerPluginRuleRequest& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyContainerPluginRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ModifyContainerPluginRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // selectedPolicy Field Functions 
    bool hasSelectedPolicy() const { return this->selectedPolicy_ != nullptr;};
    void deleteSelectedPolicy() { this->selectedPolicy_ = nullptr;};
    inline const vector<string> & selectedPolicy() const { DARABONBA_PTR_GET_CONST(selectedPolicy_, vector<string>) };
    inline vector<string> selectedPolicy() { DARABONBA_PTR_GET(selectedPolicy_, vector<string>) };
    inline ModifyContainerPluginRuleRequest& setSelectedPolicy(const vector<string> & selectedPolicy) { DARABONBA_PTR_SET_VALUE(selectedPolicy_, selectedPolicy) };
    inline ModifyContainerPluginRuleRequest& setSelectedPolicy(vector<string> && selectedPolicy) { DARABONBA_PTR_SET_RVALUE(selectedPolicy_, selectedPolicy) };


    // whiteImages Field Functions 
    bool hasWhiteImages() const { return this->whiteImages_ != nullptr;};
    void deleteWhiteImages() { this->whiteImages_ = nullptr;};
    inline const vector<string> & whiteImages() const { DARABONBA_PTR_GET_CONST(whiteImages_, vector<string>) };
    inline vector<string> whiteImages() { DARABONBA_PTR_GET(whiteImages_, vector<string>) };
    inline ModifyContainerPluginRuleRequest& setWhiteImages(const vector<string> & whiteImages) { DARABONBA_PTR_SET_VALUE(whiteImages_, whiteImages) };
    inline ModifyContainerPluginRuleRequest& setWhiteImages(vector<string> && whiteImages) { DARABONBA_PTR_SET_RVALUE(whiteImages_, whiteImages) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The action mode of the rule. Valid values:
    // 
    // *   **1**: alerts
    // *   **2**: block
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **0**: user-defined rule
    // *   **1**: built-in rule
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The rule items.
    std::shared_ptr<vector<string>> selectedPolicy_ = nullptr;
    // The images that are added to the whitelist.
    std::shared_ptr<vector<string>> whiteImages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
