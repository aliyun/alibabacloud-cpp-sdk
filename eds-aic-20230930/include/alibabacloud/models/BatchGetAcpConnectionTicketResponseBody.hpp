// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BatchGetAcpConnectionTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetAcpConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConnectionModels, instanceConnectionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConnectionModels, instanceConnectionModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetAcpConnectionTicketResponseBody() = default ;
    BatchGetAcpConnectionTicketResponseBody(const BatchGetAcpConnectionTicketResponseBody &) = default ;
    BatchGetAcpConnectionTicketResponseBody(BatchGetAcpConnectionTicketResponseBody &&) = default ;
    BatchGetAcpConnectionTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetAcpConnectionTicketResponseBody() = default ;
    BatchGetAcpConnectionTicketResponseBody& operator=(const BatchGetAcpConnectionTicketResponseBody &) = default ;
    BatchGetAcpConnectionTicketResponseBody& operator=(BatchGetAcpConnectionTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceConnectionModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceConnectionModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(Ticket, ticket_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceConnectionModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
      };
      InstanceConnectionModels() = default ;
      InstanceConnectionModels(const InstanceConnectionModels &) = default ;
      InstanceConnectionModels(InstanceConnectionModels &&) = default ;
      InstanceConnectionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceConnectionModels() = default ;
      InstanceConnectionModels& operator=(const InstanceConnectionModels &) = default ;
      InstanceConnectionModels& operator=(InstanceConnectionModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->errorCode_ == nullptr && this->instanceId_ == nullptr && this->persistentAppInstanceId_ == nullptr && this->taskId_ == nullptr
        && this->taskStatus_ == nullptr && this->ticket_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline InstanceConnectionModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline InstanceConnectionModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InstanceConnectionModels& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceConnectionModels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // persistentAppInstanceId Field Functions 
      bool hasPersistentAppInstanceId() const { return this->persistentAppInstanceId_ != nullptr;};
      void deletePersistentAppInstanceId() { this->persistentAppInstanceId_ = nullptr;};
      inline string getPersistentAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceId_, "") };
      inline InstanceConnectionModels& setPersistentAppInstanceId(string persistentAppInstanceId) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceId_, persistentAppInstanceId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline InstanceConnectionModels& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline InstanceConnectionModels& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // ticket Field Functions 
      bool hasTicket() const { return this->ticket_ != nullptr;};
      void deleteTicket() { this->ticket_ = nullptr;};
      inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
      inline InstanceConnectionModels& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      shared_ptr<string> appInstanceId_ {};
      shared_ptr<string> errorCode_ {};
      // The ID of the cloud phone instance.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> persistentAppInstanceId_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
      // The state of the task.
      shared_ptr<string> taskStatus_ {};
      // The ticket used to connect to the cloud phone instance.
      shared_ptr<string> ticket_ {};
    };

    virtual bool empty() const override { return this->instanceConnectionModels_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceConnectionModels Field Functions 
    bool hasInstanceConnectionModels() const { return this->instanceConnectionModels_ != nullptr;};
    void deleteInstanceConnectionModels() { this->instanceConnectionModels_ = nullptr;};
    inline const vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels> & getInstanceConnectionModels() const { DARABONBA_PTR_GET_CONST(instanceConnectionModels_, vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels>) };
    inline vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels> getInstanceConnectionModels() { DARABONBA_PTR_GET(instanceConnectionModels_, vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels>) };
    inline BatchGetAcpConnectionTicketResponseBody& setInstanceConnectionModels(const vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels> & instanceConnectionModels) { DARABONBA_PTR_SET_VALUE(instanceConnectionModels_, instanceConnectionModels) };
    inline BatchGetAcpConnectionTicketResponseBody& setInstanceConnectionModels(vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels> && instanceConnectionModels) { DARABONBA_PTR_SET_RVALUE(instanceConnectionModels_, instanceConnectionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetAcpConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the instance connection tasks.
    shared_ptr<vector<BatchGetAcpConnectionTicketResponseBody::InstanceConnectionModels>> instanceConnectionModels_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
