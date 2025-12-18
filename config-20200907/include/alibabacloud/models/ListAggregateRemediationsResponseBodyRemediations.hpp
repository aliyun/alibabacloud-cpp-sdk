// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODYREMEDIATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODYREMEDIATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationsResponseBodyRemediations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationsResponseBodyRemediations& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationId, lastSuccessfulInvocationId_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationTime, lastSuccessfulInvocationTime_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationType, lastSuccessfulInvocationType_);
      DARABONBA_PTR_TO_JSON(RemediaitonOriginParams, remediaitonOriginParams_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(RemediationSourceType, remediationSourceType_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationsResponseBodyRemediations& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationId, lastSuccessfulInvocationId_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationTime, lastSuccessfulInvocationTime_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationType, lastSuccessfulInvocationType_);
      DARABONBA_PTR_FROM_JSON(RemediaitonOriginParams, remediaitonOriginParams_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(RemediationSourceType, remediationSourceType_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
    };
    ListAggregateRemediationsResponseBodyRemediations() = default ;
    ListAggregateRemediationsResponseBodyRemediations(const ListAggregateRemediationsResponseBodyRemediations &) = default ;
    ListAggregateRemediationsResponseBodyRemediations(ListAggregateRemediationsResponseBodyRemediations &&) = default ;
    ListAggregateRemediationsResponseBodyRemediations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationsResponseBodyRemediations() = default ;
    ListAggregateRemediationsResponseBodyRemediations& operator=(const ListAggregateRemediationsResponseBodyRemediations &) = default ;
    ListAggregateRemediationsResponseBodyRemediations& operator=(ListAggregateRemediationsResponseBodyRemediations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->configRuleId_ == nullptr && return this->invokeType_ == nullptr && return this->lastSuccessfulInvocationId_ == nullptr && return this->lastSuccessfulInvocationTime_ == nullptr
        && return this->lastSuccessfulInvocationType_ == nullptr && return this->remediaitonOriginParams_ == nullptr && return this->remediationId_ == nullptr && return this->remediationSourceType_ == nullptr && return this->remediationTemplateId_ == nullptr
        && return this->remediationType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListAggregateRemediationsResponseBodyRemediations& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // lastSuccessfulInvocationId Field Functions 
    bool hasLastSuccessfulInvocationId() const { return this->lastSuccessfulInvocationId_ != nullptr;};
    void deleteLastSuccessfulInvocationId() { this->lastSuccessfulInvocationId_ = nullptr;};
    inline string lastSuccessfulInvocationId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationId_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setLastSuccessfulInvocationId(string lastSuccessfulInvocationId) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationId_, lastSuccessfulInvocationId) };


    // lastSuccessfulInvocationTime Field Functions 
    bool hasLastSuccessfulInvocationTime() const { return this->lastSuccessfulInvocationTime_ != nullptr;};
    void deleteLastSuccessfulInvocationTime() { this->lastSuccessfulInvocationTime_ = nullptr;};
    inline int64_t lastSuccessfulInvocationTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationTime_, 0L) };
    inline ListAggregateRemediationsResponseBodyRemediations& setLastSuccessfulInvocationTime(int64_t lastSuccessfulInvocationTime) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationTime_, lastSuccessfulInvocationTime) };


    // lastSuccessfulInvocationType Field Functions 
    bool hasLastSuccessfulInvocationType() const { return this->lastSuccessfulInvocationType_ != nullptr;};
    void deleteLastSuccessfulInvocationType() { this->lastSuccessfulInvocationType_ = nullptr;};
    inline string lastSuccessfulInvocationType() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationType_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setLastSuccessfulInvocationType(string lastSuccessfulInvocationType) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationType_, lastSuccessfulInvocationType) };


    // remediaitonOriginParams Field Functions 
    bool hasRemediaitonOriginParams() const { return this->remediaitonOriginParams_ != nullptr;};
    void deleteRemediaitonOriginParams() { this->remediaitonOriginParams_ = nullptr;};
    inline string remediaitonOriginParams() const { DARABONBA_PTR_GET_DEFAULT(remediaitonOriginParams_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setRemediaitonOriginParams(string remediaitonOriginParams) { DARABONBA_PTR_SET_VALUE(remediaitonOriginParams_, remediaitonOriginParams) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // remediationSourceType Field Functions 
    bool hasRemediationSourceType() const { return this->remediationSourceType_ != nullptr;};
    void deleteRemediationSourceType() { this->remediationSourceType_ = nullptr;};
    inline string remediationSourceType() const { DARABONBA_PTR_GET_DEFAULT(remediationSourceType_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setRemediationSourceType(string remediationSourceType) { DARABONBA_PTR_SET_VALUE(remediationSourceType_, remediationSourceType) };


    // remediationTemplateId Field Functions 
    bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
    void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
    inline string remediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string remediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline ListAggregateRemediationsResponseBodyRemediations& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The execution mode of the remediation template. Valid values:
    // 
    // *   NON_EXECUTION: The remediation template is not executed.
    // *   AUTO_EXECUTION: The remediation template is automatically executed.
    // *   MANUAL_EXECUTION: The remediation template is manually executed.
    // *   NOT_CONFIG: The execution mode is not specified.
    std::shared_ptr<string> invokeType_ = nullptr;
    // The ID of the last successful execution of the remediation template.
    std::shared_ptr<string> lastSuccessfulInvocationId_ = nullptr;
    // The timestamp of the last successful execution of the remediation template. Unit: milliseconds.
    std::shared_ptr<int64_t> lastSuccessfulInvocationTime_ = nullptr;
    // The mode of the last successful execution of the remediation template. Valid values:
    // 
    // *   NON_EXECUTION: The remediation template is not executed.
    // *   AUTO_EXECUTION: The remediation template is automatically executed.
    // *   MANUAL_EXECUTION: The remediation template is manually executed.
    // *   NOT_CONFIG: The execution mode is not specified.
    std::shared_ptr<string> lastSuccessfulInvocationType_ = nullptr;
    // The converted configuration of the remediation template. This parameter is returned only for an OOS remediation template.
    std::shared_ptr<string> remediaitonOriginParams_ = nullptr;
    // The ID of the remediation template.
    std::shared_ptr<string> remediationId_ = nullptr;
    // The source of remediation template. Valid values:
    // 
    // *   ALIYUN: official template.
    // *   CUSTOM: custom template.
    // *   NONE: none.
    std::shared_ptr<string> remediationSourceType_ = nullptr;
    // The ID of the remediation template.
    std::shared_ptr<string> remediationTemplateId_ = nullptr;
    // The type of the remediation template. Valid values:
    // 
    // *   OOS: Operation Orchestration Service (official remediation).
    // *   FC: Function Compute (custom remediation).
    std::shared_ptr<string> remediationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
