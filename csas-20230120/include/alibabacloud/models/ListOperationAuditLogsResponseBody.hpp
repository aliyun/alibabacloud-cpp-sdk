// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONAUDITLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONAUDITLOGSRESPONSEBODY_HPP_
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
  class ListOperationAuditLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListOperationAuditLogsResponseBody() = default ;
    ListOperationAuditLogsResponseBody(const ListOperationAuditLogsResponseBody &) = default ;
    ListOperationAuditLogsResponseBody(ListOperationAuditLogsResponseBody &&) = default ;
    ListOperationAuditLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationAuditLogsResponseBody() = default ;
    ListOperationAuditLogsResponseBody& operator=(const ListOperationAuditLogsResponseBody &) = default ;
    ListOperationAuditLogsResponseBody& operator=(ListOperationAuditLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(AfterAction, afterAction_);
        DARABONBA_PTR_TO_JSON(BeforeAction, beforeAction_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(OperationFunc, operationFunc_);
        DARABONBA_PTR_TO_JSON(OperationPage, operationPage_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterAction, afterAction_);
        DARABONBA_PTR_FROM_JSON(BeforeAction, beforeAction_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(OperationFunc, operationFunc_);
        DARABONBA_PTR_FROM_JSON(OperationPage, operationPage_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterAction_ == nullptr
        && this->beforeAction_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->eventType_ == nullptr && this->operationFunc_ == nullptr
        && this->operationPage_ == nullptr && this->operationTime_ == nullptr && this->operationType_ == nullptr && this->operatorId_ == nullptr && this->success_ == nullptr; };
      // afterAction Field Functions 
      bool hasAfterAction() const { return this->afterAction_ != nullptr;};
      void deleteAfterAction() { this->afterAction_ = nullptr;};
      inline string getAfterAction() const { DARABONBA_PTR_GET_DEFAULT(afterAction_, "") };
      inline Logs& setAfterAction(string afterAction) { DARABONBA_PTR_SET_VALUE(afterAction_, afterAction) };


      // beforeAction Field Functions 
      bool hasBeforeAction() const { return this->beforeAction_ != nullptr;};
      void deleteBeforeAction() { this->beforeAction_ = nullptr;};
      inline string getBeforeAction() const { DARABONBA_PTR_GET_DEFAULT(beforeAction_, "") };
      inline Logs& setBeforeAction(string beforeAction) { DARABONBA_PTR_SET_VALUE(beforeAction_, beforeAction) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Logs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Logs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Logs& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // operationFunc Field Functions 
      bool hasOperationFunc() const { return this->operationFunc_ != nullptr;};
      void deleteOperationFunc() { this->operationFunc_ = nullptr;};
      inline string getOperationFunc() const { DARABONBA_PTR_GET_DEFAULT(operationFunc_, "") };
      inline Logs& setOperationFunc(string operationFunc) { DARABONBA_PTR_SET_VALUE(operationFunc_, operationFunc) };


      // operationPage Field Functions 
      bool hasOperationPage() const { return this->operationPage_ != nullptr;};
      void deleteOperationPage() { this->operationPage_ = nullptr;};
      inline string getOperationPage() const { DARABONBA_PTR_GET_DEFAULT(operationPage_, "") };
      inline Logs& setOperationPage(string operationPage) { DARABONBA_PTR_SET_VALUE(operationPage_, operationPage) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline Logs& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Logs& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // operatorId Field Functions 
      bool hasOperatorId() const { return this->operatorId_ != nullptr;};
      void deleteOperatorId() { this->operatorId_ = nullptr;};
      inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
      inline Logs& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Logs& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The post-operation snapshot. This value is recorded as-is by the audit framework without localization. This field is empty for historical logs that are not integrated with the audit framework.
      shared_ptr<string> afterAction_ {};
      // The pre-operation snapshot. This value is recorded as-is by the audit framework without localization. This field is empty for historical logs that are not integrated with the audit framework.
      shared_ptr<string> beforeAction_ {};
      // The error code when the operation failed. This field is empty when the operation succeeded.
      shared_ptr<string> errorCode_ {};
      // The error message when the operation failed. This field is empty when the operation succeeded.
      shared_ptr<string> errorMessage_ {};
      // The event source type. Valid values:
      // - **console**: console call.
      // - **sdk**: SDK call.
      shared_ptr<string> eventType_ {};
      // The operation function module. The return value is localized based on the request language.
      shared_ptr<string> operationFunc_ {};
      // The operation page. The return value is localized based on the request language.
      shared_ptr<string> operationPage_ {};
      // The operation time.
      shared_ptr<string> operationTime_ {};
      // The operation type. The return value is localized based on the request language.
      shared_ptr<string> operationType_ {};
      // The Alibaba Cloud account ID (AliUid) of the operator.
      shared_ptr<string> operatorId_ {};
      // Indicates whether the operation succeeded.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListOperationAuditLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListOperationAuditLogsResponseBody::Logs>) };
    inline vector<ListOperationAuditLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListOperationAuditLogsResponseBody::Logs>) };
    inline ListOperationAuditLogsResponseBody& setLogs(const vector<ListOperationAuditLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListOperationAuditLogsResponseBody& setLogs(vector<ListOperationAuditLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationAuditLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListOperationAuditLogsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of administrator operation audit logs, sorted by operation time in descending order.
    shared_ptr<vector<ListOperationAuditLogsResponseBody::Logs>> logs_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of logs that match the query conditions.
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
