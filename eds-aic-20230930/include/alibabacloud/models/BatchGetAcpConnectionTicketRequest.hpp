// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETREQUEST_HPP_
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
  class BatchGetAcpConnectionTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetAcpConnectionTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceTasks, instanceTasks_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceTasks, instanceTasks_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
    };
    BatchGetAcpConnectionTicketRequest() = default ;
    BatchGetAcpConnectionTicketRequest(const BatchGetAcpConnectionTicketRequest &) = default ;
    BatchGetAcpConnectionTicketRequest(BatchGetAcpConnectionTicketRequest &&) = default ;
    BatchGetAcpConnectionTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetAcpConnectionTicketRequest() = default ;
    BatchGetAcpConnectionTicketRequest& operator=(const BatchGetAcpConnectionTicketRequest &) = default ;
    BatchGetAcpConnectionTicketRequest& operator=(BatchGetAcpConnectionTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTasks& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      InstanceTasks() = default ;
      InstanceTasks(const InstanceTasks &) = default ;
      InstanceTasks(InstanceTasks &&) = default ;
      InstanceTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTasks() = default ;
      InstanceTasks& operator=(const InstanceTasks &) = default ;
      InstanceTasks& operator=(InstanceTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->taskId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline InstanceTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->connectionMode_ == nullptr
        && this->endUserId_ == nullptr && this->instanceGroupId_ == nullptr && this->instanceIds_ == nullptr && this->instanceTasks_ == nullptr && this->ports_ == nullptr; };
    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline BatchGetAcpConnectionTicketRequest& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline BatchGetAcpConnectionTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline BatchGetAcpConnectionTicketRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceTasks Field Functions 
    bool hasInstanceTasks() const { return this->instanceTasks_ != nullptr;};
    void deleteInstanceTasks() { this->instanceTasks_ = nullptr;};
    inline const vector<BatchGetAcpConnectionTicketRequest::InstanceTasks> & getInstanceTasks() const { DARABONBA_PTR_GET_CONST(instanceTasks_, vector<BatchGetAcpConnectionTicketRequest::InstanceTasks>) };
    inline vector<BatchGetAcpConnectionTicketRequest::InstanceTasks> getInstanceTasks() { DARABONBA_PTR_GET(instanceTasks_, vector<BatchGetAcpConnectionTicketRequest::InstanceTasks>) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceTasks(const vector<BatchGetAcpConnectionTicketRequest::InstanceTasks> & instanceTasks) { DARABONBA_PTR_SET_VALUE(instanceTasks_, instanceTasks) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceTasks(vector<BatchGetAcpConnectionTicketRequest::InstanceTasks> && instanceTasks) { DARABONBA_PTR_SET_RVALUE(instanceTasks_, instanceTasks) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<string> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<string>) };
    inline vector<string> getPorts() { DARABONBA_PTR_GET(ports_, vector<string>) };
    inline BatchGetAcpConnectionTicketRequest& setPorts(const vector<string> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline BatchGetAcpConnectionTicketRequest& setPorts(vector<string> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


  protected:
    // The connection mode.
    shared_ptr<string> connectionMode_ {};
    // The ID of the assigned user. If you do not specify this parameter, the system user assigned in the background is used to obtain the ticket.
    // 
    // <props="china">
    // The usage of this parameter varies based on the Cloud Phone edition and the instance streaming mode:
    // 
    // - Cloud Phone Instance Edition or Cloud Phone Matrix Edition (preemptive mode): You can obtain a `Ticket` only by using the same `EnduserId`.
    // - Cloud Phone Matrix Edition (collaborative mode): You can pass different `EnduserId` values to obtain `Ticket` values and stream for different users (up to 5) at the same time. You can pass only one `EnduserId` at a time.
    // 
    // > You can define the instance streaming mode by using the `StreamMode` parameter of the `ModifyCloudPhoneNode` operation.
    shared_ptr<string> endUserId_ {};
    // The instance group ID.
    shared_ptr<string> instanceGroupId_ {};
    // The list of Cloud Phone instance IDs. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The instance connection tasks. This parameter is used to query whether the ticket retrieval task is completed.
    shared_ptr<vector<BatchGetAcpConnectionTicketRequest::InstanceTasks>> instanceTasks_ {};
    // The list of custom connection ports.
    shared_ptr<vector<string>> ports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
