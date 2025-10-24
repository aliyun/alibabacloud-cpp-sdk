// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODYINSTANCECONNECTIONMODELS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODYINSTANCECONNECTIONMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels() = default ;
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels(const BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels &) = default ;
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels(BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels &&) = default ;
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels() = default ;
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& operator=(const BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels &) = default ;
    BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& operator=(BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->appInstanceId_ == nullptr && return this->errorCode_ == nullptr && return this->instanceId_ == nullptr && return this->persistentAppInstanceId_ == nullptr && return this->taskId_ == nullptr
        && return this->taskStatus_ == nullptr && return this->ticket_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // persistentAppInstanceId Field Functions 
    bool hasPersistentAppInstanceId() const { return this->persistentAppInstanceId_ != nullptr;};
    void deletePersistentAppInstanceId() { this->persistentAppInstanceId_ = nullptr;};
    inline string persistentAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceId_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setPersistentAppInstanceId(string persistentAppInstanceId) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceId_, persistentAppInstanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> appInstanceId_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the cloud phone instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> persistentAppInstanceId_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The state of the task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The ticket used to connect to the cloud phone instance.
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
