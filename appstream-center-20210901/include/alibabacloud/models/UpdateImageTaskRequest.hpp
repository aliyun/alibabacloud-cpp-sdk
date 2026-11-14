// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateImageTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStep, taskStep_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStep, taskStep_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateImageTaskRequest() = default ;
    UpdateImageTaskRequest(const UpdateImageTaskRequest &) = default ;
    UpdateImageTaskRequest(UpdateImageTaskRequest &&) = default ;
    UpdateImageTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageTaskRequest() = default ;
    UpdateImageTaskRequest& operator=(const UpdateImageTaskRequest &) = default ;
    UpdateImageTaskRequest& operator=(UpdateImageTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->code_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskStep_ == nullptr && this->taskType_ == nullptr
        && this->versionId_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline UpdateImageTaskRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateImageTaskRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateImageTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateImageTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStep Field Functions 
    bool hasTaskStep() const { return this->taskStep_ != nullptr;};
    void deleteTaskStep() { this->taskStep_ = nullptr;};
    inline string getTaskStep() const { DARABONBA_PTR_GET_DEFAULT(taskStep_, "") };
    inline UpdateImageTaskRequest& setTaskStep(string taskStep) { DARABONBA_PTR_SET_VALUE(taskStep_, taskStep) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline UpdateImageTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateImageTaskRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // **Not enabled. Do not pass this parameter.** The task region is determined by the associated creation resource. This parameter is not used to switch regions. The example "N/A (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> bizRegionId_ {};
    // **Not enabled. Do not pass this parameter.** This parameter is not involved in task status updates. The example "N/A (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> code_ {};
    // The status identifier reported by the creation resource. It must match the task type and the current creation stage. You cannot directly use the overall task status from GetTask as a substitute. Valid values for image creation tasks (IMAGE_MANUAL and IMAGE_MANUAL_RETRY):
    // - **BUILDER_INIT_SUCCESS**: The creation environment is initialized.
    // - **DOWNLOAD_SUCCESS**: The creation resource is downloaded.
    // - **DOWNLOAD_FAILED**: The creation resource fails to be downloaded.
    // - **BUILD_START**: The image creation starts.
    // - **BUILD_SUCCESS**: The application installation and image configuration are successful.
    // - **BUILD_FAILED**: The application installation or image configuration fails.
    // - **BUILD_COMPLETE**: The creation is completed and the subsequent verification process starts.
    // - **BUILD_COMPLETE_SKIP_VALIDATE**: The creation is completed in compatibility mode. Whether verification is performed depends on the task query result.
    // Valid values for application adaptation tasks:
    // - **BUILDER_INIT_SUCCESS**: The creation environment is initialized.
    // - **DOWNLOAD_SUCCESS**: The application resource is downloaded.
    // - **DOWNLOAD_FAILED**: The application resource fails to be downloaded.
    // - **BUILD_START**: The application recording starts.
    // - **BUILD_SUCCESS**: The application recording is successful.
    // - **BUILD_FAILED**: The application recording fails.
    // - **NAS_DISPATCH_SUCCESS**: The application files are distributed to NAS.
    // - **NAS_DISPATCH_FAILED**: The application files fail to be distributed to NAS.
    // - **OSS_UPLOAD_SUCCESS**: The application files are uploaded to OSS.
    // - **OSS_UPLOAD_FAILED**: The application files fail to be uploaded to OSS.
    // - **UPLOAD_SUCCESS**: The application files are uploaded.
    // - **UPLOAD_FAILED**: The application files fail to be uploaded.
    // - **BUILD_COMPLETE**: The application creation is completed.
    shared_ptr<string> status_ {};
    // The ID of the task to be updated. The task and its creation resource must already exist.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // **Not enabled. Do not pass this parameter.** This parameter is not supported for updating the task step. The example "N/A (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> taskStep_ {};
    // The actual type of the task to be updated, which must match the task specified by TaskId. Status updates support the following application adaptation and manual image creation tasks. Valid values:
    // - **ADAPT_AUTO**: Creates an application adaptation automatically.
    // - **ADAPT_AUTO_RETRY**: Retries automatic application adaptation creation.
    // - **ADAPT_MANUAL**: Creates an application adaptation manually.
    // - **ADAPT_MANUAL_RETRY**: Retries manual application adaptation creation.
    // - **IMAGE_MANUAL**: Creates an image manually.
    // - **IMAGE_MANUAL_RETRY**: Retries manual image creation.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
    // **Not enabled. Do not pass this parameter.** This parameter is not supported for modifying the image version associated with the task. The example "N/A (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
