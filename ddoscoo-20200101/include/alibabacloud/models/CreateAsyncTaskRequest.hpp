// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateAsyncTaskRequest() = default ;
    CreateAsyncTaskRequest(const CreateAsyncTaskRequest &) = default ;
    CreateAsyncTaskRequest(CreateAsyncTaskRequest &&) = default ;
    CreateAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAsyncTaskRequest() = default ;
    CreateAsyncTaskRequest& operator=(const CreateAsyncTaskRequest &) = default ;
    CreateAsyncTaskRequest& operator=(CreateAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->taskParams_ != nullptr && this->taskType_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAsyncTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline CreateAsyncTaskRequest& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline CreateAsyncTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The details of the asynchronous export task. The value is a JSON string. The field in the value varies with **TaskType**.
    // 
    // If **TaskType** is set to **1**, **3**, **4**, **5**, or **6**, the following filed is returned:
    // 
    // *   **instanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // 
    // If **TaskType** is set to **2**, the following field is returned:
    // 
    // *   **domain**: the domain name of the website, which must be of the STRING type. If you do not specify this field, the forwarding rules of all websites are exported.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskParams_ = nullptr;
    // The type of the asynchronous export task that you want to create. Valid values:
    // 
    // *   **1**: the task to export the port forwarding rules of an instance
    // *   **2**: the task to export the forwarding rules of a website protected by an instance
    // *   **3**: the task to export the session persistence and health check settings of an instance
    // *   **4**: the task to export the anti-DDoS mitigation policies of an instance
    // *   **5**: the task to download the blacklist for destination IP addresses of an instance
    // *   **6**: the task to download the whitelist for destination IP addresses of an instance
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
