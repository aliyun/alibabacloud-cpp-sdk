// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDESKTOPGROUPTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDESKTOPGROUPTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDesktopGroupTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDesktopGroupTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDesktopGroupTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    SetDesktopGroupTimerRequest() = default ;
    SetDesktopGroupTimerRequest(const SetDesktopGroupTimerRequest &) = default ;
    SetDesktopGroupTimerRequest(SetDesktopGroupTimerRequest &&) = default ;
    SetDesktopGroupTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDesktopGroupTimerRequest() = default ;
    SetDesktopGroupTimerRequest& operator=(const SetDesktopGroupTimerRequest &) = default ;
    SetDesktopGroupTimerRequest& operator=(SetDesktopGroupTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cronExpression_ != nullptr
        && this->desktopGroupId_ != nullptr && this->force_ != nullptr && this->regionId_ != nullptr && this->resetType_ != nullptr && this->timerType_ != nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline SetDesktopGroupTimerRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetDesktopGroupTimerRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline SetDesktopGroupTimerRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDesktopGroupTimerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline int32_t resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0) };
    inline SetDesktopGroupTimerRequest& setResetType(int32_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline int32_t timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, 0) };
    inline SetDesktopGroupTimerRequest& setTimerType(int32_t timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    // The cron expression for the scheduled task. This parameter is required when `TimerType` is set to 2, 3, or 4.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The ID of the cloud computer share.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // Specifies whether to forcefully execute the scheduled task.
    std::shared_ptr<bool> force_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the disk that you want to reset.
    // 
    // Valid values:
    // 
    // - does not reset disks.
    // - resets only the system disk.
    // - resets only the user disk.
    // - resets the system disk and the user disk.
    std::shared_ptr<int32_t> resetType_ = nullptr;
    // The type of the scheduled task.
    // 
    // Valid values:
    // 
    // *   1: scheduled reset
    // *   2: scheduled startup
    // *   3: scheduled stop
    // *   4: scheduled restart
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
