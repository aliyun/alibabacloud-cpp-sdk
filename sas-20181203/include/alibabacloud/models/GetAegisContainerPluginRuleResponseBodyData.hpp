// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULERESPONSEBODYDATA_HPP_
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
  class GetAegisContainerPluginRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAegisContainerPluginRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTemplateId, ruleTemplateId_);
      DARABONBA_PTR_TO_JSON(RuleTemplateName, ruleTemplateName_);
      DARABONBA_PTR_TO_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(WhiteImages, whiteImages_);
    };
    friend void from_json(const Darabonba::Json& j, GetAegisContainerPluginRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTemplateId, ruleTemplateId_);
      DARABONBA_PTR_FROM_JSON(RuleTemplateName, ruleTemplateName_);
      DARABONBA_PTR_FROM_JSON(SelectedPolicy, selectedPolicy_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(WhiteImages, whiteImages_);
    };
    GetAegisContainerPluginRuleResponseBodyData() = default ;
    GetAegisContainerPluginRuleResponseBodyData(const GetAegisContainerPluginRuleResponseBodyData &) = default ;
    GetAegisContainerPluginRuleResponseBodyData(GetAegisContainerPluginRuleResponseBodyData &&) = default ;
    GetAegisContainerPluginRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAegisContainerPluginRuleResponseBodyData() = default ;
    GetAegisContainerPluginRuleResponseBodyData& operator=(const GetAegisContainerPluginRuleResponseBodyData &) = default ;
    GetAegisContainerPluginRuleResponseBodyData& operator=(GetAegisContainerPluginRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->mode_ == nullptr && return this->ruleDescription_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->ruleTemplateId_ == nullptr && return this->ruleTemplateName_ == nullptr && return this->selectedPolicy_ == nullptr && return this->switchId_ == nullptr && return this->whiteImages_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetAegisContainerPluginRuleResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetAegisContainerPluginRuleResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetAegisContainerPluginRuleResponseBodyData& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ruleDescription Field Functions 
    bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
    void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
    inline string ruleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
    inline GetAegisContainerPluginRuleResponseBodyData& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetAegisContainerPluginRuleResponseBodyData& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetAegisContainerPluginRuleResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTemplateId Field Functions 
    bool hasRuleTemplateId() const { return this->ruleTemplateId_ != nullptr;};
    void deleteRuleTemplateId() { this->ruleTemplateId_ = nullptr;};
    inline string ruleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplateId_, "") };
    inline GetAegisContainerPluginRuleResponseBodyData& setRuleTemplateId(string ruleTemplateId) { DARABONBA_PTR_SET_VALUE(ruleTemplateId_, ruleTemplateId) };


    // ruleTemplateName Field Functions 
    bool hasRuleTemplateName() const { return this->ruleTemplateName_ != nullptr;};
    void deleteRuleTemplateName() { this->ruleTemplateName_ = nullptr;};
    inline string ruleTemplateName() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplateName_, "") };
    inline GetAegisContainerPluginRuleResponseBodyData& setRuleTemplateName(string ruleTemplateName) { DARABONBA_PTR_SET_VALUE(ruleTemplateName_, ruleTemplateName) };


    // selectedPolicy Field Functions 
    bool hasSelectedPolicy() const { return this->selectedPolicy_ != nullptr;};
    void deleteSelectedPolicy() { this->selectedPolicy_ = nullptr;};
    inline const vector<string> & selectedPolicy() const { DARABONBA_PTR_GET_CONST(selectedPolicy_, vector<string>) };
    inline vector<string> selectedPolicy() { DARABONBA_PTR_GET(selectedPolicy_, vector<string>) };
    inline GetAegisContainerPluginRuleResponseBodyData& setSelectedPolicy(const vector<string> & selectedPolicy) { DARABONBA_PTR_SET_VALUE(selectedPolicy_, selectedPolicy) };
    inline GetAegisContainerPluginRuleResponseBodyData& setSelectedPolicy(vector<string> && selectedPolicy) { DARABONBA_PTR_SET_RVALUE(selectedPolicy_, selectedPolicy) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline GetAegisContainerPluginRuleResponseBodyData& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // whiteImages Field Functions 
    bool hasWhiteImages() const { return this->whiteImages_ != nullptr;};
    void deleteWhiteImages() { this->whiteImages_ = nullptr;};
    inline const vector<string> & whiteImages() const { DARABONBA_PTR_GET_CONST(whiteImages_, vector<string>) };
    inline vector<string> whiteImages() { DARABONBA_PTR_GET(whiteImages_, vector<string>) };
    inline GetAegisContainerPluginRuleResponseBodyData& setWhiteImages(const vector<string> & whiteImages) { DARABONBA_PTR_SET_VALUE(whiteImages_, whiteImages) };
    inline GetAegisContainerPluginRuleResponseBodyData& setWhiteImages(vector<string> && whiteImages) { DARABONBA_PTR_SET_RVALUE(whiteImages_, whiteImages) };


  protected:
    // The timestamp when the rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the rule was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The action mode of the rule. Valid values:
    // 
    // *   **0**: allows escape behavior.
    // *   **1**: triggers alerts.
    // *   **2**: blocks escape behavior.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDescription_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The template ID of the rule.
    std::shared_ptr<string> ruleTemplateId_ = nullptr;
    // The template name of the rule.
    std::shared_ptr<string> ruleTemplateName_ = nullptr;
    // The rule items.
    std::shared_ptr<vector<string>> selectedPolicy_ = nullptr;
    // The ID of the switch.
    std::shared_ptr<string> switchId_ = nullptr;
    // The images that are added to the whitelist.
    std::shared_ptr<vector<string>> whiteImages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
