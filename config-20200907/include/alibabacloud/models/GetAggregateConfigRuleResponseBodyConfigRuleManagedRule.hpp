// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULE_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBodyConfigRuleManagedRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& obj) { 
      DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ManagedRuleName, managedRuleName_);
      DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& obj) { 
      DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ManagedRuleName, managedRuleName_);
      DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
      DARABONBA_PTR_FROM_JSON(SourceDetails, sourceDetails_);
    };
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule(const GetAggregateConfigRuleResponseBodyConfigRuleManagedRule &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule(GetAggregateConfigRuleResponseBodyConfigRuleManagedRule &&) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBodyConfigRuleManagedRule() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& operator=(const GetAggregateConfigRuleResponseBodyConfigRuleManagedRule &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& operator=(GetAggregateConfigRuleResponseBodyConfigRuleManagedRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && return this->description_ == nullptr && return this->identifier_ == nullptr && return this->labels_ == nullptr && return this->managedRuleName_ == nullptr && return this->optionalInputParameterDetails_ == nullptr
        && return this->sourceDetails_ == nullptr; };
    // compulsoryInputParameterDetails Field Functions 
    bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
    void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & compulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
    Darabonba::Json & compulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setCompulsoryInputParameterDetails(Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // managedRuleName Field Functions 
    bool hasManagedRuleName() const { return this->managedRuleName_ != nullptr;};
    void deleteManagedRuleName() { this->managedRuleName_ = nullptr;};
    inline string managedRuleName() const { DARABONBA_PTR_GET_DEFAULT(managedRuleName_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setManagedRuleName(string managedRuleName) { DARABONBA_PTR_SET_VALUE(managedRuleName_, managedRuleName) };


    // optionalInputParameterDetails Field Functions 
    bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
    void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
    inline     const Darabonba::Json & optionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
    Darabonba::Json & optionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setOptionalInputParameterDetails(Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


    // sourceDetails Field Functions 
    bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
    void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
    inline const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> & sourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>) };
    inline vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> sourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setSourceDetails(const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRule& setSourceDetails(vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


  protected:
    // The required input parameters of the managed rule.
    Darabonba::Json compulsoryInputParameterDetails_ = nullptr;
    // The description of the managed rule.
    std::shared_ptr<string> description_ = nullptr;
    // The identifier of the managed rule.
    std::shared_ptr<string> identifier_ = nullptr;
    // The tags of the managed rule.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // The name of the managed rule.
    std::shared_ptr<string> managedRuleName_ = nullptr;
    // The optional input parameters of the managed rule.
    Darabonba::Json optionalInputParameterDetails_ = nullptr;
    // The details of the source of the managed rule.
    std::shared_ptr<vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>> sourceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
