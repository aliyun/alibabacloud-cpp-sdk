// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEOTATASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEOTATASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ApproveOtaTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveOtaTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(OtaType, otaType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveOtaTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(OtaType, otaType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ApproveOtaTaskRequest() = default ;
    ApproveOtaTaskRequest(const ApproveOtaTaskRequest &) = default ;
    ApproveOtaTaskRequest(ApproveOtaTaskRequest &&) = default ;
    ApproveOtaTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveOtaTaskRequest() = default ;
    ApproveOtaTaskRequest& operator=(const ApproveOtaTaskRequest &) = default ;
    ApproveOtaTaskRequest& operator=(ApproveOtaTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->bizRegionId_ == nullptr && return this->otaType_ == nullptr && return this->startTime_ == nullptr && return this->taskId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ApproveOtaTaskRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ApproveOtaTaskRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // otaType Field Functions 
    bool hasOtaType() const { return this->otaType_ != nullptr;};
    void deleteOtaType() { this->otaType_ = nullptr;};
    inline string otaType() const { DARABONBA_PTR_GET_DEFAULT(otaType_, "") };
    inline ApproveOtaTaskRequest& setOtaType(string otaType) { DARABONBA_PTR_SET_VALUE(otaType_, otaType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ApproveOtaTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ApproveOtaTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the delivery group. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the region where the delivery group resides. You can call the [ListRegions](https://help.aliyun.com/document_detail/428500.html) operation to query the list of regions supported by App Streaming.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The type of the OTA update task.
    // 
    // Valid values:
    // 
    // *   Fota: update of the system components of Alibaba Cloud Workspace
    // *   AppUpdate
    // *   ImageUpdate
    // 
    // This parameter is required.
    std::shared_ptr<string> otaType_ = nullptr;
    // The start time of the OTA update task. The time follows the ISO 8601 standard.
    // 
    // This parameter is required.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the OTA update task. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // >  Each successful call to the `ApproveOtaTask` operation causes a value change of this parameter.`` Before you call this operation, call the `ListAppInstanceGroup` operation again to obtain the latest value of this parameter.``
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
