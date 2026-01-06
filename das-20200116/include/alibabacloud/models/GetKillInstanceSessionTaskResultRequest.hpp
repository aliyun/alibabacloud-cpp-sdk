// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetKillInstanceSessionTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKillInstanceSessionTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKillInstanceSessionTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetKillInstanceSessionTaskResultRequest() = default ;
    GetKillInstanceSessionTaskResultRequest(const GetKillInstanceSessionTaskResultRequest &) = default ;
    GetKillInstanceSessionTaskResultRequest(GetKillInstanceSessionTaskResultRequest &&) = default ;
    GetKillInstanceSessionTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKillInstanceSessionTaskResultRequest() = default ;
    GetKillInstanceSessionTaskResultRequest& operator=(const GetKillInstanceSessionTaskResultRequest &) = default ;
    GetKillInstanceSessionTaskResultRequest& operator=(GetKillInstanceSessionTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetKillInstanceSessionTaskResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetKillInstanceSessionTaskResultRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetKillInstanceSessionTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID.
    // 
    // >  You must specify this parameter if your database instance is a PolarDB for MySQL cluster.
    shared_ptr<string> nodeId_ {};
    // The task ID. You can obtain the task ID from the response parameters of the [CreateKillInstanceSessionTask](https://help.aliyun.com/document_detail/609246.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
