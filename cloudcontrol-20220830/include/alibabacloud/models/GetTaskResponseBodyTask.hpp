// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskResponseBodyTaskError.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetTaskResponseBodyTask() = default ;
    GetTaskResponseBodyTask(const GetTaskResponseBodyTask &) = default ;
    GetTaskResponseBodyTask(GetTaskResponseBodyTask &&) = default ;
    GetTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTask() = default ;
    GetTaskResponseBodyTask& operator=(const GetTaskResponseBodyTask &) = default ;
    GetTaskResponseBodyTask& operator=(GetTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->error_ != nullptr && this->product_ != nullptr && this->regionId_ != nullptr && this->resourceId_ != nullptr && this->resourcePath_ != nullptr
        && this->resourceType_ != nullptr && this->status_ != nullptr && this->taskAction_ != nullptr && this->taskId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTaskResponseBodyTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::GetTaskResponseBodyTaskError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::GetTaskResponseBodyTaskError) };
    inline Models::GetTaskResponseBodyTaskError error() { DARABONBA_PTR_GET(error_, Models::GetTaskResponseBodyTaskError) };
    inline GetTaskResponseBodyTask& setError(const Models::GetTaskResponseBodyTaskError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline GetTaskResponseBodyTask& setError(Models::GetTaskResponseBodyTaskError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetTaskResponseBodyTask& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTaskResponseBodyTask& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetTaskResponseBodyTask& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourcePath Field Functions 
    bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
    void deleteResourcePath() { this->resourcePath_ = nullptr;};
    inline string resourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
    inline GetTaskResponseBodyTask& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetTaskResponseBodyTask& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTaskResponseBodyTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline GetTaskResponseBodyTask& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskResponseBodyTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error returned for the task.
    std::shared_ptr<Models::GetTaskResponseBodyTaskError> error_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> product_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The path of the resources. The relative resource ID. The resource path contains the complete resource location (parent resource/child resource).
    std::shared_ptr<string> resourcePath_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The task state.
    // 
    // Pending
    // 
    // Running
    // 
    // Succeeded
    // 
    // Failed
    // 
    // Cancelling
    // 
    // Cancelled.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the task operation. Valid values: Create, Update, and Delete.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
