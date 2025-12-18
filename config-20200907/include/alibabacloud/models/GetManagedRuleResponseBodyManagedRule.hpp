// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULE_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetManagedRuleResponseBodyManagedRuleScope.hpp>
#include <alibabacloud/models/GetManagedRuleResponseBodyManagedRuleSourceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetManagedRuleResponseBodyManagedRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleResponseBodyManagedRule& obj) { 
      DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleResponseBodyManagedRule& obj) { 
      DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SourceDetails, sourceDetails_);
    };
    GetManagedRuleResponseBodyManagedRule() = default ;
    GetManagedRuleResponseBodyManagedRule(const GetManagedRuleResponseBodyManagedRule &) = default ;
    GetManagedRuleResponseBodyManagedRule(GetManagedRuleResponseBodyManagedRule &&) = default ;
    GetManagedRuleResponseBodyManagedRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleResponseBodyManagedRule() = default ;
    GetManagedRuleResponseBodyManagedRule& operator=(const GetManagedRuleResponseBodyManagedRule &) = default ;
    GetManagedRuleResponseBodyManagedRule& operator=(GetManagedRuleResponseBodyManagedRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && return this->configRuleName_ == nullptr && return this->description_ == nullptr && return this->helpUrls_ == nullptr && return this->identifier_ == nullptr && return this->labels_ == nullptr
        && return this->optionalInputParameterDetails_ == nullptr && return this->riskLevel_ == nullptr && return this->scope_ == nullptr && return this->sourceDetails_ == nullptr; };
    // compulsoryInputParameterDetails Field Functions 
    bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
    void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & compulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
    Darabonba::Json & compulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
    inline GetManagedRuleResponseBodyManagedRule& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
    inline GetManagedRuleResponseBodyManagedRule& setCompulsoryInputParameterDetails(Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline GetManagedRuleResponseBodyManagedRule& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetManagedRuleResponseBodyManagedRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // helpUrls Field Functions 
    bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
    void deleteHelpUrls() { this->helpUrls_ = nullptr;};
    inline string helpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
    inline GetManagedRuleResponseBodyManagedRule& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetManagedRuleResponseBodyManagedRule& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline GetManagedRuleResponseBodyManagedRule& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetManagedRuleResponseBodyManagedRule& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // optionalInputParameterDetails Field Functions 
    bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
    void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & optionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
    Darabonba::Json & optionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
    inline GetManagedRuleResponseBodyManagedRule& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
    inline GetManagedRuleResponseBodyManagedRule& setOptionalInputParameterDetails(Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetManagedRuleResponseBodyManagedRule& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const Models::GetManagedRuleResponseBodyManagedRuleScope & scope() const { DARABONBA_PTR_GET_CONST(scope_, Models::GetManagedRuleResponseBodyManagedRuleScope) };
    inline Models::GetManagedRuleResponseBodyManagedRuleScope scope() { DARABONBA_PTR_GET(scope_, Models::GetManagedRuleResponseBodyManagedRuleScope) };
    inline GetManagedRuleResponseBodyManagedRule& setScope(const Models::GetManagedRuleResponseBodyManagedRuleScope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline GetManagedRuleResponseBodyManagedRule& setScope(Models::GetManagedRuleResponseBodyManagedRuleScope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // sourceDetails Field Functions 
    bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
    void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
    inline const vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails> & sourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails>) };
    inline vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails> sourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails>) };
    inline GetManagedRuleResponseBodyManagedRule& setSourceDetails(const vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
    inline GetManagedRuleResponseBodyManagedRule& setSourceDetails(vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


  protected:
    // The details of the required input parameters for the managed rule.
    Darabonba::Json compulsoryInputParameterDetails_ = nullptr;
    // The name of the managed rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The description of the managed rule.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the topic that provides guidance on remediation for the managed rule.
    std::shared_ptr<string> helpUrls_ = nullptr;
    // The identifier of the managed rule.
    std::shared_ptr<string> identifier_ = nullptr;
    // The tags of the managed rule.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // The details of the optional input parameters for the managed rule.
    Darabonba::Json optionalInputParameterDetails_ = nullptr;
    // The risk level of the managed rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The effective scope of the managed rule.
    std::shared_ptr<Models::GetManagedRuleResponseBodyManagedRuleScope> scope_ = nullptr;
    // The information about the trigger type of the managed rule.
    std::shared_ptr<vector<Models::GetManagedRuleResponseBodyManagedRuleSourceDetails>> sourceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
