// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONSRESPONSEBODY_HPP_
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
  class ListRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRemediationsResponseBody() = default ;
    ListRemediationsResponseBody(const ListRemediationsResponseBody &) = default ;
    ListRemediationsResponseBody(ListRemediationsResponseBody &&) = default ;
    ListRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationsResponseBody() = default ;
    ListRemediationsResponseBody& operator=(const ListRemediationsResponseBody &) = default ;
    ListRemediationsResponseBody& operator=(ListRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Remediations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Remediations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Remediations& obj) { 
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
        && this->configRuleId_ == nullptr && this->invokeType_ == nullptr && this->lastSuccessfulInvocationId_ == nullptr && this->lastSuccessfulInvocationTime_ == nullptr && this->lastSuccessfulInvocationType_ == nullptr
        && this->remediationId_ == nullptr && this->remediationOriginParams_ == nullptr && this->remediationSourceType_ == nullptr && this->remediationTemplateId_ == nullptr && this->remediationType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Remediations& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


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


      // remediationId Field Functions 
      bool hasRemediationId() const { return this->remediationId_ != nullptr;};
      void deleteRemediationId() { this->remediationId_ = nullptr;};
      inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
      inline Remediations& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


      // remediationOriginParams Field Functions 
      bool hasRemediationOriginParams() const { return this->remediationOriginParams_ != nullptr;};
      void deleteRemediationOriginParams() { this->remediationOriginParams_ = nullptr;};
      inline string getRemediationOriginParams() const { DARABONBA_PTR_GET_DEFAULT(remediationOriginParams_, "") };
      inline Remediations& setRemediationOriginParams(string remediationOriginParams) { DARABONBA_PTR_SET_VALUE(remediationOriginParams_, remediationOriginParams) };


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
      // The rule ID.
      shared_ptr<string> configRuleId_ {};
      // The execution mode of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template was not executed.
      // *   AUTO_EXECUTION: The remediation template was automatically executed.
      // *   MANUAL_EXECUTION: The remediation template was manually executed.
      // *   NOT_CONFIG: The execution mode was not specified.
      shared_ptr<string> invokeType_ {};
      // The ID of the last successful execution of the remediation template.
      shared_ptr<string> lastSuccessfulInvocationId_ {};
      // The timestamp of the last successful execution of the remediation template Unit: milliseconds.
      shared_ptr<int64_t> lastSuccessfulInvocationTime_ {};
      // The mode of the last successful execution of the remediation template. Valid values:
      // 
      // *   NON_EXECUTION: The remediation template was not executed.
      // *   AUTO_EXECUTION: The remediation template was automatically executed.
      // *   MANUAL_EXECUTION: The remediation template was manually executed.
      // *   NOT_CONFIG: The execution mode was not specified.
      shared_ptr<string> lastSuccessfulInvocationType_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationId_ {};
      // The converted configuration of the remediation template. This parameter is available only for an OOS remediation template.
      shared_ptr<string> remediationOriginParams_ {};
      // The source of remediation. Valid values:
      // 
      // *   ALIYUN: official template.
      // *   CUSTOM: custom template.
      // *   NONE: none.
      shared_ptr<string> remediationSourceType_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationTemplateId_ {};
      // The type of the remediation template. Valid values:
      // 
      // *   OOS: Operation Orchestration Service (official remediation)
      // *   FC: Function Compute (custom remediation)
      shared_ptr<string> remediationType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->remediations_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRemediationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRemediationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListRemediationsResponseBody::Remediations> & getRemediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListRemediationsResponseBody::Remediations>) };
    inline vector<ListRemediationsResponseBody::Remediations> getRemediations() { DARABONBA_PTR_GET(remediations_, vector<ListRemediationsResponseBody::Remediations>) };
    inline ListRemediationsResponseBody& setRemediations(const vector<ListRemediationsResponseBody::Remediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListRemediationsResponseBody& setRemediations(vector<ListRemediationsResponseBody::Remediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRemediationsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 50.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The converted configuration of the remediation template. This parameter is returned only for an OOS remediation template.
    shared_ptr<vector<ListRemediationsResponseBody::Remediations>> remediations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of remediation settings.
    // 
    // This parameter is required.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
