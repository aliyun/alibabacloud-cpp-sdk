// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSYNCJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSYNCJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateIdentityProviderSyncJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderSyncJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderSyncJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateIdentityProviderSyncJobResponseBody() = default ;
    CreateIdentityProviderSyncJobResponseBody(const CreateIdentityProviderSyncJobResponseBody &) = default ;
    CreateIdentityProviderSyncJobResponseBody(CreateIdentityProviderSyncJobResponseBody &&) = default ;
    CreateIdentityProviderSyncJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderSyncJobResponseBody() = default ;
    CreateIdentityProviderSyncJobResponseBody& operator=(const CreateIdentityProviderSyncJobResponseBody &) = default ;
    CreateIdentityProviderSyncJobResponseBody& operator=(CreateIdentityProviderSyncJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentStep, currentStep_);
        DARABONBA_PTR_TO_JSON(failureReason, failureReason_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncedUserCount, syncedUserCount_);
        DARABONBA_PTR_TO_JSON(synchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentStep, currentStep_);
        DARABONBA_PTR_FROM_JSON(failureReason, failureReason_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncedUserCount, syncedUserCount_);
        DARABONBA_PTR_FROM_JSON(synchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      virtual bool empty() const override { return this->currentStep_ == nullptr
        && this->failureReason_ == nullptr && this->status_ == nullptr && this->syncedUserCount_ == nullptr && this->synchronizationJobId_ == nullptr && this->taskId_ == nullptr; };
      // currentStep Field Functions 
      bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
      void deleteCurrentStep() { this->currentStep_ = nullptr;};
      inline string getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
      inline Data& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


      // failureReason Field Functions 
      bool hasFailureReason() const { return this->failureReason_ != nullptr;};
      void deleteFailureReason() { this->failureReason_ = nullptr;};
      inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
      inline Data& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncedUserCount Field Functions 
      bool hasSyncedUserCount() const { return this->syncedUserCount_ != nullptr;};
      void deleteSyncedUserCount() { this->syncedUserCount_ = nullptr;};
      inline int32_t getSyncedUserCount() const { DARABONBA_PTR_GET_DEFAULT(syncedUserCount_, 0) };
      inline Data& setSyncedUserCount(int32_t syncedUserCount) { DARABONBA_PTR_SET_VALUE(syncedUserCount_, syncedUserCount) };


      // synchronizationJobId Field Functions 
      bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
      void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
      inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
      inline Data& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The current execution step of the AgentCore asynchronous task. This field may not be returned if the task has not started.
      shared_ptr<string> currentStep_ {};
      // The failure summary of the asynchronous task. This field is not returned if no failure information is available. You can use this field along with the taskId and requestId for troubleshooting.
      shared_ptr<string> failureReason_ {};
      // The status of the synchronization task. Valid values: PENDING: pending. RUNNING: running. PAUSED: paused. SUCCESS: successful. FAILED: failed. CANCELED: canceled. The first three are non-terminal states, and the last three are terminal states. Query the status until a terminal state is reached to determine the result.
      shared_ptr<string> status_ {};
      // The number of user entries that have been read locally and written or updated, including existing users. This does not represent the number of newly added users or the synchronization percentage. This field is not returned when no statistics are available.
      shared_ptr<int32_t> syncedUserCount_ {};
      // The ID of the downstream synchronization task in AgentIdentity. This field is not returned if the task has not been created. You cannot use this ID in place of taskId to call GetIdentityProviderSyncJob.
      shared_ptr<string> synchronizationJobId_ {};
      // The local task ID in AgentCore returned by CreateIdentityProviderSyncJob, which is different from the synchronizationJobId in AgentIdentity. You must use the same workspace and identity provider when querying the task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateIdentityProviderSyncJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateIdentityProviderSyncJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateIdentityProviderSyncJobResponseBody::Data) };
    inline CreateIdentityProviderSyncJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateIdentityProviderSyncJobResponseBody::Data) };
    inline CreateIdentityProviderSyncJobResponseBody& setData(const CreateIdentityProviderSyncJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateIdentityProviderSyncJobResponseBody& setData(CreateIdentityProviderSyncJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateIdentityProviderSyncJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateIdentityProviderSyncJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIdentityProviderSyncJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateIdentityProviderSyncJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code of the API request. SUCCESS indicates that the request is successful, but does not indicate that the asynchronous synchronization task is completed.
    shared_ptr<string> code_ {};
    // The business data returned in the response.
    shared_ptr<CreateIdentityProviderSyncJobResponseBody::Data> data_ {};
    // The HTTP status code of the API request, which does not indicate the execution result of the asynchronous task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message of the API request.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API request is successful. To check whether the asynchronous task is completed, query the task status.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
