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
        && this->bizRegionId_ == nullptr && this->otaType_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ApproveOtaTaskRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ApproveOtaTaskRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // otaType Field Functions 
    bool hasOtaType() const { return this->otaType_ != nullptr;};
    void deleteOtaType() { this->otaType_ = nullptr;};
    inline string getOtaType() const { DARABONBA_PTR_GET_DEFAULT(otaType_, "") };
    inline ApproveOtaTaskRequest& setOtaType(string otaType) { DARABONBA_PTR_SET_VALUE(otaType_, otaType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ApproveOtaTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ApproveOtaTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The delivery group ID. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The region ID of the delivery group. You can call [ListRegions](~~ListRegions~~) to query the list of regions supported by Wuying Cloud Application.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The over-the-air upgrade task type.
    // 
    // This parameter is required.
    shared_ptr<string> otaType_ {};
    // The start time of the over-the-air upgrade task. Specify the time in ISO 8601 format.
    // 
    // This parameter is required.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> startTime_ {};
    // The over-the-air upgrade task ID. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the ID.
    // 
    // > Each successful call of `ApproveOtaTask` causes the `TaskId` to change. Therefore, before calling this operation again, call `ListAppInstanceGroup` again to obtain the latest `TaskId`.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
