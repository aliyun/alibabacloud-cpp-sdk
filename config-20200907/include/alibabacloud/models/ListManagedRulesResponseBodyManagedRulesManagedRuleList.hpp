// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULESMANAGEDRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULESMANAGEDRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListManagedRulesResponseBodyManagedRulesManagedRuleListScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesResponseBodyManagedRulesManagedRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesResponseBodyManagedRulesManagedRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateIdentifier, remediationTemplateIdentifier_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateName, remediationTemplateName_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SupportPreviewManagedRule, supportPreviewManagedRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesResponseBodyManagedRulesManagedRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateIdentifier, remediationTemplateIdentifier_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateName, remediationTemplateName_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SupportPreviewManagedRule, supportPreviewManagedRule_);
    };
    ListManagedRulesResponseBodyManagedRulesManagedRuleList() = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleList(const ListManagedRulesResponseBodyManagedRulesManagedRuleList &) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleList(ListManagedRulesResponseBodyManagedRulesManagedRuleList &&) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesResponseBodyManagedRulesManagedRuleList() = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleList& operator=(const ListManagedRulesResponseBodyManagedRulesManagedRuleList &) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleList& operator=(ListManagedRulesResponseBodyManagedRulesManagedRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleName_ == nullptr
        && return this->description_ == nullptr && return this->helpUrls_ == nullptr && return this->identifier_ == nullptr && return this->labels_ == nullptr && return this->remediationTemplateIdentifier_ == nullptr
        && return this->remediationTemplateName_ == nullptr && return this->riskLevel_ == nullptr && return this->scope_ == nullptr && return this->supportPreviewManagedRule_ == nullptr; };
    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // helpUrls Field Functions 
    bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
    void deleteHelpUrls() { this->helpUrls_ = nullptr;};
    inline string helpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // remediationTemplateIdentifier Field Functions 
    bool hasRemediationTemplateIdentifier() const { return this->remediationTemplateIdentifier_ != nullptr;};
    void deleteRemediationTemplateIdentifier() { this->remediationTemplateIdentifier_ = nullptr;};
    inline string remediationTemplateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateIdentifier_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setRemediationTemplateIdentifier(string remediationTemplateIdentifier) { DARABONBA_PTR_SET_VALUE(remediationTemplateIdentifier_, remediationTemplateIdentifier) };


    // remediationTemplateName Field Functions 
    bool hasRemediationTemplateName() const { return this->remediationTemplateName_ != nullptr;};
    void deleteRemediationTemplateName() { this->remediationTemplateName_ = nullptr;};
    inline string remediationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateName_, "") };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setRemediationTemplateName(string remediationTemplateName) { DARABONBA_PTR_SET_VALUE(remediationTemplateName_, remediationTemplateName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope & scope() const { DARABONBA_PTR_GET_CONST(scope_, Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope) };
    inline Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope scope() { DARABONBA_PTR_GET(scope_, Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setScope(const Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setScope(Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // supportPreviewManagedRule Field Functions 
    bool hasSupportPreviewManagedRule() const { return this->supportPreviewManagedRule_ != nullptr;};
    void deleteSupportPreviewManagedRule() { this->supportPreviewManagedRule_ = nullptr;};
    inline bool supportPreviewManagedRule() const { DARABONBA_PTR_GET_DEFAULT(supportPreviewManagedRule_, false) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleList& setSupportPreviewManagedRule(bool supportPreviewManagedRule) { DARABONBA_PTR_SET_VALUE(supportPreviewManagedRule_, supportPreviewManagedRule) };


  protected:
    // The name of the managed rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The description of the managed rule.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the topic that describes how the managed rule remediates the incompliant configurations.
    std::shared_ptr<string> helpUrls_ = nullptr;
    // The unique identifier of the managed rule.
    std::shared_ptr<string> identifier_ = nullptr;
    // The classification description of the managed rule.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // The ID of the remediation template.
    std::shared_ptr<string> remediationTemplateIdentifier_ = nullptr;
    // The name of the remediation template.
    std::shared_ptr<string> remediationTemplateName_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The effective scope of the managed rule.
    std::shared_ptr<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleListScope> scope_ = nullptr;
    // Indicates whether precheck is supported. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> supportPreviewManagedRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
