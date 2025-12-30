// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UseDesktopTimers, useDesktopTimers_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UseDesktopTimers, useDesktopTimers_);
    };
    ModifyDesktopTimerRequest() = default ;
    ModifyDesktopTimerRequest(const ModifyDesktopTimerRequest &) = default ;
    ModifyDesktopTimerRequest(ModifyDesktopTimerRequest &&) = default ;
    ModifyDesktopTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopTimerRequest() = default ;
    ModifyDesktopTimerRequest& operator=(const ModifyDesktopTimerRequest &) = default ;
    ModifyDesktopTimerRequest& operator=(ModifyDesktopTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesktopTimers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopTimers& obj) { 
        DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Enforce, enforce_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(ResetType, resetType_);
        DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopTimers& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
        DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
      };
      DesktopTimers() = default ;
      DesktopTimers(const DesktopTimers &) = default ;
      DesktopTimers(DesktopTimers &&) = default ;
      DesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopTimers() = default ;
      DesktopTimers& operator=(const DesktopTimers &) = default ;
      DesktopTimers& operator=(DesktopTimers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && this->cronExpression_ == nullptr && this->enforce_ == nullptr && this->interval_ == nullptr && this->operationType_ == nullptr && this->resetType_ == nullptr
        && this->timerType_ == nullptr; };
      // allowClientSetting Field Functions 
      bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
      void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
      inline bool getAllowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
      inline DesktopTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline DesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // enforce Field Functions 
      bool hasEnforce() const { return this->enforce_ != nullptr;};
      void deleteEnforce() { this->enforce_ = nullptr;};
      inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
      inline DesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline DesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline DesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // resetType Field Functions 
      bool hasResetType() const { return this->resetType_ != nullptr;};
      void deleteResetType() { this->resetType_ = nullptr;};
      inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
      inline DesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


      // timerType Field Functions 
      bool hasTimerType() const { return this->timerType_ != nullptr;};
      void deleteTimerType() { this->timerType_ = nullptr;};
      inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
      inline DesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    protected:
      // Specifies whether to allow end users to configure the scheduled task.
      shared_ptr<bool> allowClientSetting_ {};
      // The cron expression of the schedule.
      // 
      // > The time must be in UTC. For example, for 24:00 (UTC+8), you must set the value to 0 0 16 ? \\* 1,2,3,4,5,6,7
      shared_ptr<string> cronExpression_ {};
      // Specifies whether to forcibly execute the scheduled task.
      // 
      // Valid values:
      // 
      // *   true: forcibly executes the scheduled task regardless of the status and connection of the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   false: does not forcibly execute the scheduled task.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<bool> enforce_ {};
      // The interval at which the scheduled task is executed. Unit: minutes.
      shared_ptr<int32_t> interval_ {};
      // The operations that scheduled tasks support. This parameter is valid only when TimerType is set to NoConnect.
      // 
      // Valid values:
      // 
      // *   Hibernate: hibernates the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Shutdown: stops the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> operationType_ {};
      // The reset type of the cloud computers.
      // 
      // Valid values:
      // 
      // *   RESET_TYPE_SYSTE: resets the system disk.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   RESET_TYPE_BOTH: resets data and user disks.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> resetType_ {};
      // The type of the scheduled task.
      // 
      // Valid values:
      // 
      // *   NoOperationDisconnect: Disconnects the cloud computers without performing operations on the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   LogoutShutdown: Stops the cloud computers when end users log out Alibaba Cloud Workspace clients.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NoConnect: Disconnects the cloud computers when end users perform one of the actions that is specified by the OperationType parameter.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   TimerBoot: Starts the cloud computers on schedule.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   TimerReset: Resets the cloud computers on schedule.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   LoginAutoConnect: automatically connects to the cloud computers when end users log on to Alibaba Cloud Workspace clients.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NoOperationShutdown: Stops the cloud computers without performing operations on the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   TimerShutdown: Stops the cloud computers on schedule.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NoOperationReboot: Restarts the cloud computers without performing operations on the cloud computers.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   TimerReboot: Restarts the cloud computers on schedule.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> timerType_ {};
    };

    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopTimers_ == nullptr && this->regionId_ == nullptr && this->useDesktopTimers_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ModifyDesktopTimerRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ModifyDesktopTimerRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<ModifyDesktopTimerRequest::DesktopTimers> & getDesktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<ModifyDesktopTimerRequest::DesktopTimers>) };
    inline vector<ModifyDesktopTimerRequest::DesktopTimers> getDesktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<ModifyDesktopTimerRequest::DesktopTimers>) };
    inline ModifyDesktopTimerRequest& setDesktopTimers(const vector<ModifyDesktopTimerRequest::DesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline ModifyDesktopTimerRequest& setDesktopTimers(vector<ModifyDesktopTimerRequest::DesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopTimerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // useDesktopTimers Field Functions 
    bool hasUseDesktopTimers() const { return this->useDesktopTimers_ != nullptr;};
    void deleteUseDesktopTimers() { this->useDesktopTimers_ = nullptr;};
    inline bool getUseDesktopTimers() const { DARABONBA_PTR_GET_DEFAULT(useDesktopTimers_, false) };
    inline ModifyDesktopTimerRequest& setUseDesktopTimers(bool useDesktopTimers) { DARABONBA_PTR_SET_VALUE(useDesktopTimers_, useDesktopTimers) };


  protected:
    // The IDs of the cloud computers.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    // The details of the scheduled task on cloud computers.
    shared_ptr<vector<ModifyDesktopTimerRequest::DesktopTimers>> desktopTimers_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to use the `DesktopTimers`** parameter. Set the value to `true`**.
    shared_ptr<bool> useDesktopTimers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
