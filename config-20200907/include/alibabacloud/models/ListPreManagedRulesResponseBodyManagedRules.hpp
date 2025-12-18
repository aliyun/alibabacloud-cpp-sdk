// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODYMANAGEDRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODYMANAGEDRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListPreManagedRulesResponseBodyManagedRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPreManagedRulesResponseBodyManagedRules& obj) { 
      DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPreManagedRulesResponseBodyManagedRules& obj) { 
      DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListPreManagedRulesResponseBodyManagedRules() = default ;
    ListPreManagedRulesResponseBodyManagedRules(const ListPreManagedRulesResponseBodyManagedRules &) = default ;
    ListPreManagedRulesResponseBodyManagedRules(ListPreManagedRulesResponseBodyManagedRules &&) = default ;
    ListPreManagedRulesResponseBodyManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPreManagedRulesResponseBodyManagedRules() = default ;
    ListPreManagedRulesResponseBodyManagedRules& operator=(const ListPreManagedRulesResponseBodyManagedRules &) = default ;
    ListPreManagedRulesResponseBodyManagedRules& operator=(ListPreManagedRulesResponseBodyManagedRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && return this->configRuleName_ == nullptr && return this->description_ == nullptr && return this->helpUrls_ == nullptr && return this->identifier_ == nullptr && return this->optionalInputParameterDetails_ == nullptr
        && return this->resourceType_ == nullptr; };
    // compulsoryInputParameterDetails Field Functions 
    bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
    void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & compulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
    Darabonba::Json & compulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
    inline ListPreManagedRulesResponseBodyManagedRules& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
    inline ListPreManagedRulesResponseBodyManagedRules& setCompulsoryInputParameterDetails(Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListPreManagedRulesResponseBodyManagedRules& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPreManagedRulesResponseBodyManagedRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // helpUrls Field Functions 
    bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
    void deleteHelpUrls() { this->helpUrls_ = nullptr;};
    inline string helpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
    inline ListPreManagedRulesResponseBodyManagedRules& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListPreManagedRulesResponseBodyManagedRules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // optionalInputParameterDetails Field Functions 
    bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
    void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & optionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
    Darabonba::Json & optionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
    inline ListPreManagedRulesResponseBodyManagedRules& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
    inline ListPreManagedRulesResponseBodyManagedRules& setOptionalInputParameterDetails(Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPreManagedRulesResponseBodyManagedRules& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The details of the required input parameters of the rule.
    Darabonba::Json compulsoryInputParameterDetails_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the topic that describes how the evaluation rule remediates the incompliant configurations.
    std::shared_ptr<string> helpUrls_ = nullptr;
    // The identifier of the rule.
    std::shared_ptr<string> identifier_ = nullptr;
    // The details of the optional input parameters of the rule.
    Darabonba::Json optionalInputParameterDetails_ = nullptr;
    // The type of resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
