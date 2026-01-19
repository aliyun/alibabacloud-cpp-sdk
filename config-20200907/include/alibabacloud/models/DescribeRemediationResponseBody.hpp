// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DescribeRemediationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRemediationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Remediation, remediation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRemediationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRemediationResponseBody() = default ;
    DescribeRemediationResponseBody(const DescribeRemediationResponseBody &) = default ;
    DescribeRemediationResponseBody(DescribeRemediationResponseBody &&) = default ;
    DescribeRemediationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRemediationResponseBody() = default ;
    DescribeRemediationResponseBody& operator=(const DescribeRemediationResponseBody &) = default ;
    DescribeRemediationResponseBody& operator=(DescribeRemediationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Remediation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Remediation& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
        DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationId, lastSuccessfulInvocationId_);
        DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationTime, lastSuccessfulInvocationTime_);
        DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationType, lastSuccessfulInvocationType_);
        DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_TO_JSON(RemediationOriginParams, remediationOriginParams_);
        DARABONBA_PTR_TO_JSON(RemediationSourceType, remediationSourceType_);
        DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
        DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
      };
      friend void from_json(const Darabonba::Json& j, Remediation& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
        DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationId, lastSuccessfulInvocationId_);
        DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationTime, lastSuccessfulInvocationTime_);
        DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationType, lastSuccessfulInvocationType_);
        DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_FROM_JSON(RemediationOriginParams, remediationOriginParams_);
        DARABONBA_PTR_FROM_JSON(RemediationSourceType, remediationSourceType_);
        DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
        DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
      };
      Remediation() = default ;
      Remediation(const Remediation &) = default ;
      Remediation(Remediation &&) = default ;
      Remediation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Remediation() = default ;
      Remediation& operator=(const Remediation &) = default ;
      Remediation& operator=(Remediation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->configRuleId_ == nullptr && this->invokeType_ == nullptr && this->lastSuccessfulInvocationId_ == nullptr && this->lastSuccessfulInvocationTime_ == nullptr && this->lastSuccessfulInvocationType_ == nullptr
        && this->remediationId_ == nullptr && this->remediationOriginParams_ == nullptr && this->remediationSourceType_ == nullptr && this->remediationTemplateId_ == nullptr && this->remediationType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Remediation& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // configRuleId Field Functions 
      bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
      void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
      inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
      inline Remediation& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


      // invokeType Field Functions 
      bool hasInvokeType() const { return this->invokeType_ != nullptr;};
      void deleteInvokeType() { this->invokeType_ = nullptr;};
      inline string getInvokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
      inline Remediation& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


      // lastSuccessfulInvocationId Field Functions 
      bool hasLastSuccessfulInvocationId() const { return this->lastSuccessfulInvocationId_ != nullptr;};
      void deleteLastSuccessfulInvocationId() { this->lastSuccessfulInvocationId_ = nullptr;};
      inline string getLastSuccessfulInvocationId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationId_, "") };
      inline Remediation& setLastSuccessfulInvocationId(string lastSuccessfulInvocationId) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationId_, lastSuccessfulInvocationId) };


      // lastSuccessfulInvocationTime Field Functions 
      bool hasLastSuccessfulInvocationTime() const { return this->lastSuccessfulInvocationTime_ != nullptr;};
      void deleteLastSuccessfulInvocationTime() { this->lastSuccessfulInvocationTime_ = nullptr;};
      inline int64_t getLastSuccessfulInvocationTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationTime_, 0L) };
      inline Remediation& setLastSuccessfulInvocationTime(int64_t lastSuccessfulInvocationTime) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationTime_, lastSuccessfulInvocationTime) };


      // lastSuccessfulInvocationType Field Functions 
      bool hasLastSuccessfulInvocationType() const { return this->lastSuccessfulInvocationType_ != nullptr;};
      void deleteLastSuccessfulInvocationType() { this->lastSuccessfulInvocationType_ = nullptr;};
      inline string getLastSuccessfulInvocationType() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationType_, "") };
      inline Remediation& setLastSuccessfulInvocationType(string lastSuccessfulInvocationType) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationType_, lastSuccessfulInvocationType) };


      // remediationId Field Functions 
      bool hasRemediationId() const { return this->remediationId_ != nullptr;};
      void deleteRemediationId() { this->remediationId_ = nullptr;};
      inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
      inline Remediation& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


      // remediationOriginParams Field Functions 
      bool hasRemediationOriginParams() const { return this->remediationOriginParams_ != nullptr;};
      void deleteRemediationOriginParams() { this->remediationOriginParams_ = nullptr;};
      inline string getRemediationOriginParams() const { DARABONBA_PTR_GET_DEFAULT(remediationOriginParams_, "") };
      inline Remediation& setRemediationOriginParams(string remediationOriginParams) { DARABONBA_PTR_SET_VALUE(remediationOriginParams_, remediationOriginParams) };


      // remediationSourceType Field Functions 
      bool hasRemediationSourceType() const { return this->remediationSourceType_ != nullptr;};
      void deleteRemediationSourceType() { this->remediationSourceType_ = nullptr;};
      inline string getRemediationSourceType() const { DARABONBA_PTR_GET_DEFAULT(remediationSourceType_, "") };
      inline Remediation& setRemediationSourceType(string remediationSourceType) { DARABONBA_PTR_SET_VALUE(remediationSourceType_, remediationSourceType) };


      // remediationTemplateId Field Functions 
      bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
      void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
      inline string getRemediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
      inline Remediation& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


      // remediationType Field Functions 
      bool hasRemediationType() const { return this->remediationType_ != nullptr;};
      void deleteRemediationType() { this->remediationType_ = nullptr;};
      inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
      inline Remediation& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> accountId_ {};
      // The rule ID.
      shared_ptr<string> configRuleId_ {};
      // The execution mode of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template was not executed.
      // *   AUTO_EXECUTION: The remediation template was automatically executed.
      // *   MANUAL_EXECUTION: The remediation template was manually executed.
      // *   NOT_CONFIG: The execution mode was not specified.
      shared_ptr<string> invokeType_ {};
      // The record ID of the last successful execution of the remediation template.
      shared_ptr<string> lastSuccessfulInvocationId_ {};
      // The timestamp of the last successful execution of the remediation template. Unit: milliseconds.
      shared_ptr<int64_t> lastSuccessfulInvocationTime_ {};
      // The mode of the last successful execution of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template was not executed.
      // *   AUTO_EXECUTION: The remediation template was automatically executed.
      // *   MANUAL_EXECUTION: The remediation template was manually executed.
      // *   NOT_CONFIG: The execution mode was not specified.
      shared_ptr<string> lastSuccessfulInvocationType_ {};
      // The ID of the remediation configuration.
      shared_ptr<string> remediationId_ {};
      // The converted configuration of the remediation template. This parameter is returned only for an OOS remediation template.
      // 
      // This parameter is required.
      shared_ptr<string> remediationOriginParams_ {};
      // The source of the remediation template. Valid values:
      // 
      // *   ALIYUN: official template
      // *   CUSTOM: custom template
      // *   NONE: none
      shared_ptr<string> remediationSourceType_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationTemplateId_ {};
      // The type of the remediation template. Valid values:
      // 
      // *   OOS: Operation Orchestration Service (official remediation)
      // *   FC: Function Compute (custom remediation)
      shared_ptr<string> remediationType_ {};
    };

    virtual bool empty() const override { return this->remediation_ == nullptr
        && this->requestId_ == nullptr; };
    // remediation Field Functions 
    bool hasRemediation() const { return this->remediation_ != nullptr;};
    void deleteRemediation() { this->remediation_ = nullptr;};
    inline const DescribeRemediationResponseBody::Remediation & getRemediation() const { DARABONBA_PTR_GET_CONST(remediation_, DescribeRemediationResponseBody::Remediation) };
    inline DescribeRemediationResponseBody::Remediation getRemediation() { DARABONBA_PTR_GET(remediation_, DescribeRemediationResponseBody::Remediation) };
    inline DescribeRemediationResponseBody& setRemediation(const DescribeRemediationResponseBody::Remediation & remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };
    inline DescribeRemediationResponseBody& setRemediation(DescribeRemediationResponseBody::Remediation && remediation) { DARABONBA_PTR_SET_RVALUE(remediation_, remediation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRemediationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the remediation configuration.
    shared_ptr<DescribeRemediationResponseBody::Remediation> remediation_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
