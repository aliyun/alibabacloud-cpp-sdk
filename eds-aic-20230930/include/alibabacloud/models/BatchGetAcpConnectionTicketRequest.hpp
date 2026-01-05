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
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceTasks, instanceTasks_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceTasks, instanceTasks_);
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
      // The ID of the cloud phone instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->instanceGroupId_ == nullptr && this->instanceIds_ == nullptr && this->instanceTasks_ == nullptr; };
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


  protected:
    // The ID of the user to whom the cloud phone instance is assigned.
    shared_ptr<string> endUserId_ {};
    // The ID of the instance group.
    shared_ptr<string> instanceGroupId_ {};
    // The IDs of the cloud phone instances. You can specify 1 to 100 IDs of cloud phone instances.
    shared_ptr<vector<string>> instanceIds_ {};
    // The instance connection tasks.
    shared_ptr<vector<BatchGetAcpConnectionTicketRequest::InstanceTasks>> instanceTasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
