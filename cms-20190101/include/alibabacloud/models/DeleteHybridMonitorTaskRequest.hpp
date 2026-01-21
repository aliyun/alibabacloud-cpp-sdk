// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYBRIDMONITORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYBRIDMONITORTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteHybridMonitorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DeleteHybridMonitorTaskRequest() = default ;
    DeleteHybridMonitorTaskRequest(const DeleteHybridMonitorTaskRequest &) = default ;
    DeleteHybridMonitorTaskRequest(DeleteHybridMonitorTaskRequest &&) = default ;
    DeleteHybridMonitorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHybridMonitorTaskRequest() = default ;
    DeleteHybridMonitorTaskRequest& operator=(const DeleteHybridMonitorTaskRequest &) = default ;
    DeleteHybridMonitorTaskRequest& operator=(DeleteHybridMonitorTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && this->regionId_ == nullptr && this->targetUserId_ == nullptr && this->taskId_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteHybridMonitorTaskRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteHybridMonitorTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline DeleteHybridMonitorTaskRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DeleteHybridMonitorTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The name of the namespace.
    // 
    // The name can contain uppercase letters, lowercase letters, digits, and hyphens (-).
    // 
    // > This parameter is required only if you call this operation to delete metric import tasks for Alibaba Cloud services. In this case, the `TaskType` parameter is set to `aliyun_fc`.
    shared_ptr<string> namespace_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the member account.
    // 
    // > This parameter is required only if you use a management account to call this operation to query metric import tasks that belong to a member in a resource directory. In this case, the `TaskType` parameter is set to `aliyun_fc`.
    shared_ptr<string> targetUserId_ {};
    // The ID of the metric import task.
    // 
    // For information about how to obtain the ID of a metric import task, see [DescribeHybridMonitorTaskList](https://help.aliyun.com/document_detail/428624.html).
    // 
    // > This parameter is required only if you call this operation to delete metrics for the logs that are imported from Log Service. In this case, the `TaskType` parameter is set to `aliyun_sls`.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
