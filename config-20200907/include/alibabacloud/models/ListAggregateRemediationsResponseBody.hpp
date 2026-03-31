// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateRemediationsResponseBody() = default ;
    ListAggregateRemediationsResponseBody(const ListAggregateRemediationsResponseBody &) = default ;
    ListAggregateRemediationsResponseBody(ListAggregateRemediationsResponseBody &&) = default ;
    ListAggregateRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationsResponseBody() = default ;
    ListAggregateRemediationsResponseBody& operator=(const ListAggregateRemediationsResponseBody &) = default ;
    ListAggregateRemediationsResponseBody& operator=(ListAggregateRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Remediations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Remediations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Remediations& obj) { 
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
      Remediations() = default ;
      Remediations(const Remediations &) = default ;
      Remediations(Remediations &&) = default ;
      Remediations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Remediations() = default ;
      Remediations& operator=(const Remediations &) = default ;
      Remediations& operator=(Remediations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->aggregatorId_ == nullptr && this->configRuleId_ == nullptr && this->invokeType_ == nullptr && this->lastSuccessfulInvocationId_ == nullptr && this->lastSuccessfulInvocationTime_ == nullptr
        && this->lastSuccessfulInvocationType_ == nullptr && this->remediaitonOriginParams_ == nullptr && this->remediationId_ == nullptr && this->remediationSourceType_ == nullptr && this->remediationTemplateId_ == nullptr
        && this->remediationType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Remediations& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // aggregatorId Field Functions 
      bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
      void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
      inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
      inline Remediations& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


      // configRuleId Field Functions 
      bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
      void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
      inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
      inline Remediations& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


      // invokeType Field Functions 
      bool hasInvokeType() const { return this->invokeType_ != nullptr;};
      void deleteInvokeType() { this->invokeType_ = nullptr;};
      inline string getInvokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
      inline Remediations& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


      // lastSuccessfulInvocationId Field Functions 
      bool hasLastSuccessfulInvocationId() const { return this->lastSuccessfulInvocationId_ != nullptr;};
      void deleteLastSuccessfulInvocationId() { this->lastSuccessfulInvocationId_ = nullptr;};
      inline string getLastSuccessfulInvocationId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationId_, "") };
      inline Remediations& setLastSuccessfulInvocationId(string lastSuccessfulInvocationId) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationId_, lastSuccessfulInvocationId) };


      // lastSuccessfulInvocationTime Field Functions 
      bool hasLastSuccessfulInvocationTime() const { return this->lastSuccessfulInvocationTime_ != nullptr;};
      void deleteLastSuccessfulInvocationTime() { this->lastSuccessfulInvocationTime_ = nullptr;};
      inline int64_t getLastSuccessfulInvocationTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationTime_, 0L) };
      inline Remediations& setLastSuccessfulInvocationTime(int64_t lastSuccessfulInvocationTime) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationTime_, lastSuccessfulInvocationTime) };


      // lastSuccessfulInvocationType Field Functions 
      bool hasLastSuccessfulInvocationType() const { return this->lastSuccessfulInvocationType_ != nullptr;};
      void deleteLastSuccessfulInvocationType() { this->lastSuccessfulInvocationType_ = nullptr;};
      inline string getLastSuccessfulInvocationType() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationType_, "") };
      inline Remediations& setLastSuccessfulInvocationType(string lastSuccessfulInvocationType) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationType_, lastSuccessfulInvocationType) };


      // remediaitonOriginParams Field Functions 
      bool hasRemediaitonOriginParams() const { return this->remediaitonOriginParams_ != nullptr;};
      void deleteRemediaitonOriginParams() { this->remediaitonOriginParams_ = nullptr;};
      inline string getRemediaitonOriginParams() const { DARABONBA_PTR_GET_DEFAULT(remediaitonOriginParams_, "") };
      inline Remediations& setRemediaitonOriginParams(string remediaitonOriginParams) { DARABONBA_PTR_SET_VALUE(remediaitonOriginParams_, remediaitonOriginParams) };


      // remediationId Field Functions 
      bool hasRemediationId() const { return this->remediationId_ != nullptr;};
      void deleteRemediationId() { this->remediationId_ = nullptr;};
      inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
      inline Remediations& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


      // remediationSourceType Field Functions 
      bool hasRemediationSourceType() const { return this->remediationSourceType_ != nullptr;};
      void deleteRemediationSourceType() { this->remediationSourceType_ = nullptr;};
      inline string getRemediationSourceType() const { DARABONBA_PTR_GET_DEFAULT(remediationSourceType_, "") };
      inline Remediations& setRemediationSourceType(string remediationSourceType) { DARABONBA_PTR_SET_VALUE(remediationSourceType_, remediationSourceType) };


      // remediationTemplateId Field Functions 
      bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
      void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
      inline string getRemediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
      inline Remediations& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


      // remediationType Field Functions 
      bool hasRemediationType() const { return this->remediationType_ != nullptr;};
      void deleteRemediationType() { this->remediationType_ = nullptr;};
      inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
      inline Remediations& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> accountId_ {};
      // The ID of the account group.
      shared_ptr<string> aggregatorId_ {};
      // The rule ID.
      shared_ptr<string> configRuleId_ {};
      // The execution mode of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template is not executed.
      // *   AUTO_EXECUTION: The remediation template is automatically executed.
      // *   MANUAL_EXECUTION: The remediation template is manually executed.
      // *   NOT_CONFIG: The execution mode is not specified.
      shared_ptr<string> invokeType_ {};
      // The ID of the last successful execution of the remediation template.
      shared_ptr<string> lastSuccessfulInvocationId_ {};
      // The timestamp of the last successful execution of the remediation template. Unit: milliseconds.
      shared_ptr<int64_t> lastSuccessfulInvocationTime_ {};
      // The mode of the last successful execution of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template is not executed.
      // *   AUTO_EXECUTION: The remediation template is automatically executed.
      // *   MANUAL_EXECUTION: The remediation template is manually executed.
      // *   NOT_CONFIG: The execution mode is not specified.
      shared_ptr<string> lastSuccessfulInvocationType_ {};
      // The converted configuration of the remediation template. This parameter is returned only for an OOS remediation template.
      shared_ptr<string> remediaitonOriginParams_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationId_ {};
      // The source of remediation template. Valid values:
      // 
      // *   ALIYUN: official template.
      // *   CUSTOM: custom template.
      // *   NONE: none.
      shared_ptr<string> remediationSourceType_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationTemplateId_ {};
      // The type of the remediation template. Valid values:
      // 
      // *   OOS: Operation Orchestration Service (official remediation).
      // *   FC: Function Compute (custom remediation).
      shared_ptr<string> remediationType_ {};
    };

    virtual bool empty() const override { return this->remediations_ == nullptr
        && this->requestId_ == nullptr; };
    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListAggregateRemediationsResponseBody::Remediations> & getRemediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListAggregateRemediationsResponseBody::Remediations>) };
    inline vector<ListAggregateRemediationsResponseBody::Remediations> getRemediations() { DARABONBA_PTR_GET(remediations_, vector<ListAggregateRemediationsResponseBody::Remediations>) };
    inline ListAggregateRemediationsResponseBody& setRemediations(const vector<ListAggregateRemediationsResponseBody::Remediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListAggregateRemediationsResponseBody& setRemediations(vector<ListAggregateRemediationsResponseBody::Remediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that contains remediation templates.
    shared_ptr<vector<ListAggregateRemediationsResponseBody::Remediations>> remediations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
