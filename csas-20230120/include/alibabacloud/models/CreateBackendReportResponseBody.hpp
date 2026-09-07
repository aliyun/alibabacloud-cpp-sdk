// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateBackendReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ObjectCount, objectCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TargetCount, targetCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ObjectCount, objectCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TargetCount, targetCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CreateBackendReportResponseBody() = default ;
    CreateBackendReportResponseBody(const CreateBackendReportResponseBody &) = default ;
    CreateBackendReportResponseBody(CreateBackendReportResponseBody &&) = default ;
    CreateBackendReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendReportResponseBody() = default ;
    CreateBackendReportResponseBody& operator=(const CreateBackendReportResponseBody &) = default ;
    CreateBackendReportResponseBody& operator=(CreateBackendReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_ANY_TO_JSON(ReportObject, reportObject_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_ANY_FROM_JSON(ReportObject, reportObject_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Target& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The SASE user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->approvalId_ == nullptr
        && this->code_ == nullptr && this->effectStatus_ == nullptr && this->message_ == nullptr && this->reportObject_ == nullptr && this->reportType_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->target_ == nullptr; };
      // approvalId Field Functions 
      bool hasApprovalId() const { return this->approvalId_ != nullptr;};
      void deleteApprovalId() { this->approvalId_ = nullptr;};
      inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
      inline Items& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // effectStatus Field Functions 
      bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
      void deleteEffectStatus() { this->effectStatus_ = nullptr;};
      inline string getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, "") };
      inline Items& setEffectStatus(string effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Items& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // reportObject Field Functions 
      bool hasReportObject() const { return this->reportObject_ != nullptr;};
      void deleteReportObject() { this->reportObject_ = nullptr;};
      inline       const Darabonba::Json & getReportObject() const { DARABONBA_GET(reportObject_) };
      Darabonba::Json & getReportObject() { DARABONBA_GET(reportObject_) };
      inline Items& setReportObject(const Darabonba::Json & reportObject) { DARABONBA_SET_VALUE(reportObject_, reportObject) };
      inline Items& setReportObject(Darabonba::Json && reportObject) { DARABONBA_SET_RVALUE(reportObject_, reportObject) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Items& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Items& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Items::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Items::Target) };
      inline Items::Target getTarget() { DARABONBA_PTR_GET(target_, Items::Target) };
      inline Items& setTarget(const Items::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Items& setTarget(Items::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    protected:
      // The approval instance ID generated after a successful creation. This parameter is not returned if the creation fails.
      shared_ptr<string> approvalId_ {};
      // The error code returned when the current combination fails to be created. This parameter is not returned if the creation succeeds.
      shared_ptr<string> code_ {};
      // The filing effective status. Enabled is returned when the creation succeeds, which indicates that the filing is valid.
      shared_ptr<string> effectStatus_ {};
      // The error message returned when the current combination fails to be created. This parameter is not returned if the creation succeeds.
      shared_ptr<string> message_ {};
      // The filing object corresponding to the current combination. The fields vary based on the PolicyType value.
      Darabonba::Json reportObject_ {};
      // The filing type. BackendReport is always returned when the creation succeeds, which indicates a backend filing.
      shared_ptr<string> reportType_ {};
      // The approval status. Approved is returned when the creation succeeds, which indicates that the filing is approved.
      shared_ptr<string> status_ {};
      // Indicates whether the current combination is created.
      shared_ptr<bool> success_ {};
      // The filing user corresponding to the current combination.
      shared_ptr<Items::Target> target_ {};
    };

    virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->items_ == nullptr && this->objectCount_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->targetCount_ == nullptr
        && this->totalCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline CreateBackendReportResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<CreateBackendReportResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CreateBackendReportResponseBody::Items>) };
    inline vector<CreateBackendReportResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CreateBackendReportResponseBody::Items>) };
    inline CreateBackendReportResponseBody& setItems(const vector<CreateBackendReportResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateBackendReportResponseBody& setItems(vector<CreateBackendReportResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // objectCount Field Functions 
    bool hasObjectCount() const { return this->objectCount_ != nullptr;};
    void deleteObjectCount() { this->objectCount_ = nullptr;};
    inline int32_t getObjectCount() const { DARABONBA_PTR_GET_DEFAULT(objectCount_, 0) };
    inline CreateBackendReportResponseBody& setObjectCount(int32_t objectCount) { DARABONBA_PTR_SET_VALUE(objectCount_, objectCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackendReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateBackendReportResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // targetCount Field Functions 
    bool hasTargetCount() const { return this->targetCount_ != nullptr;};
    void deleteTargetCount() { this->targetCount_ = nullptr;};
    inline int32_t getTargetCount() const { DARABONBA_PTR_GET_DEFAULT(targetCount_, 0) };
    inline CreateBackendReportResponseBody& setTargetCount(int32_t targetCount) { DARABONBA_PTR_SET_VALUE(targetCount_, targetCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateBackendReportResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of user-object combinations that failed to be created.
    shared_ptr<int32_t> failedCount_ {};
    // The processing results for each user-object combination. If some combinations fail, the operation still returns results for all combinations.
    shared_ptr<vector<CreateBackendReportResponseBody::Items>> items_ {};
    // The number of deduplicated filing objects.
    shared_ptr<int32_t> objectCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The number of user-object combinations that are created.
    shared_ptr<int32_t> successCount_ {};
    // The number of deduplicated filing users.
    shared_ptr<int32_t> targetCount_ {};
    // The total number of expanded user-object combinations.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
