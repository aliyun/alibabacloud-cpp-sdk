// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeBenchmarkTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBenchmarkTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAgent, availableAgent_);
      DARABONBA_PTR_TO_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(DesiredAgent, desiredAgent_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBenchmarkTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAgent, availableAgent_);
      DARABONBA_PTR_FROM_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(DesiredAgent, desiredAgent_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeBenchmarkTaskResponseBody() = default ;
    DescribeBenchmarkTaskResponseBody(const DescribeBenchmarkTaskResponseBody &) = default ;
    DescribeBenchmarkTaskResponseBody(DescribeBenchmarkTaskResponseBody &&) = default ;
    DescribeBenchmarkTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBenchmarkTaskResponseBody() = default ;
    DescribeBenchmarkTaskResponseBody& operator=(const DescribeBenchmarkTaskResponseBody &) = default ;
    DescribeBenchmarkTaskResponseBody& operator=(DescribeBenchmarkTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAgent_ == nullptr
        && this->callerUid_ == nullptr && this->desiredAgent_ == nullptr && this->endpoint_ == nullptr && this->message_ == nullptr && this->parentUid_ == nullptr
        && this->reason_ == nullptr && this->requestId_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->token_ == nullptr; };
    // availableAgent Field Functions 
    bool hasAvailableAgent() const { return this->availableAgent_ != nullptr;};
    void deleteAvailableAgent() { this->availableAgent_ = nullptr;};
    inline int64_t getAvailableAgent() const { DARABONBA_PTR_GET_DEFAULT(availableAgent_, 0L) };
    inline DescribeBenchmarkTaskResponseBody& setAvailableAgent(int64_t availableAgent) { DARABONBA_PTR_SET_VALUE(availableAgent_, availableAgent) };


    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline string getCallerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
    inline DescribeBenchmarkTaskResponseBody& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // desiredAgent Field Functions 
    bool hasDesiredAgent() const { return this->desiredAgent_ != nullptr;};
    void deleteDesiredAgent() { this->desiredAgent_ = nullptr;};
    inline int64_t getDesiredAgent() const { DARABONBA_PTR_GET_DEFAULT(desiredAgent_, 0L) };
    inline DescribeBenchmarkTaskResponseBody& setDesiredAgent(int64_t desiredAgent) { DARABONBA_PTR_SET_VALUE(desiredAgent_, desiredAgent) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeBenchmarkTaskResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBenchmarkTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // parentUid Field Functions 
    bool hasParentUid() const { return this->parentUid_ != nullptr;};
    void deleteParentUid() { this->parentUid_ = nullptr;};
    inline string getParentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
    inline DescribeBenchmarkTaskResponseBody& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeBenchmarkTaskResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBenchmarkTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeBenchmarkTaskResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBenchmarkTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeBenchmarkTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeBenchmarkTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeBenchmarkTaskResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The number of instances that you can test.
    shared_ptr<int64_t> availableAgent_ {};
    // The ID of the operation caller.
    shared_ptr<string> callerUid_ {};
    // The number of instances that you want to test.
    shared_ptr<int64_t> desiredAgent_ {};
    // The endpoint of the service gateway.
    shared_ptr<string> endpoint_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the Alibaba Cloud account that is used to call the operation.
    shared_ptr<string> parentUid_ {};
    // The event or reason that causes the current state of the stress testing task.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the service that you want to test.
    shared_ptr<string> serviceName_ {};
    // The state of the stress testing task.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Starting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DeleteFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopping
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Error
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Updating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CreateFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> status_ {};
    // The ID of the stress testing task.
    shared_ptr<string> taskId_ {};
    // The name of the stress testing task.
    shared_ptr<string> taskName_ {};
    // The token for authentication when a stress testing task is created.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
