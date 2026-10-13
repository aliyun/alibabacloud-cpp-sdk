// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCDISCOVERYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCDISCOVERYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseSyncDiscoveryTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseSyncDiscoveryTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseSyncDiscoveryTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContextDatabaseSyncDiscoveryTaskResponseBody() = default ;
    GetContextDatabaseSyncDiscoveryTaskResponseBody(const GetContextDatabaseSyncDiscoveryTaskResponseBody &) = default ;
    GetContextDatabaseSyncDiscoveryTaskResponseBody(GetContextDatabaseSyncDiscoveryTaskResponseBody &&) = default ;
    GetContextDatabaseSyncDiscoveryTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseSyncDiscoveryTaskResponseBody() = default ;
    GetContextDatabaseSyncDiscoveryTaskResponseBody& operator=(const GetContextDatabaseSyncDiscoveryTaskResponseBody &) = default ;
    GetContextDatabaseSyncDiscoveryTaskResponseBody& operator=(GetContextDatabaseSyncDiscoveryTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CancelRequestedAt, cancelRequestedAt_);
        DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_TO_JSON(Containers, containers_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(PluginRef, pluginRef_);
        DARABONBA_PTR_TO_JSON(Scanned, scanned_);
        DARABONBA_PTR_TO_JSON(SourceConfig, sourceConfig_);
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CancelRequestedAt, cancelRequestedAt_);
        DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(Containers, containers_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(PluginRef, pluginRef_);
        DARABONBA_PTR_FROM_JSON(Scanned, scanned_);
        DARABONBA_PTR_FROM_JSON(SourceConfig, sourceConfig_);
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
      virtual bool empty() const override { return this->cancelRequestedAt_ == nullptr
        && this->connectionId_ == nullptr && this->containers_ == nullptr && this->createdAt_ == nullptr && this->error_ == nullptr && this->pluginRef_ == nullptr
        && this->scanned_ == nullptr && this->sourceConfig_ == nullptr && this->sourceId_ == nullptr && this->state_ == nullptr && this->taskId_ == nullptr
        && this->updatedAt_ == nullptr; };
      // cancelRequestedAt Field Functions 
      bool hasCancelRequestedAt() const { return this->cancelRequestedAt_ != nullptr;};
      void deleteCancelRequestedAt() { this->cancelRequestedAt_ = nullptr;};
      inline string getCancelRequestedAt() const { DARABONBA_PTR_GET_DEFAULT(cancelRequestedAt_, "") };
      inline Data& setCancelRequestedAt(string cancelRequestedAt) { DARABONBA_PTR_SET_VALUE(cancelRequestedAt_, cancelRequestedAt) };


      // connectionId Field Functions 
      bool hasConnectionId() const { return this->connectionId_ != nullptr;};
      void deleteConnectionId() { this->connectionId_ = nullptr;};
      inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
      inline Data& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


      // containers Field Functions 
      bool hasContainers() const { return this->containers_ != nullptr;};
      void deleteContainers() { this->containers_ = nullptr;};
      inline int64_t getContainers() const { DARABONBA_PTR_GET_DEFAULT(containers_, 0L) };
      inline Data& setContainers(int64_t containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // pluginRef Field Functions 
      bool hasPluginRef() const { return this->pluginRef_ != nullptr;};
      void deletePluginRef() { this->pluginRef_ = nullptr;};
      inline string getPluginRef() const { DARABONBA_PTR_GET_DEFAULT(pluginRef_, "") };
      inline Data& setPluginRef(string pluginRef) { DARABONBA_PTR_SET_VALUE(pluginRef_, pluginRef) };


      // scanned Field Functions 
      bool hasScanned() const { return this->scanned_ != nullptr;};
      void deleteScanned() { this->scanned_ = nullptr;};
      inline int64_t getScanned() const { DARABONBA_PTR_GET_DEFAULT(scanned_, 0L) };
      inline Data& setScanned(int64_t scanned) { DARABONBA_PTR_SET_VALUE(scanned_, scanned) };


      // sourceConfig Field Functions 
      bool hasSourceConfig() const { return this->sourceConfig_ != nullptr;};
      void deleteSourceConfig() { this->sourceConfig_ = nullptr;};
      inline string getSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(sourceConfig_, "") };
      inline Data& setSourceConfig(string sourceConfig) { DARABONBA_PTR_SET_VALUE(sourceConfig_, sourceConfig) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Data& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The time when the cancellation was requested.
      shared_ptr<string> cancelRequestedAt_ {};
      // The connection ID, which is a system-generated UUID.
      shared_ptr<string> connectionId_ {};
      // The number of containers.
      shared_ptr<int64_t> containers_ {};
      // The time when the task was created.
      shared_ptr<string> createdAt_ {};
      // The error message.
      shared_ptr<string> error_ {};
      // The plug-in reference.
      shared_ptr<string> pluginRef_ {};
      // The number of scanned items.
      shared_ptr<int64_t> scanned_ {};
      // The datasource config. The structure varies depending on the plug-in.
      shared_ptr<string> sourceConfig_ {};
      // The data source ID, which is a system-generated UUID.
      shared_ptr<string> sourceId_ {};
      // The discovery task status. Valid values: queued, running, succeeded, cancelled, and failed.
      shared_ptr<string> state_ {};
      // The discovery task ID, which is a system-generated UUID.
      shared_ptr<string> taskId_ {};
      // The time when the task was last updated.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContextDatabaseSyncDiscoveryTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContextDatabaseSyncDiscoveryTaskResponseBody::Data) };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContextDatabaseSyncDiscoveryTaskResponseBody::Data) };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setData(const GetContextDatabaseSyncDiscoveryTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setData(GetContextDatabaseSyncDiscoveryTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContextDatabaseSyncDiscoveryTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetContextDatabaseSyncDiscoveryTaskResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
