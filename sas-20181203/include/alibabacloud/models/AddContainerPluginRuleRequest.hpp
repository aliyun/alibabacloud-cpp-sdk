// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERPLUGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERPLUGINRULEREQUEST_HPP_
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
  class AddContainerPluginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTemplateId, ruleTemplateId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_TO_JSON(WhiteImages, whiteImages_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTemplateId, ruleTemplateId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_FROM_JSON(WhiteImages, whiteImages_);
    };
    AddContainerPluginRuleRequest() = default ;
    AddContainerPluginRuleRequest(const AddContainerPluginRuleRequest &) = default ;
    AddContainerPluginRuleRequest(AddContainerPluginRuleRequest &&) = default ;
    AddContainerPluginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerPluginRuleRequest() = default ;
    AddContainerPluginRuleRequest& operator=(const AddContainerPluginRuleRequest &) = default ;
    AddContainerPluginRuleRequest& operator=(AddContainerPluginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->mode_ != nullptr && this->ruleName_ != nullptr && this->ruleTemplateId_ != nullptr && this->ruleType_ != nullptr && this->selectedPolicy_ != nullptr
        && this->whiteImages_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddContainerPluginRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline AddContainerPluginRuleRequest& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddContainerPluginRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTemplateId Field Functions 
    bool hasRuleTemplateId() const { return this->ruleTemplateId_ != nullptr;};
    void deleteRuleTemplateId() { this->ruleTemplateId_ = nullptr;};
    inline int32_t ruleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplateId_, 0) };
    inline AddContainerPluginRuleRequest& setRuleTemplateId(int32_t ruleTemplateId) { DARABONBA_PTR_SET_VALUE(ruleTemplateId_, ruleTemplateId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline AddContainerPluginRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // selectedPolicy Field Functions 
    bool hasSelectedPolicy() const { return this->selectedPolicy_ != nullptr;};
    void deleteSelectedPolicy() { this->selectedPolicy_ = nullptr;};
    inline const vector<string> & selectedPolicy() const { DARABONBA_PTR_GET_CONST(selectedPolicy_, vector<string>) };
    inline vector<string> selectedPolicy() { DARABONBA_PTR_GET(selectedPolicy_, vector<string>) };
    inline AddContainerPluginRuleRequest& setSelectedPolicy(const vector<string> & selectedPolicy) { DARABONBA_PTR_SET_VALUE(selectedPolicy_, selectedPolicy) };
    inline AddContainerPluginRuleRequest& setSelectedPolicy(vector<string> && selectedPolicy) { DARABONBA_PTR_SET_RVALUE(selectedPolicy_, selectedPolicy) };


    // whiteImages Field Functions 
    bool hasWhiteImages() const { return this->whiteImages_ != nullptr;};
    void deleteWhiteImages() { this->whiteImages_ = nullptr;};
    inline const vector<string> & whiteImages() const { DARABONBA_PTR_GET_CONST(whiteImages_, vector<string>) };
    inline vector<string> whiteImages() { DARABONBA_PTR_GET(whiteImages_, vector<string>) };
    inline AddContainerPluginRuleRequest& setWhiteImages(const vector<string> & whiteImages) { DARABONBA_PTR_SET_VALUE(whiteImages_, whiteImages) };
    inline AddContainerPluginRuleRequest& setWhiteImages(vector<string> && whiteImages) { DARABONBA_PTR_SET_RVALUE(whiteImages_, whiteImages) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The action that you want to specify for the rule. Valid values:
    // 
    // *   **1**: triggers alerts.
    // *   **2**: blocks escapes.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The name of the rule. The name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_). The names of rules that are created for the same user must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The ID of the rule template. You can call the ListSystemClientRules operation to query the ID of the rule template.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ruleTemplateId_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **0**: custom rule
    // *   **1**: system rule
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The check items that are enabled for the rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> selectedPolicy_ = nullptr;
    // The images that are added to the whitelist.
    std::shared_ptr<vector<string>> whiteImages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
