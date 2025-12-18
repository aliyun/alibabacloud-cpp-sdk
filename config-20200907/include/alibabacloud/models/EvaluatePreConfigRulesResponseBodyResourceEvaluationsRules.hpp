// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODYRESOURCEEVALUATIONSRULES_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODYRESOURCEEVALUATIONSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules() = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules(const EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules &) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules(EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules &&) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules() = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& operator=(const EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules &) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& operator=(EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotation_ == nullptr
        && return this->complianceType_ == nullptr && return this->helpUrl_ == nullptr && return this->identifier_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string annotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // helpUrl Field Functions 
    bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
    void deleteHelpUrl() { this->helpUrl_ = nullptr;};
    inline string helpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The reason why the resource was evaluated as incompliant.
    std::shared_ptr<string> annotation_ = nullptr;
    // The compliance type of the resource that was evaluated by using the evaluation rule. Valid values:
    // 
    // *   COMPLIANT: The resource was evaluated as compliant.
    // *   NON_COMPLIANT: The resource was evaluated as incompliant.
    // *   NOT_APPLICABLE: The evaluation rule does not apply to the resource.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The URL of the topic that describes how the managed rule remediates the incompliant configurations.
    std::shared_ptr<string> helpUrl_ = nullptr;
    // The identifier of the evaluation rule.
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
