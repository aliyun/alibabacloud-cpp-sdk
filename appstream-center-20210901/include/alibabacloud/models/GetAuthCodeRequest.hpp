// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAuthCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetAuthCodeRequest() = default ;
    GetAuthCodeRequest(const GetAuthCodeRequest &) = default ;
    GetAuthCodeRequest(GetAuthCodeRequest &&) = default ;
    GetAuthCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthCodeRequest() = default ;
    GetAuthCodeRequest& operator=(const GetAuthCodeRequest &) = default ;
    GetAuthCodeRequest& operator=(GetAuthCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr && this->bizRegionId_ == nullptr && this->resourceType_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAuthCodeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline GetAuthCodeRequest& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetAuthCodeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAuthCodeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAuthCodeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetAuthCodeRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the application to connect to. When specifying this parameter, you must also provide the matching AppVersionId. If omitted, the application configured in the creation or validation environment is used.
    shared_ptr<string> appId_ {};
    // The ID of the application version to connect to. This parameter is used together with AppId. This parameter is not the image version ID.
    shared_ptr<string> appVersionId_ {};
    // The region compatibility parameter. The destination region of the current connection resource is determined by the execution region of the task. You cannot use this parameter to switch the task region. Omit this parameter.
    shared_ptr<string> bizRegionId_ {};
    // The type of resource to connect to.
    // 
    // - **BUILDER**: Connects to the creation environment.
    // - **VALIDATE**: Connects to the validation environment.
    // 
    // The corresponding environment must be created and in a connectable state.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The ID of the existing creation or validation task. Create the task and confirm that the corresponding resources are available before calling this operation.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The actual task type. It must match the creation or validation task corresponding to the TaskId. Use the TaskType returned by GetTask. The task must also have connectable creation or validation resources. You cannot obtain an authorization code for distribution or snapshot tasks that do not have connection resources.
    // 
    // Recognized task types:
    // 
    // - **AUTO_CREATE_IMAGE_VHD**: Automatically creates a VHD image.
    // - **RETRY_CREATE_IMAGE_VHD**: Retries VHD image creation.
    // - **AUTO_CREATE_VHD**: Automatically creates a VHD.
    // - **RETRY_VHD**: Retries VHD creation.
    // - **AUTO_VALIDATE_VHD**: Automatically validates a VHD.
    // - **RETRY_VALIDATE_VHD**: Retries VHD validation.
    // - **APPLY_VHD_BUILDER**: Applies for a VHD application recording environment.
    // - **ADAPT_AUTO**: Automatically creates application adaptation.
    // - **ADAPT_AUTO_RETRY**: Retries automatic application adaptation creation.
    // - **ADAPT_MANUAL**: Manually creates application adaptation.
    // - **ADAPT_MANUAL_RETRY**: Retries manual application adaptation creation.
    // - **DESKTOP_CUSTOM_IMAGE**: Creates a custom image for cloud desktops.
    // - **DESKTOP_CUSTOM_IMAGE_RETRY**: Retries custom image creation for cloud desktops.
    // - **IMAGE_MANUAL**: Manually creates an image.
    // - **IMAGE_MANUAL_RETRY**: Retries manual image creation.
    // - **IMAGE_FROM_INSTANCE**: Creates an image based on an instance.
    // - **IMAGE_FROM_INSTANCE_RETRY**: Retries image creation based on an instance.
    // - **IMAGE_DISTRIBUTE**: Distributes an image to multiple regions.
    // - **IMAGE_DISTRIBUTE_RETRY**: Retries image distribution.
    // - **SNAPSHOT_DISTRIBUTE**: Distributes a snapshot to multiple regions.
    // - **SNAPSHOT_DISTRIBUTE_RETRY**: Retries snapshot distribution.
    // - **SNAPSHOT_FROM_DISK**: Creates a snapshot based on a disk.
    // - **SNAPSHOT_FROM_DISK_RETRY**: Retries snapshot creation based on a disk.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
