// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTSEVALUATIONRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTSEVALUATIONRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(ConfigRuleInvokedTimestamp, configRuleInvokedTimestamp_);
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(EvaluationResultIdentifier, evaluationResultIdentifier_);
      DARABONBA_PTR_TO_JSON(InvokingEventMessageType, invokingEventMessageType_);
      DARABONBA_PTR_TO_JSON(LastNonCompliantRecordTimestamp, lastNonCompliantRecordTimestamp_);
      DARABONBA_PTR_TO_JSON(RemediationEnabled, remediationEnabled_);
      DARABONBA_PTR_TO_JSON(ResultRecordedTimestamp, resultRecordedTimestamp_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleInvokedTimestamp, configRuleInvokedTimestamp_);
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(EvaluationResultIdentifier, evaluationResultIdentifier_);
      DARABONBA_PTR_FROM_JSON(InvokingEventMessageType, invokingEventMessageType_);
      DARABONBA_PTR_FROM_JSON(LastNonCompliantRecordTimestamp, lastNonCompliantRecordTimestamp_);
      DARABONBA_PTR_FROM_JSON(RemediationEnabled, remediationEnabled_);
      DARABONBA_PTR_FROM_JSON(ResultRecordedTimestamp, resultRecordedTimestamp_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default ;
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList &) = default ;
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList &&) = default ;
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default ;
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& operator=(const ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList &) = default ;
    ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& operator=(ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotation_ == nullptr
        && return this->complianceType_ == nullptr && return this->configRuleInvokedTimestamp_ == nullptr && return this->evaluationId_ == nullptr && return this->evaluationResultIdentifier_ == nullptr && return this->invokingEventMessageType_ == nullptr
        && return this->lastNonCompliantRecordTimestamp_ == nullptr && return this->remediationEnabled_ == nullptr && return this->resultRecordedTimestamp_ == nullptr && return this->riskLevel_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string annotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleInvokedTimestamp Field Functions 
    bool hasConfigRuleInvokedTimestamp() const { return this->configRuleInvokedTimestamp_ != nullptr;};
    void deleteConfigRuleInvokedTimestamp() { this->configRuleInvokedTimestamp_ = nullptr;};
    inline int64_t configRuleInvokedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(configRuleInvokedTimestamp_, 0L) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setConfigRuleInvokedTimestamp(int64_t configRuleInvokedTimestamp) { DARABONBA_PTR_SET_VALUE(configRuleInvokedTimestamp_, configRuleInvokedTimestamp) };


    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // evaluationResultIdentifier Field Functions 
    bool hasEvaluationResultIdentifier() const { return this->evaluationResultIdentifier_ != nullptr;};
    void deleteEvaluationResultIdentifier() { this->evaluationResultIdentifier_ = nullptr;};
    inline const Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier & evaluationResultIdentifier() const { DARABONBA_PTR_GET_CONST(evaluationResultIdentifier_, Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier) };
    inline Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier evaluationResultIdentifier() { DARABONBA_PTR_GET(evaluationResultIdentifier_, Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setEvaluationResultIdentifier(const Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier & evaluationResultIdentifier) { DARABONBA_PTR_SET_VALUE(evaluationResultIdentifier_, evaluationResultIdentifier) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setEvaluationResultIdentifier(Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier && evaluationResultIdentifier) { DARABONBA_PTR_SET_RVALUE(evaluationResultIdentifier_, evaluationResultIdentifier) };


    // invokingEventMessageType Field Functions 
    bool hasInvokingEventMessageType() const { return this->invokingEventMessageType_ != nullptr;};
    void deleteInvokingEventMessageType() { this->invokingEventMessageType_ = nullptr;};
    inline string invokingEventMessageType() const { DARABONBA_PTR_GET_DEFAULT(invokingEventMessageType_, "") };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setInvokingEventMessageType(string invokingEventMessageType) { DARABONBA_PTR_SET_VALUE(invokingEventMessageType_, invokingEventMessageType) };


    // lastNonCompliantRecordTimestamp Field Functions 
    bool hasLastNonCompliantRecordTimestamp() const { return this->lastNonCompliantRecordTimestamp_ != nullptr;};
    void deleteLastNonCompliantRecordTimestamp() { this->lastNonCompliantRecordTimestamp_ = nullptr;};
    inline int64_t lastNonCompliantRecordTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastNonCompliantRecordTimestamp_, 0L) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setLastNonCompliantRecordTimestamp(int64_t lastNonCompliantRecordTimestamp) { DARABONBA_PTR_SET_VALUE(lastNonCompliantRecordTimestamp_, lastNonCompliantRecordTimestamp) };


    // remediationEnabled Field Functions 
    bool hasRemediationEnabled() const { return this->remediationEnabled_ != nullptr;};
    void deleteRemediationEnabled() { this->remediationEnabled_ = nullptr;};
    inline bool remediationEnabled() const { DARABONBA_PTR_GET_DEFAULT(remediationEnabled_, false) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setRemediationEnabled(bool remediationEnabled) { DARABONBA_PTR_SET_VALUE(remediationEnabled_, remediationEnabled) };


    // resultRecordedTimestamp Field Functions 
    bool hasResultRecordedTimestamp() const { return this->resultRecordedTimestamp_ != nullptr;};
    void deleteResultRecordedTimestamp() { this->resultRecordedTimestamp_ = nullptr;};
    inline int64_t resultRecordedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(resultRecordedTimestamp_, 0L) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setResultRecordedTimestamp(int64_t resultRecordedTimestamp) { DARABONBA_PTR_SET_VALUE(resultRecordedTimestamp_, resultRecordedTimestamp) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The annotation to the resource that is evaluated as non-compliant. The following section describe the parameters that can be returned:
    // 
    // *   `configuration`: the current resource configuration that is evaluated as non-compliant.
    // *   `desiredValue`: the expected resource configuration that is evaluated as compliant.
    // *   `operator`: the operator that compares the current configuration with the expected configuration of the resource.
    // *   `property`: the JSON path of the current configuration in the resource property struct.
    // *   `reason`: the reason why the resource is evaluated as non-compliant.
    std::shared_ptr<string> annotation_ = nullptr;
    // The compliance evaluation result of the resource. Valid values:
    // 
    // *   COMPLIANT: The resources are evaluated as compliant.
    // *   NON_COMPLIANT: The resources are evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resources.
    // *   INSUFFICIENT_DATA: No data is available.
    // *   IGNORED: The resource is ignored during compliance evaluation.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The timestamp when the rule was triggered for the compliance evaluation. Unit: milliseconds.
    std::shared_ptr<int64_t> configRuleInvokedTimestamp_ = nullptr;
    std::shared_ptr<string> evaluationId_ = nullptr;
    // The identifying information about the compliance evaluation result.
    std::shared_ptr<Models::ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier_ = nullptr;
    // The trigger type of the rule. Valid values:
    // 
    // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
    // *   ScheduledNotification: The rule is periodically triggered.
    // *   Manual: The rule is manually triggered.
    std::shared_ptr<string> invokingEventMessageType_ = nullptr;
    std::shared_ptr<int64_t> lastNonCompliantRecordTimestamp_ = nullptr;
    // Indicates whether the remediation template is enabled. Valid values:
    // 
    // *   true: The remediation template is enabled.
    // *   false: The remediation template is disabled.
    std::shared_ptr<bool> remediationEnabled_ = nullptr;
    // The timestamp when the compliance evaluation result was recorded. Unit: milliseconds.
    std::shared_ptr<int64_t> resultRecordedTimestamp_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
