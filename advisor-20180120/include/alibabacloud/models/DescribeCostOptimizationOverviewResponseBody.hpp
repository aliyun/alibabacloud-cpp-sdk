// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostOptimizationOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostOptimizationOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostOptimizationOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCostOptimizationOverviewResponseBody() = default ;
    DescribeCostOptimizationOverviewResponseBody(const DescribeCostOptimizationOverviewResponseBody &) = default ;
    DescribeCostOptimizationOverviewResponseBody(DescribeCostOptimizationOverviewResponseBody &&) = default ;
    DescribeCostOptimizationOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostOptimizationOverviewResponseBody() = default ;
    DescribeCostOptimizationOverviewResponseBody& operator=(const DescribeCostOptimizationOverviewResponseBody &) = default ;
    DescribeCostOptimizationOverviewResponseBody& operator=(DescribeCostOptimizationOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BillingCycleDate, billingCycleDate_);
        DARABONBA_PTR_TO_JSON(CurrentBillingCost, currentBillingCost_);
        DARABONBA_PTR_TO_JSON(ExpectedSavingCost, expectedSavingCost_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OptCheckItemNum, optCheckItemNum_);
        DARABONBA_PTR_TO_JSON(OptResourceNum, optResourceNum_);
        DARABONBA_PTR_TO_JSON(ProcessedResourceCount, processedResourceCount_);
        DARABONBA_PTR_TO_JSON(ProcessedSaveAmount, processedSaveAmount_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(WaitProcessResourceCount, waitProcessResourceCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BillingCycleDate, billingCycleDate_);
        DARABONBA_PTR_FROM_JSON(CurrentBillingCost, currentBillingCost_);
        DARABONBA_PTR_FROM_JSON(ExpectedSavingCost, expectedSavingCost_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OptCheckItemNum, optCheckItemNum_);
        DARABONBA_PTR_FROM_JSON(OptResourceNum, optResourceNum_);
        DARABONBA_PTR_FROM_JSON(ProcessedResourceCount, processedResourceCount_);
        DARABONBA_PTR_FROM_JSON(ProcessedSaveAmount, processedSaveAmount_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(WaitProcessResourceCount, waitProcessResourceCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingCycleDate_ == nullptr
        && this->currentBillingCost_ == nullptr && this->expectedSavingCost_ == nullptr && this->gmtModified_ == nullptr && this->optCheckItemNum_ == nullptr && this->optResourceNum_ == nullptr
        && this->processedResourceCount_ == nullptr && this->processedSaveAmount_ == nullptr && this->taskId_ == nullptr && this->waitProcessResourceCount_ == nullptr; };
      // billingCycleDate Field Functions 
      bool hasBillingCycleDate() const { return this->billingCycleDate_ != nullptr;};
      void deleteBillingCycleDate() { this->billingCycleDate_ = nullptr;};
      inline string getBillingCycleDate() const { DARABONBA_PTR_GET_DEFAULT(billingCycleDate_, "") };
      inline Data& setBillingCycleDate(string billingCycleDate) { DARABONBA_PTR_SET_VALUE(billingCycleDate_, billingCycleDate) };


      // currentBillingCost Field Functions 
      bool hasCurrentBillingCost() const { return this->currentBillingCost_ != nullptr;};
      void deleteCurrentBillingCost() { this->currentBillingCost_ = nullptr;};
      inline string getCurrentBillingCost() const { DARABONBA_PTR_GET_DEFAULT(currentBillingCost_, "") };
      inline Data& setCurrentBillingCost(string currentBillingCost) { DARABONBA_PTR_SET_VALUE(currentBillingCost_, currentBillingCost) };


      // expectedSavingCost Field Functions 
      bool hasExpectedSavingCost() const { return this->expectedSavingCost_ != nullptr;};
      void deleteExpectedSavingCost() { this->expectedSavingCost_ = nullptr;};
      inline string getExpectedSavingCost() const { DARABONBA_PTR_GET_DEFAULT(expectedSavingCost_, "") };
      inline Data& setExpectedSavingCost(string expectedSavingCost) { DARABONBA_PTR_SET_VALUE(expectedSavingCost_, expectedSavingCost) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // optCheckItemNum Field Functions 
      bool hasOptCheckItemNum() const { return this->optCheckItemNum_ != nullptr;};
      void deleteOptCheckItemNum() { this->optCheckItemNum_ = nullptr;};
      inline string getOptCheckItemNum() const { DARABONBA_PTR_GET_DEFAULT(optCheckItemNum_, "") };
      inline Data& setOptCheckItemNum(string optCheckItemNum) { DARABONBA_PTR_SET_VALUE(optCheckItemNum_, optCheckItemNum) };


      // optResourceNum Field Functions 
      bool hasOptResourceNum() const { return this->optResourceNum_ != nullptr;};
      void deleteOptResourceNum() { this->optResourceNum_ = nullptr;};
      inline string getOptResourceNum() const { DARABONBA_PTR_GET_DEFAULT(optResourceNum_, "") };
      inline Data& setOptResourceNum(string optResourceNum) { DARABONBA_PTR_SET_VALUE(optResourceNum_, optResourceNum) };


      // processedResourceCount Field Functions 
      bool hasProcessedResourceCount() const { return this->processedResourceCount_ != nullptr;};
      void deleteProcessedResourceCount() { this->processedResourceCount_ = nullptr;};
      inline string getProcessedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(processedResourceCount_, "") };
      inline Data& setProcessedResourceCount(string processedResourceCount) { DARABONBA_PTR_SET_VALUE(processedResourceCount_, processedResourceCount) };


      // processedSaveAmount Field Functions 
      bool hasProcessedSaveAmount() const { return this->processedSaveAmount_ != nullptr;};
      void deleteProcessedSaveAmount() { this->processedSaveAmount_ = nullptr;};
      inline string getProcessedSaveAmount() const { DARABONBA_PTR_GET_DEFAULT(processedSaveAmount_, "") };
      inline Data& setProcessedSaveAmount(string processedSaveAmount) { DARABONBA_PTR_SET_VALUE(processedSaveAmount_, processedSaveAmount) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // waitProcessResourceCount Field Functions 
      bool hasWaitProcessResourceCount() const { return this->waitProcessResourceCount_ != nullptr;};
      void deleteWaitProcessResourceCount() { this->waitProcessResourceCount_ = nullptr;};
      inline string getWaitProcessResourceCount() const { DARABONBA_PTR_GET_DEFAULT(waitProcessResourceCount_, "") };
      inline Data& setWaitProcessResourceCount(string waitProcessResourceCount) { DARABONBA_PTR_SET_VALUE(waitProcessResourceCount_, waitProcessResourceCount) };


    protected:
      shared_ptr<string> billingCycleDate_ {};
      shared_ptr<string> currentBillingCost_ {};
      shared_ptr<string> expectedSavingCost_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> optCheckItemNum_ {};
      shared_ptr<string> optResourceNum_ {};
      shared_ptr<string> processedResourceCount_ {};
      shared_ptr<string> processedSaveAmount_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<string> waitProcessResourceCount_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // AuthAction
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail) };
    inline DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail) };
    inline DescribeCostOptimizationOverviewResponseBody& setAccessDeniedDetail(const DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeCostOptimizationOverviewResponseBody& setAccessDeniedDetail(DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCostOptimizationOverviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCostOptimizationOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCostOptimizationOverviewResponseBody::Data) };
    inline DescribeCostOptimizationOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCostOptimizationOverviewResponseBody::Data) };
    inline DescribeCostOptimizationOverviewResponseBody& setData(const DescribeCostOptimizationOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCostOptimizationOverviewResponseBody& setData(DescribeCostOptimizationOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCostOptimizationOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCostOptimizationOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCostOptimizationOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeCostOptimizationOverviewResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribeCostOptimizationOverviewResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
